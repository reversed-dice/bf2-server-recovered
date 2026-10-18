// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120
// FUNCTION: BF2 0xaa4a20
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

namespace dice { namespace hfe { namespace world { namespace { 
__attribute__((noinline)) void addToClassObjectList(ConsoleObject*);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
std::list<void*> myList;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults WindManagerfullAccessSetConsoleClassDefaults("WindManager", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass224 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass224() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "globalWindSpeed") {
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
} consoleObject224;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass225 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass225() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "globalWindDirection") {
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
} consoleObject225;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectManagerfullAccessSetConsoleClassDefaults("ObjectManager", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass229 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass229() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "drawStats") {
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
} consoleObject229;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectfullAccessSetConsoleClassDefaults("Object", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass233 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass233() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "direction") {
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
} consoleObject233;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass234 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass234() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "scale") {
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
} consoleObject234;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass235 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass235() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "attenuationRange1") {
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
} consoleObject235;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass236 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass236();
} consoleObject236;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass237 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass237();
} consoleObject237;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass238 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass238();
} consoleObject238;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass239 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass239();
} consoleObject239;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass240 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass240();
} consoleObject240;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass241 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass241();
} consoleObject241;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass242 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass242() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setAsSkyLight") {
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
} consoleObject242;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass243 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass243();
} consoleObject243;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass245 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass245();
} consoleObject245;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass246 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass246();
} consoleObject246;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass247 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass247();
} consoleObject247;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass248 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass248();
} consoleObject248;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass249 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass249();
} consoleObject249;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass250 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass250();
} consoleObject250;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass251 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass251();
} consoleObject251;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass252 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass252();
} consoleObject252;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass253 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass253();
} consoleObject253;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass254 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass254();
} consoleObject254;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass256 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass256();
} consoleObject256;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass257 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass257();
} consoleObject257;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass259 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass259();
} consoleObject259;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass260 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass260();
} consoleObject260;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass261 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass261();
} consoleObject261;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass263 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass263();
} consoleObject263;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass266 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass266();
} consoleObject266;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass270 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass270();
} consoleObject270;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass271 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass271();
} consoleObject271;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass272 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass272();
} consoleObject272;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass273 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass273();
} consoleObject273;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass277 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass277();
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
    ConsoleClass280() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setIsDisabledRecursive") {
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
} consoleObject280;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessSetConsoleClassDefaults("ObjectTemplate", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass348 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass348() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "writeBinary") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject348;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass349 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass349() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "readBinary") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject349;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass351 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass351();
} consoleObject351;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass353 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass353();
} consoleObject353;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass355 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass355();
} consoleObject355;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCFlagsSetConsoleClassDefaults("ObjectTemplate", 2, 11);
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
class ConsoleClass366 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass366() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isDestructable") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject366;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass367 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass367() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "castsDynamicShadow") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject367;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass368 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass368() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "hasRelativeOffset") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject368;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass371 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass371() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "preCacheObject") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject371;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
GInt gint_0112ee20(0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
GInt gint_0112ee24(0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults PlayerfullAccessSetConsoleClassDefaults("Player", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass435 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass435() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultStaticObjectName, "create") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc7cd60;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
        W32(0xe4) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject435;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass436 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass436() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultStaticObjectName, "active") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc7cd60;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc7cd60;
        W32(0xe0) = ~-(unsigned int)(std::string("IPlayer*").compare("std::string") == 0);
    }
} consoleObject436;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass437 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass437() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultStaticObjectName, "listPlayerClasses") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 0;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject437;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass438 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass438() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultStaticObjectName, "list") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 0;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject438;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass439 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass439() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultStaticObjectName, "saveAll") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject439;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass440 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass440() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isAi") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject440;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass441 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass441() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isNetwork") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject441;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass442 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass442() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "name") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 2;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 0;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject442;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass443 : public ConsoleObjectBaseImpl {
public:
    struct M {
        unsigned long f0;
        M() : f0(0x0) {}
    } value;
    ConsoleClass443() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "vehicle") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc7cad3;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc7cad3;
        W32(0xe0) = ~-(unsigned int)(std::string("IObject_ptrproxy").compare("std::string") == 0);
    }
} consoleObject443;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass444 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass444() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setVehicleWithInputId") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc7cad3;
        W64(0x98) = (const char*)0xbd2a5c;
        W32(0xe0) = ~-(unsigned int)(std::string("IObject_ptrproxy").compare("std::string") == 0);
        W32(0xe4) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    }
} consoleObject444;
} } } } 

