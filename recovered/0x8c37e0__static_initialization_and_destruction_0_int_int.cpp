// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120
// FUNCTION: BF2 0x8c37e0
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
};

struct Vec4 {
    float x, y, z, w;
    Vec4() : x(0), y(0), z(0), w(0) {}
};

class SetConsoleClassDefaults {
public:
    SetConsoleClassDefaults(char const*, unsigned int, unsigned char);
};

} }

using namespace dice::hfe;

namespace dice { namespace hfe { namespace world { namespace { 
__attribute__((noinline)) void addToClassObjectList(ConsoleObject*);
} } } } 

namespace dice { namespace hfe { namespace world { 
std::vector<void*> dummyVec;
} } } 

namespace dice { namespace hfe { 
std::string defaultSquadNames[] = {
    "Unassigned",
    "Alpha",
    "Bravo",
    "Charlie",
    "Delta",
    "Echo",
    "Foxtrot",
    "Gamma",
    "Hotel",
    "India",
    "Juliet",
    "Kilo",
    "Lima",
    "Mike",
    "November",
    "Oscar",
    "Papa",
    "Quebec",
    "Romeo",
    "Sierra",
    "Tango",
    "Uniform",
    "Victor",
    "Whiskey",
    "Xray",
    "Yankee",
    "Zulu",
};
} } 

namespace dice { namespace hfe { namespace world { 
Vec3 zeroVec;
} } } 

namespace dice { namespace hfe { namespace world { namespace { 
std::list<void*> objTemplBFList;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectfullAccessSetConsoleClassDefaults("Object", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass236 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass236() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setTeam") {
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
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject236;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass237 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass237() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "team") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject237;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass238 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass238() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setActive") {
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
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject238;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass239 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass239() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setControlPointId") {
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
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject239;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass240 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass240() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "getControlPointId") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject240;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass241 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass241() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setVisibleTeam") {
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
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject241;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass242 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass242() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "getVisibleTeam") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject242;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass243 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass243() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "spawnOffset") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject243;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass252 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass252() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addAbsolutePoint") {
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
} consoleObject252;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults RendererfullAccessSetConsoleClassDefaults("Renderer", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass257 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass257() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "soldier.debugDrawSkeletons") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject257;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass258 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass258() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "soldier.debugDrawCollision") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject258;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass259 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass259() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "soldier.debugCharacterMode") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject259;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessSetConsoleClassDefaults("ObjectTemplate", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass265 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass265() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "geometry1P") {
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
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject265;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass266 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass266() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "geometry3P") {
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
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject266;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass267 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass267() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "skeleton1P") {
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
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject267;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass268 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass268() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "skeleton3P") {
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
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject268;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass269 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass269() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationSystem1P") {
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
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject269;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass270 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass270() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationSystem3P") {
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
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject270;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass271 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass271() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "poseCameraPosition") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W64(0x98) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject271;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass272 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass272() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "inventorySize") {
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
        W32(0xe0) = getValueForArgType(std::string("U32"));
    }
} consoleObject272;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass273 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass273();
} consoleObject273;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass274 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass274() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "soundFilter") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject274;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass275 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass275() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "manDownCameraOffsetInDof") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject275;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass276 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass276() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "manDownCameraOffsetInUp") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject276;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass277 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass277() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "sprintRecoverTime") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject277;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass278 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass278();
} consoleObject278;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass279 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass279();
} consoleObject279;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass280 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass280();
} consoleObject280;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass281 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass281();
} consoleObject281;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass282 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass282();
} consoleObject282;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass292 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass292();
} consoleObject292;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass293 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass293();
} consoleObject293;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass294 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass294();
} consoleObject294;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass298 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass298();
} consoleObject298;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass299 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass299();
} consoleObject299;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass300 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass300();
} consoleObject300;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass301 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass301();
} consoleObject301;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass302 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass302();
} consoleObject302;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass303 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass303();
} consoleObject303;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass308 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass308();
} consoleObject308;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass309 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass309();
} consoleObject309;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass310 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass310();
} consoleObject310;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass311 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass311();
} consoleObject311;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass314 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass314();
} consoleObject314;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass315 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass315();
} consoleObject315;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCFireArmSetConsoleClassDefaults("ObjectTemplate", 2, 16);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass323 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass323();
} consoleObject323;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass324 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass324();
} consoleObject324;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass325 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass325();
} consoleObject325;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass326 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass326();
} consoleObject326;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass327 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass327();
} consoleObject327;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass329 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass329();
} consoleObject329;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass330 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass330();
} consoleObject330;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass331 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass331();
} consoleObject331;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass332 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass332();
} consoleObject332;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass333 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass333();
} consoleObject333;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass334 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass334();
} consoleObject334;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass335 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass335();
} consoleObject335;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass336 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass336();
} consoleObject336;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass337 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass337();
} consoleObject337;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass338 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass338();
} consoleObject338;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass339 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass339();
} consoleObject339;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass340 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass340();
} consoleObject340;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass341 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass341();
} consoleObject341;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass342 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass342();
} consoleObject342;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass343 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass343();
} consoleObject343;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass344 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass344();
} consoleObject344;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass345 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass345();
} consoleObject345;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass346 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass346();
} consoleObject346;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass353 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass353();
} consoleObject353;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass354 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass354();
} consoleObject354;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass355 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass355();
} consoleObject355;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass356 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass356();
} consoleObject356;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass357 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass357();
} consoleObject357;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass358 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass358();
} consoleObject358;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass359 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass359();
} consoleObject359;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass360 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass360();
} consoleObject360;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass361 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass361();
} consoleObject361;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass362 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass362();
} consoleObject362;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass363 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass363();
} consoleObject363;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass364 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass364();
} consoleObject364;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass365 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass365();
} consoleObject365;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass368 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass368();
} consoleObject368;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass369 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass369();
} consoleObject369;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass370 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass370();
} consoleObject370;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass371 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass371();
} consoleObject371;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass372 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass372();
} consoleObject372;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass373 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass373();
} consoleObject373;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass374 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass374();
} consoleObject374;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass375 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass375();
} consoleObject375;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass376 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass376();
} consoleObject376;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass377 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass377();
} consoleObject377;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass380 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass380();
} consoleObject380;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass381 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass381();
} consoleObject381;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass382 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass382();
} consoleObject382;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass383 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass383();
} consoleObject383;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass386 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass386();
} consoleObject386;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass391 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass391();
} consoleObject391;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass392 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass392();
} consoleObject392;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass393 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass393();
} consoleObject393;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass394 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass394();
} consoleObject394;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass395 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass395();
} consoleObject395;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass396 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass396();
} consoleObject396;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass399 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass399();
} consoleObject399;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass400 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass400();
} consoleObject400;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass401 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass401();
} consoleObject401;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass402 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass402();
} consoleObject402;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass407 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass407();
} consoleObject407;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass408 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass408();
} consoleObject408;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass409 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass409();
} consoleObject409;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass410 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass410();
} consoleObject410;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass411 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass411();
} consoleObject411;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass412 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass412();
} consoleObject412;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass413 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass413();
} consoleObject413;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass414 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass414();
} consoleObject414;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass415 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass415();
} consoleObject415;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass416 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass416();
} consoleObject416;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass417 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass417();
} consoleObject417;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass418 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass418();
} consoleObject418;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass419 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass419();
} consoleObject419;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass420 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass420();
} consoleObject420;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass425 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass425();
} consoleObject425;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass426 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass426();
} consoleObject426;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass427 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass427();
} consoleObject427;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass428 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass428();
} consoleObject428;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass429 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass429();
} consoleObject429;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass430 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass430();
} consoleObject430;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass431 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass431();
} consoleObject431;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass436 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass436();
} consoleObject436;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass437 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass437();
} consoleObject437;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass438 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass438();
} consoleObject438;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass441 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass441();
} consoleObject441;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass442 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass442();
} consoleObject442;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass443 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass443();
} consoleObject443;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass446 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass446();
} consoleObject446;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass449 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass449();
} consoleObject449;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass450 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass450();
} consoleObject450;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass451 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass451();
} consoleObject451;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass452 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass452();
} consoleObject452;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass453 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass453();
} consoleObject453;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass454 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass454();
} consoleObject454;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass455 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass455();
} consoleObject455;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass456 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass456();
} consoleObject456;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass457 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass457();
} consoleObject457;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass458 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass458();
} consoleObject458;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass459 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass459();
} consoleObject459;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass460 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass460();
} consoleObject460;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass461 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass461();
} consoleObject461;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass462 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass462();
} consoleObject462;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass463 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass463();
} consoleObject463;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass464 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass464();
} consoleObject464;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass465 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass465();
} consoleObject465;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass466 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass466();
} consoleObject466;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass467 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass467();
} consoleObject467;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass468 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass468();
} consoleObject468;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass469 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass469();
} consoleObject469;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass474 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass474();
} consoleObject474;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass475 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass475();
} consoleObject475;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass478 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass478();
} consoleObject478;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass479 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass479();
} consoleObject479;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass480 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass480();
} consoleObject480;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass481 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass481();
} consoleObject481;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass482 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass482();
} consoleObject482;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass483 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass483();
} consoleObject483;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass484 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass484();
} consoleObject484;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass487 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass487();
} consoleObject487;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass488 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass488();
} consoleObject488;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass489 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass489();
} consoleObject489;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass490 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass490();
} consoleObject490;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass491 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass491();
} consoleObject491;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass492 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass492();
} consoleObject492;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass499 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass499();
} consoleObject499;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass500 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass500();
} consoleObject500;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass501 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass501();
} consoleObject501;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass502 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass502();
} consoleObject502;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass503 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass503();
} consoleObject503;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass504 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass504();
} consoleObject504;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass505 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass505();
} consoleObject505;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass506 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass506();
} consoleObject506;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass509 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass509();
} consoleObject509;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass510 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass510();
} consoleObject510;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass511 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass511();
} consoleObject511;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass512 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass512();
} consoleObject512;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass513 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass513();
} consoleObject513;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass514 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass514();
} consoleObject514;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass517 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass517();
} consoleObject517;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass518 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass518();
} consoleObject518;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass519 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass519();
} consoleObject519;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass520 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass520();
} consoleObject520;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass524 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass524();
} consoleObject524;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass525 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass525();
} consoleObject525;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass526 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass526();
} consoleObject526;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass527 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass527();
} consoleObject527;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass528 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass528();
} consoleObject528;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass529 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass529();
} consoleObject529;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass530 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass530();
} consoleObject530;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass531 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass531();
} consoleObject531;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass532 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass532();
} consoleObject532;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass535 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass535();
} consoleObject535;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass536 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass536();
} consoleObject536;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass537 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass537();
} consoleObject537;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass540 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass540();
} consoleObject540;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass541 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass541();
} consoleObject541;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass542 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass542();
} consoleObject542;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass543 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass543();
} consoleObject543;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass546 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass546();
} consoleObject546;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass547 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass547();
} consoleObject547;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass548 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass548();
} consoleObject548;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass549 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass549();
} consoleObject549;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass555 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass555();
} consoleObject555;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass556 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass556();
} consoleObject556;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCProjectileSetConsoleClassDefaults("ObjectTemplate", 2, 20);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass563 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass563();
} consoleObject563;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass564 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass564();
} consoleObject564;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass565 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass565();
} consoleObject565;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass567 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass567();
} consoleObject567;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass568 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass568();
} consoleObject568;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass569 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass569();
} consoleObject569;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass571 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass571();
} consoleObject571;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass572 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass572();
} consoleObject572;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass573 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass573();
} consoleObject573;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass575 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass575();
} consoleObject575;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass576 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass576();
} consoleObject576;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass578 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass578();
} consoleObject578;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass579 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass579();
} consoleObject579;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass580 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass580();
} consoleObject580;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass582 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass582();
} consoleObject582;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass584 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass584();
} consoleObject584;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass585 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass585();
} consoleObject585;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass586 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass586();
} consoleObject586;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass587 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass587();
} consoleObject587;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass588 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass588();
} consoleObject588;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass591 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass591();
} consoleObject591;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass593 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass593();
} consoleObject593;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass594 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass594();
} consoleObject594;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass595 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass595();
} consoleObject595;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass596 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass596();
} consoleObject596;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass598 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass598();
} consoleObject598;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass599 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass599();
} consoleObject599;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass600 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass600();
} consoleObject600;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass602 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass602();
} consoleObject602;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass604 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass604();
} consoleObject604;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass610 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass610();
} consoleObject610;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass611 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass611();
} consoleObject611;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass614 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass614();
} consoleObject614;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass615 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass615();
} consoleObject615;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass616 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass616();
} consoleObject616;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass617 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass617();
} consoleObject617;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass620 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass620();
} consoleObject620;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass621 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass621();
} consoleObject621;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass622 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass622();
} consoleObject622;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass623 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass623();
} consoleObject623;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass626 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass626();
} consoleObject626;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass627 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass627();
} consoleObject627;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass628 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass628();
} consoleObject628;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass629 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass629();
} consoleObject629;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass630 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass630();
} consoleObject630;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass631 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass631();
} consoleObject631;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass636 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass636();
} consoleObject636;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass637 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass637();
} consoleObject637;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass638 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass638();
} consoleObject638;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass641 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass641();
} consoleObject641;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass642 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass642();
} consoleObject642;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass643 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass643();
} consoleObject643;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass644 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass644();
} consoleObject644;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass645 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass645();
} consoleObject645;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass646 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass646();
} consoleObject646;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass647 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass647();
} consoleObject647;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass648 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass648();
} consoleObject648;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass649 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass649();
} consoleObject649;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass650 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass650();
} consoleObject650;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass651 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass651();
} consoleObject651;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass652 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass652();
} consoleObject652;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass653 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass653();
} consoleObject653;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass654 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass654();
} consoleObject654;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass655 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass655();
} consoleObject655;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass656 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass656();
} consoleObject656;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass657 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass657();
} consoleObject657;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass659 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass659();
} consoleObject659;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass660 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass660();
} consoleObject660;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass661 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass661();
} consoleObject661;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass662 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass662();
} consoleObject662;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass663 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass663();
} consoleObject663;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass664 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass664();
} consoleObject664;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass665 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass665();
} consoleObject665;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass666 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass666();
} consoleObject666;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass667 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass667();
} consoleObject667;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass668 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass668();
} consoleObject668;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass669 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass669();
} consoleObject669;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass670 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass670();
} consoleObject670;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass671 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass671();
} consoleObject671;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass672 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass672();
} consoleObject672;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass674 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass674();
} consoleObject674;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass675 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass675();
} consoleObject675;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass676 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass676();
} consoleObject676;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass677 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass677();
} consoleObject677;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass678 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass678();
} consoleObject678;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass679 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass679();
} consoleObject679;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass680 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass680();
} consoleObject680;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass682 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass682();
} consoleObject682;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass683 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass683();
} consoleObject683;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass684 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass684();
} consoleObject684;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass685 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass685();
} consoleObject685;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass686 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass686();
} consoleObject686;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass687 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass687();
} consoleObject687;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass688 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass688();
} consoleObject688;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass690 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass690();
} consoleObject690;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass691 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass691();
} consoleObject691;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass692 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass692();
} consoleObject692;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass693 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass693();
} consoleObject693;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass694 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass694();
} consoleObject694;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass695 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass695();
} consoleObject695;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass696 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass696();
} consoleObject696;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass698 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass698();
} consoleObject698;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass699 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass699();
} consoleObject699;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass702 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass702();
} consoleObject702;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass703 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass703();
} consoleObject703;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass706 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass706();
} consoleObject706;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass707 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass707();
} consoleObject707;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass708 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass708();
} consoleObject708;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass709 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass709();
} consoleObject709;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass710 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass710();
} consoleObject710;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass711 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass711();
} consoleObject711;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass714 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass714();
} consoleObject714;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass715 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass715();
} consoleObject715;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass718 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass718();
} consoleObject718;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass719 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass719();
} consoleObject719;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass720 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass720();
} consoleObject720;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass721 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass721();
} consoleObject721;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass722 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass722();
} consoleObject722;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCDefaultSetConsoleClassDefaults("ObjectTemplate", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass899 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass899();
} consoleObject899;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass900 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass900();
} consoleObject900;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass901 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass901();
} consoleObject901;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass902 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass902();
} consoleObject902;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass903 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass903();
} consoleObject903;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass904 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass904();
} consoleObject904;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass908 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass908();
} consoleObject908;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass909 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass909();
} consoleObject909;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass910 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass910();
} consoleObject910;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass912 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass912();
} consoleObject912;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass913 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass913();
} consoleObject913;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass918 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass918();
} consoleObject918;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass919 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass919();
} consoleObject919;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass920 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass920();
} consoleObject920;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass921 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass921();
} consoleObject921;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass922 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass922();
} consoleObject922;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass923 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass923();
} consoleObject923;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass925 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass925();
} consoleObject925;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass926 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass926();
} consoleObject926;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass927 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass927();
} consoleObject927;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass928 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass928();
} consoleObject928;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass930 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass930();
} consoleObject930;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass931 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass931();
} consoleObject931;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass932 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass932();
} consoleObject932;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass933 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass933();
} consoleObject933;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass934 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass934();
} consoleObject934;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass935 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass935();
} consoleObject935;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass936 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass936();
} consoleObject936;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass937 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass937();
} consoleObject937;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass938 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass938();
} consoleObject938;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass945 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass945();
} consoleObject945;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass946 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass946();
} consoleObject946;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass947 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass947();
} consoleObject947;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass951 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass951();
} consoleObject951;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass952 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass952();
} consoleObject952;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass953 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass953();
} consoleObject953;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass954 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass954();
} consoleObject954;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass955 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass955();
} consoleObject955;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass956 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass956();
} consoleObject956;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass957 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass957();
} consoleObject957;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass958 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass958();
} consoleObject958;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass959 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass959();
} consoleObject959;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass960 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass960();
} consoleObject960;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass961 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass961();
} consoleObject961;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass962 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass962();
} consoleObject962;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass963 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass963();
} consoleObject963;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass964 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass964();
} consoleObject964;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass968 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass968();
} consoleObject968;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass969 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass969();
} consoleObject969;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass973 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass973();
} consoleObject973;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass974 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass974();
} consoleObject974;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass975 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass975();
} consoleObject975;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass976 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass976();
} consoleObject976;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass977 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass977();
} consoleObject977;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass978 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass978();
} consoleObject978;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass979 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass979();
} consoleObject979;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass983 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass983();
} consoleObject983;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass984 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass984();
} consoleObject984;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass985 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass985();
} consoleObject985;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass986 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass986();
} consoleObject986;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass987 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass987();
} consoleObject987;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass988 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass988();
} consoleObject988;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass989 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass989();
} consoleObject989;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass990 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass990();
} consoleObject990;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass991 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass991();
} consoleObject991;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass992 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass992();
} consoleObject992;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass993 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass993();
} consoleObject993;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass994 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass994();
} consoleObject994;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass995 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass995() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "teamFromClosestCP") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject995;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass996 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass996() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "visibleOn3dMap") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject996;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass997 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass997() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "3dMapIcon") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject997;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass998 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass998() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addVehicleType") {
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
        W64(0x90) = (const char*)0xbcd1a5;
        W32(0xe0) = getValueForArgType(std::string("VehicleCategory"));
    }
} consoleObject998;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1003 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1003() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "damage") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1003;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1007 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1007() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addLinePoint") {
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
        W64(0x90) = (const char*)0xbcd1d3;
        W32(0xe0) = getValueForArgType(std::string("Vec2"));
    }
} consoleObject1007;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1008 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1008() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "triggerRadius") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1008;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCPlayerControlObjectSetConsoleClassDefaults("ObjectTemplate", 2, 15);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1016 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass1016() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "seatAnimationSystem") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject1016;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1017 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass1017() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "seatParent") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject1017;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1018 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass1018() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "seatPosition") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject1018;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1019 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass1019() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "seatRotation") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject1019;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1020 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1020() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "seatInformation") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 3;
        W32(0x2c) = 3;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xb3a92b;
        W64(0xa0) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("Vec3"));
        W32(0xe8) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject1020;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1021 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1021() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "seatInformation") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 3;
        W32(0x2c) = 3;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xb3a92b;
        W64(0xa0) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("Vec3"));
        W32(0xe8) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject1021;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1022 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1022() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "seatLeftRotationLimit") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1022;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1023 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1023() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "seatRightRotationLimit") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1023;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1024 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1024() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "hasRestrictedExit") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1024;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1026 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass1026() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "altSoldierExitPosition") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject1026;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1028 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1028() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "exitSpeedMod") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1028;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1029 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1029() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "disableSpawnPointsOnEnter") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1029;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1030 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1030() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "dontClearTeamOnExit") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1030;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1031 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1031() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "destroyOnExit") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1031;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1032 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1032() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "dontAllowExit") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1032;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1033 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1033() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "damageForBeingOutSideWorld") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1033;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1035 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1035() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "vehicleCameraShake") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc13e5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc13e5c;
        W32(0xe0) = getValueForArgType(std::string("CameraShakeTriggers"));
    }
} consoleObject1035;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1036 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1036() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "vehicleFov") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1036;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1038 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1038() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setSoldierExitLocation") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W64(0x98) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
        W32(0xe4) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject1038;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1039 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass1039() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "soldierExitPosition") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject1039;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1040 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass1040() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "soldierExitRotation") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject1040;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1042 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1042() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "toggleWeapon") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1042;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1043 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1043() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "cockpitLod") {
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
        W32(0xe0) = getValueForArgType(std::string("U32"));
    }
} consoleObject1043;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1044 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1044() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "cockpitSubGeom") {
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
        W32(0xe0) = getValueForArgType(std::string("U32"));
    }
} consoleObject1044;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1046 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass1046() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "soundFilter") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject1046;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1049 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1049() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "regWhenMinInput") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1049;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1051 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        M() : f0(0.0f), f1(0.0f) {}
    } value;
    ConsoleClass1051() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "regulateYaw") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xbcd1d3;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbcd1d3;
        W32(0xe0) = getValueForArgType(std::string("Vec2"));
    }
} consoleObject1051;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1052 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        M() : f0(0.0f), f1(0.0f) {}
    } value;
    ConsoleClass1052() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "regulatePitch") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xbcd1d3;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbcd1d3;
        W32(0xe0) = getValueForArgType(std::string("Vec2"));
    }
} consoleObject1052;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1053 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        M() : f0(0.0f), f1(0.0f) {}
    } value;
    ConsoleClass1053() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "regulateRoll") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xbcd1d3;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbcd1d3;
        W32(0xe0) = getValueForArgType(std::string("Vec2"));
    }
} consoleObject1053;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1055 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1055() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "regulateYawInput") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xca1420;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xca1420;
        W32(0xe0) = getValueForArgType(std::string("io::PlayerInputMap"));
    }
} consoleObject1055;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1056 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1056() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "regulatePitchInput") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xca1420;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xca1420;
        W32(0xe0) = getValueForArgType(std::string("io::PlayerInputMap"));
    }
} consoleObject1056;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1057 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1057() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "regulateRollInput") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xca1420;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xca1420;
        W32(0xe0) = getValueForArgType(std::string("io::PlayerInputMap"));
    }
} consoleObject1057;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1059 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        M() : f0(0.0f), f1(0.0f) {}
    } value;
    ConsoleClass1059() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "regulateVerticalPos") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xbcd1d3;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbcd1d3;
        W32(0xe0) = getValueForArgType(std::string("Vec2"));
    }
} consoleObject1059;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1060 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1060() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "regulateVerticalPosInput") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xca1420;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xca1420;
        W32(0xe0) = getValueForArgType(std::string("io::PlayerInputMap"));
    }
} consoleObject1060;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1062 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1062() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "maxVertRegAngle") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1062;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1063 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1063() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "noVertRegAngle") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1063;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1065 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1065() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addTargetObjectTypeToWatch") {
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
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1065;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1067 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1067() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "shakeFactor") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1067;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1069 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1069() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "sprintRecoverTime") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1069;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1070 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1070() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "sprintDissipationTime") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1070;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1071 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1071() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "sprintLimit") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1071;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1072 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1072() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "sprintFactor") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1072;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1074 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1074() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "allowDucking") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1074;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1075 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1075() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "disableInputWhileDucking") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1075;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1077 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1077() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "specialToggleWeaponInput") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xca1420;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xca1420;
        W32(0xe0) = getValueForArgType(std::string("io::PlayerInputMap"));
    }
} consoleObject1077;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1078 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1078() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listenerObstruction") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1078;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1079 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1079() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "groundContactVolume") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1079;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1080 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1080() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "damagedAmbientSoundLimit") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1080;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1082 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1082() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "crewKitIndex") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1082;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1083 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1083() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "autoUseAbility") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1083;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1084 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1084() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "maintainCameraOnExit") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1084;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1085 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1085() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "maintainCameraOnEnter") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1085;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1086 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1086() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "neverDrawAs1p") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1086;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1087 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1087() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isOpenVehicle") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1087;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1089 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1089() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "boundingRadiusModifierWhenOccupied") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1089;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1095 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass1095() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "seatAnimationSystem") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject1095;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1099 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1099() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "MaxZiplineLength") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1099;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1100 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1100() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "EntryRadius") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1100;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1101 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1101() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "collisionStartRadius") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1101;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1102 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1102() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "Timeout") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1102;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1103 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1103() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "heightOffset") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1103;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1104 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1104() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ziplineSoldierHeight") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1104;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1105 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1105() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "distanceCannotEnter") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1105;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1109 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1109() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ropeScaleFactor") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1109;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1113 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1113() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "MaxRopeLength") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1113;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1114 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1114() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "NumberOfLinks") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1114;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1115 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1115() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "timeout") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1115;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1116 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1116() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "throwStrength") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1116;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1117 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1117() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "upThrowBoost") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1117;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1118 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1118() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "degradeThrowStrength") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1118;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1119 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1119() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "throwStrength2") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1119;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1120 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1120() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "upThrowBoost2") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1120;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1121 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1121() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "degradeThrowStrength2") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1121;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1122 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1122() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "dropStrength") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1122;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1123 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1123() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "upDropBoost") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1123;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1124 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1124() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "degradeDropStrength") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1124;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1125 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1125() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "dismountCheckOffset") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1125;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1126 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1126() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "minYNormal") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1126;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1127 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1127() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "attachClimberRadius") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1127;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1128 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1128() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "linkAttachMovement") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1128;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1129 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1129() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "linkAttachTime") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1129;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1130 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1130() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "climbingSpeed") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1130;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1131 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1131() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "elasticity") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1131;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1132 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1132() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "airFriction") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1132;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1133 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1133() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "climbableAngle") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1133;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1134 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1134() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "dismountAngle") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1134;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1135 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1135() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "climbersAttachForce") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1135;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1136 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1136() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "awakeTime") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1136;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1164 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1164() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "targetType") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc129d0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc129d0;
        W32(0xe0) = getValueForArgType(std::string("TargetType"));
    }
} consoleObject1164;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1165 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1165() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "timeToLive") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1165;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1166 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1166() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "disableWhenEmptyVehicle") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1166;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1167 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1167() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "disableWhenEmptyVehicleDelay") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1167;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1168 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1168() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "disableWhenWreck") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1168;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1171 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1171() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "rcType") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc142dc;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc142dc;
        W32(0xe0) = getValueForArgType(std::string("RemoteControlledObjectType"));
    }
} consoleObject1171;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1172 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1172() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "minTimeBetweenActivation") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1172;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1173 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass1173() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "uavVehicleTemplate") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject1173;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1174 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1174() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "uavVehicleSpeed") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1174;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1175 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1175() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "uavVehicleRadius") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1175;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1176 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1176() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "uavVehicleFlightHeight") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1176;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1177 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1177() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "uavVehicleSampleResolution") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1177;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1180 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1180() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "noPassengerTimeToLive") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1180;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1183 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1183() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "turnVelocity") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1183;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1187 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1187() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "radius") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1187;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1188 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1188() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "triggerId") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1188;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1189 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1189() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "playAtPlayerPosition") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1189;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1190 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1190() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "playAtEventPosition") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1190;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1191 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1191() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "projectOnHeightmap") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1191;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1192 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1192() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "numNetworkedEffects") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1192;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1193 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass1193() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "linkedEffectContainer") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject1193;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1194 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1194() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "attachToEventObject") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1194;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1197 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1197() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "radius") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1197;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1198 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1198() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "triggerId") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1198;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1199 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1199() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "events") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1199;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1200 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1200() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "chance") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1200;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1201 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1201() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "averageTimeBetweenTests") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1201;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1202 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1202() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "minimumTimeBetweenTriggering") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1202;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1203 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1203() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "triggerForEachActivatingPlayer") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1203;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1206 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1206() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "radius") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1206;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1207 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1207() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "triggerId") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1207;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1208 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1208() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "events") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1208;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1209 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1209() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "chance") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1209;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1210 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1210() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "averageTimeBetweenTests") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1210;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1211 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1211() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "minimumTimeBetweenTriggering") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1211;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1212 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1212() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "triggerForEachActivatingPlayer") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1212;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1213 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1213() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addTriggerableTarget") {
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
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject1213;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1214 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1214() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "notCycledIfOccupied") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1214;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1215 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1215() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "hasPartner") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1215;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1219 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1219() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "movementSpeed") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1219;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1220 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1220() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "movementType") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1220;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1221 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1221() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "clockwise") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1221;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1222 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1222() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "type") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1222;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1223 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1223() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "delayBeforeStart") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1223;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1224 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1224() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "delayBeforeCycle") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1224;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1225 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1225() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "delayBeforeEnd") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1225;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1226 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1226() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "cycles") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1226;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1230 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1230() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "radius") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1230;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1232 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1232() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "team") {
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
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1232;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1234 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1234() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "startTeam") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1234;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1235 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1235() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "timeToGetControl") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1235;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1236 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1236() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "timeToLoseControl") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xb3b221;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject1236;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1237 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1237() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "disableIfEnemyInsideRadius") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1237;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1238 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1238() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "disableWhenLosingControl") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1238;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1239 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1239() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "loseControlWhenEnemyClose") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1239;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1240 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1240() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "loseControlWhenNotClose") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1240;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1241 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1241() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "areaValueTeam1") {
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
        W32(0xe0) = getValueForArgType(std::string("U32"));
    }
} consoleObject1241;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1242 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1242() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "areaValueTeam2") {
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
        W32(0xe0) = getValueForArgType(std::string("U32"));
    }
} consoleObject1242;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1243 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1243() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "enemyTicketLossWhenCaptured") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1243;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1246 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1246() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "unableToChangeTeam") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1246;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1247 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1247() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "onlyTakeableByTeam") {
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
        W32(0xe0) = getValueForArgType(std::string("U32"));
    }
} consoleObject1247;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1248 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1248() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "minNrToTakeControl") {
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
        W32(0xe0) = getValueForArgType(std::string("U32"));
    }
} consoleObject1248;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1249 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1249() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isUnstrategicControlPoint") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1249;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1250 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass1250() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "controlPointName") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject1250;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1251 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1251() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "controlPointId") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1251;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1257 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1257() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "showOnMinimap") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1257;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1258 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1258() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "hoistFlag") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1258;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1259 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        M() : f0(0.0f), f1(0.0f) {}
    } value;
    ConsoleClass1259() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "hoistMinMax") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xbcd1d3;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbcd1d3;
        W32(0xe0) = getValueForArgType(std::string("Vec2"));
    }
} consoleObject1259;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1260 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1260() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "signalTriggerId") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1260;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1261 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass1261() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "flagTemplateTeam0") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject1261;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1262 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass1262() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "flagTemplateTeam1") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject1262;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1263 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass1263() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "flagTemplateTeam2") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject1263;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1264 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1264() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isHemisphere") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1264;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1265 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1265() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ForSoldierOnly") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1265;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1266 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1266() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "HasGreyCapturingState") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1266;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1267 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass1267() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "radiusOffset") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject1267;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1268 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        M() : f0(0.0f), f1(0.0f) {}
    } value;
    ConsoleClass1268() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "minimapNameOffset") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xbcd1d3;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbcd1d3;
        W32(0xe0) = getValueForArgType(std::string("Vec2"));
    }
} consoleObject1268;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1272 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1272() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supplyGroupId") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1272;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1273 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1273() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supplyValueNeededTeam1") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1273;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1274 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1274() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supplyValueNeededTeam2") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1274;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1275 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1275() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supplyValueTeam1") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1275;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1276 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1276() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supplyValueTeam2") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1276;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1277 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1277() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supplyGroupNeeded") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 3;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W64(0x98) = (const char*)0xbd2a5c;
        W64(0xa0) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("int"));
        W32(0xe8) = getValueForArgType(std::string("bool"));
    }
} consoleObject1277;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCHudSetConsoleClassDefaults("ObjectTemplate", 2, 9);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1285 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1285() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "pcoId") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1285;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1286 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1286() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "pcoFlags") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1286;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1287 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1287() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "vehicleCategory") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc15f98;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc15f98;
        W32(0xe0) = getValueForArgType(std::string("dice::hfe::world::VehicleCategory"));
    }
} consoleObject1287;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1288 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1288() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "controlsCategory") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc15f98;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc15f98;
        W32(0xe0) = getValueForArgType(std::string("dice::hfe::world::VehicleCategory"));
    }
} consoleObject1288;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1293 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1293() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setVehicleType") {
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
        W64(0x90) = (const char*)0xc1470c;
        W32(0xe0) = getValueForArgType(std::string("dice::hfe::world::VehicleType"));
    }
} consoleObject1293;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1294 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1294() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setToolTipType") {
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
        W64(0x90) = (const char*)0xc14739;
        W32(0xe0) = getValueForArgType(std::string("dice::hfe::world::ToolTipType"));
    }
} consoleObject1294;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1296 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1296() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "artPos") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject1296;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1304 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass1304() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "nameTagOffset") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject1304;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1307 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1307() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addPcoPosId") {
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
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1307;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults AdminfullAccessSetConsoleClassDefaults("Admin", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults SoldierfullAccessSetConsoleClassDefaults("Soldier", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults SoldierendUserAccessSetConsoleClassDefaults("Soldier", 1, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults CollisionCheckfullAccessSetConsoleClassDefaults("CollisionCheck", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass1332 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass1332() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "checkStaticCollisionMeshes") {
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
        pushNode(this, objTemplBFList);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject1332;
} } } } 

