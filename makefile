CFLAGS := -O2 -s
LDFLAGS := -O2 -s -lm

AR ?= ar
LUA ?= luajit

CFLAGS += -Iluajit/src -Iraylib/src
LDFLAGS += -Lluajit/src -lluajit -Lraylib/src -lraylib

ifeq ($(OS),Windows_NT)
	LDFLAGS += -lopengl32 -lgdi32 -lwinmm
endif

BOOT_FILES := src/raylib.lua src/raylua.lua

all: raylua_s raylua_e

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

all: luajit raylib raylua_s raylua_e

luajit:
	$(MAKE) -C luajit amalg BUILDMODE=static

raylib:
	$(MAKE) CFLAGS="$(CFLAGS)" LDFLAGS="$(LDFLAGS)" -C raylib/src

raylua_s: src/raylua.o src/raylua_s.o
	$(CC) -o $@ $^ $(LDFLAGS)

raylua_e: src/raylua.o src/raylua_e.o src/raylua_builder.o src/lib/miniz.o
	$(CC) -o $@ $^ $(LDFLAGS)

src/raylua.o: src/autogen/boot.c src/autogen/bind.c

src/raylua_builder.o: src/autogen/builder.c

src/autogen/boot.c: src/raylib.lua src/raylua.lua
	$(LUA) tools/lua2str.lua $@ raylua_boot_lua $^

src/autogen/bind.c:
	$(LUA) tools/genbind.lua $@

src/autogen/builder.c: src/raylua_builder.lua
	$(LUA) tools/lua2str.lua $@ raylua_builder_lua $^

clean:
	rm -rf raylua_s raylua_e src/raylua_e.o src/raylua_s.o src/raylua.o src/autogen/*.c
	$(MAKE) -C luajit clean
	$(MAKE) -C raylib clean

.PHONY: all src/autogen/bind.c src/autogen/boot.c raylua_s raylua_e luajit raylib clean
