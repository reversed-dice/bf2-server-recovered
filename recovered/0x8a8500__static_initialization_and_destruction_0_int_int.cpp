// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120 --param large-function-insns=5000
// FUNCTION: BF2 0x8a8500
#include <iostream>
#include <string>
#include <list>
#include <vector>

#define W8(o)  (*(unsigned char*)((char*)this + (o)))
#define W16(o) (*(unsigned short*)((char*)this + (o)))
#define W32(o) (*(unsigned int*)((char*)this + (o)))
#define W64(o) (*(const char**)((char*)this + (o)))
#define pushNode(o, lst) do { std::_List_node<void*>* n_ = (std::_List_node<void*>*)operator new(sizeof(std::_List_node<void*>)); n_->_M_data = (o); n_->hook((std::_List_node_base*)&lst); } while (0)

namespace dice { namespace hfe {

class ConsoleObject {
public:
    virtual ~ConsoleObject();
    static const char* mDefaultDynamicObjectName;
    static const char* mDefaultStaticObjectName;
    static unsigned int mDefaultAccess;
    static unsigned char mDefaultCategory;
};

class ConsoleObjectBaseImpl : public ConsoleObject {
public:
    ConsoleObjectBaseImpl(const char*, const char*);
    virtual ~ConsoleObjectBaseImpl();
    int getValueForArgType(std::string);
    char raw[0x10a - 8];
};

struct Vec3 {
    float x, y, z;
    Vec3() : x(0), y(0), z(0) {}
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
};

struct Vec4 {
    float x, y, z, w;
    Vec4() : x(0), y(0), z(0), w(0) {}
};

class Vars {
public:
    static float* getFloat(char const*, float);
    static int* getInt(char const*, int);
    static Vec3* getVec3(char const*, const Vec3&);
};

struct ListHead {
    void* a;
    void* b;
    __attribute__((always_inline)) ListHead() { a = this; b = this; }
    ~ListHead() {}
};

struct GInt {
    int v;
    GInt(int a) : v(a) {}
};

class SetConsoleClassDefaults {
public:
    SetConsoleClassDefaults(char const*, unsigned int, unsigned char);
};

} }

using namespace dice::hfe;

namespace dice { namespace hfe { namespace { 
__attribute__((noinline)) void addToClassObjectList(ConsoleObject*);
} } } 

namespace dice { namespace hfe { namespace { 
ListHead SpawnSystemList;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults SpawnManagerfullAccessSetConsoleClassDefaults("SpawnManager", 2, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass37 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass37() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listSpawnGroups") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject37;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessSetConsoleClassDefaults("ObjectTemplate", 2, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass62 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass62() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setSpawnPositionOffset") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd44af;
        W32(0xe0) = ~-(unsigned int)(std::string("Math::Vec3").compare("std::string") == 0);
    }
} consoleObject62;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass65 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass65() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setSpawnRotation") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd44af;
        W32(0xe0) = ~-(unsigned int)(std::string("Math::Vec3").compare("std::string") == 0);
    }
} consoleObject65;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass67 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass67() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setSpawnPreventionDelay") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject67;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass68 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass68() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "group") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba8580;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba8580;
        W32(0xe0) = ~-(unsigned int)(std::string("U32").compare("std::string") == 0);
    }
} consoleObject68;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass69 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass69() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ControlPointId") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba8580;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, SpawnSystemList);
        W64(0x90) = (const char*)0xba8580;
        W32(0xe0) = ~-(unsigned int)(std::string("U32").compare("std::string") == 0);
    }
} consoleObject69;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass70 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass70() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setSpawnAsParaTroper") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, SpawnSystemList);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject70;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass71 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass71() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setAIEnterOnSpawn") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, SpawnSystemList);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject71;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass72 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass72() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setEnterOnSpawn") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, SpawnSystemList);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject72;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass73 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass73() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setMinSpawnHeight") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, SpawnSystemList);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject73;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass74 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass74() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setMinSpawnHeight") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, SpawnSystemList);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject74;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass75 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass75() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setScatterSpawnPositions") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, SpawnSystemList);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject75;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass76 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass76() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setOnlyForAI") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, SpawnSystemList);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject76;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass77 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass77() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setOnlyForHuman") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, SpawnSystemList);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject77;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass78 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass78() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setAllowSpawnCloseToVehicle") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, SpawnSystemList);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject78;
} } } 

