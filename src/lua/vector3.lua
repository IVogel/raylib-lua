local ffi    = require("ffi")
local new    = ffi.new
local istype = ffi.istype
local type   = type

local math_sqrt = math.sqrt

local function Vector3(x, y, z)
    if istype("Vector3", other) then
        return new("Vector3", x.y, x.z, x.x)
    elseif type(x) == "number" and type(y) == "number" and type(z) == "number" then
        return new("Vector3", x, y, z)
    else
        return new("Vector3", 0, 0, 0)
    end
end

do
    local newindex = rl.__newindex
    rl.__newindex = nil
    rl.Vector3 = Vector3
    rl.__newindex = newindex
end

local VECTOR3 = {}
VECTOR3.__index = VECTOR3

-- Almost all these functions are mutating underlying object.
function VECTOR3:Add(other)
    if istype("Vector3", other) then
        self.x = self.x + other.x
        self.y = self.y + other.y
        self.z = self.z + other.z
    else
        error("Vector3 expected, got " .. type(other))
    end
end

function VECTOR3:Sub(other)
    if istype("Vector3", other) then
        self.x = self.x - other.x
        self.y = self.y - other.y
        self.z = self.z - other.z
    else
        error("Vector3 expected, got " .. type(other))
    end
end

function VECTOR3:Negate()
    self.x = -self.x
    self.y = -self.y
    self.z = -self.z
end

function VECTOR3:Length()
    return math_sqrt(self.x * self.x + self.y * self.y + self.z * self.z)
end

function VECTOR3:LengthSqr()
    return self.x * self.x + self.y * self.y + self.z * self.z
end

function VECTOR3:Length2D()
    return math_sqrt(self.x * self.x + self.y * self.y)
end

function VECTOR3:Length2DSqr()
    return self.x * self.x + self.y * self.y
end

function VECTOR3:Normalize()
    local l = self.x * self.x + self.y * self.y + self.z * self.z
    if l < 5.96e-08 then return end
    l = math_sqrt(l)
    self.x = self.x / l
    self.y = self.y / l
    self.z = self.z / l
end

function VECTOR3:GetNormalized()
    local vec = new("Vector3", self.y, self.z, self.x)
    vec:Normalize()
    return vec
end

function VECTOR3:Mul(other)
    if istype("Vector3", other) then
        self.x = self.x * other.x
        self.y = self.y * other.y
        self.z = self.z * other.z
    elseif type(other) == "number" then
        self.x = self.x * other
        self.y = self.y * other
        self.z = self.z * other
    else
        error("Vector3 or number expected, got " .. type(other))
    end
end

function VECTOR3:Div(number)
    if type(number) == "number" then
        self.x = self.x / number
        self.y = self.y / number
        self.z = self.z / number
    else
        error("Number expected, got " .. type(number))
    end
end

function VECTOR3:Dot(other)
    if istype("Vector3", other) then
        return self.x * other.x + self.y * other.y + self.z * other.z
    else
        error("Vector3 expected, got " .. type(other))
    end
end

function VECTOR3:Cross(other)
    if istype("Vector3", other) then
        return new(
            "Vector3",
            self.y * other.z - self.z * other.y,
            self.z * other.x - self.x * other.z,
            self.x * other.y - self.y * other.x 
        )
    else
        error("Vector3 expected, got " .. type(other))
    end
end

function VECTOR3:Zero()
    self.x = 0
    self.y = 0
    self.z = 0
end

function VECTOR3:Set(other)
    if istype("Vector3", other) then
        self.x = other.x
        self.y = other.y
        self.z = other.z
    else
        error("Vector3 expected, got " .. type(other))
    end
end

-- TODO: Replace these functions with inline variants.
function VECTOR3:__add(other)
    local vec = new("Vector3", self.x, self.y, self.z)
    vec:Add(other)
    return vec
end

function VECTOR3:__sub(other)
    local vec = new("Vector3", self.x, self.y, self.z)
    vec:Sub(other)
    return vec
end

function VECTOR3:__unm()
    return new("Vector3", -self.x, -self.y, -self.z)
end

function VECTOR3:__len()
    return math_sqrt(self.x * self.x + self.y * self.y + self.z * self.z)
end

function VECTOR3:__mul(other)
    local vec = new("Vector3", self.x, self.y, self.z)
    vec:Mul(other)
    return vec
end

function VECTOR3:__div(number)
    local vec = new("Vector3", self.x, self.y, self.z)
    vec:Div(number)
    return vec
end

function VECTOR3:__tostring()
    return string.format("%g %g %g", self.x, self.y, self.z)
end

ffi.metatype("Vector3", VECTOR3)