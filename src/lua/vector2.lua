local ffi    = require("ffi")
local new    = ffi.new
local istype = ffi.istype
local type   = type

local math_sqrt = math.sqrt

local function Vector2(x, y, z)
    if istype("Vector2", other) then
        return new("Vector2", x.x, x.y)
    elseif type(x) == "number" and type(y) == "number" and type(z) == "number" then
        return new("Vector2", x, y, z)
    else
        return new("Vector2", 0, 0, 0)
    end
end

do
    local newindex = rl.__newindex
    rl.__newindex = nil
    rl.Vector2 = Vector2
    rl.__newindex = newindex
end

local VECTOR2 = {}
VECTOR2.__index = VECTOR2

-- Almost all these functions are mutating underlying object.
function VECTOR2:Add(other)
    if istype("Vector2", other) then
        self.x = self.x + other.x
        self.y = self.y + other.y
    else
        error("Vector2 expected, got " .. type(other))
    end
end

function VECTOR2:Sub(other)
    if istype("Vector2", other) then
        self.x = self.x - other.x
        self.y = self.y - other.y
    else
        error("Vector2 expected, got " .. type(other))
    end
end

function VECTOR2:Negate()
    self.x = -self.x
    self.y = -self.y
end

function VECTOR2:Length()
    return math_sqrt(self.x * self.x + self.y * self.y)
end

function VECTOR2:LengthSqr()
    return self.x * self.x + self.y * self.y
end

-- Just for the compatibility with Vector3
function VECTOR2:Length2D()
    return math_sqrt(self.x * self.x + self.y * self.y)
end

function VECTOR2:Length2DSqr()
    return self.x * self.x + self.y * self.y
end

function VECTOR2:Normalize()
    local l = self.x * self.x + self.y * self.y
    if l < 5.96e-08 then return end
    l = math_sqrt(l)
    self.x = self.x / l
    self.y = self.y / l
end

function VECTOR2:GetNormalized()
    local vec = new("Vector2", self.x, self.y)
    vec:Normalize()
    return vec
end

function VECTOR2:Mul(other)
    if istype("Vector2", other) then
        self.x = self.x * other.x
        self.y = self.y * other.y
    elseif type(other) == "number" then
        self.x = self.x * other
        self.y = self.y * other
    else
        error("Vector2 or number expected, got " .. type(other))
    end
end

function VECTOR2:Div(number)
    if type(number) == "number" then
        self.x = self.x / number
        self.y = self.y / number
    else
        error("Number expected, got " .. type(number))
    end
end

function VECTOR2:Dot(other)
    if istype("Vector2", other) then
        return  self.x * other.x + self.y * other.y
    else
        error("Vector2 expected, got " .. type(other))
    end
end

function VECTOR2:Zero()
    self.x = 0
    self.y = 0
end

function VECTOR2:Set(other)
    if istype("Vector2", other) then
        self.x = other.x
        self.y = other.y
    else
        error("Vector2 expected, got " .. type(other))
    end
end

function VECTOR2:__add(other)
    local vec = new("Vector2", self.x, self.y)
    vec:Add(other)
    return vec
end

function VECTOR2:__sub(other)
    local vec = new("Vector2", self.x, self.y)
    vec:Sub(other)
    return vec
end

function VECTOR2:__unm()
    return new("Vector2", -self.x, -self.y)
end

function VECTOR2:__len()
    return math_sqrt(self.x * self.x + self.y * self.y)
end

function VECTOR2:__mul(other)
    local vec = new("Vector2", self.x, self.y)
    vec:Mul(other)
    return vec
end

function VECTOR2:__div(number)
    local vec = new("Vector2", self.x, self.y)
    vec:Div(number)
    return vec
end

function VECTOR2:__tostring()
    return string.format("%g %g", self.x, self.y)
end

ffi.metatype("Vector2", VECTOR2)