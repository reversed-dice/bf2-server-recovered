// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120
// FUNCTION: BF2 0xa5a610
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
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
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

namespace dice { namespace hfe { namespace world { namespace { 
std::list<void*> objTemplVehicleList;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCPhysicsSetConsoleClassDefaults("ObjectTemplate", 2, 1);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass57 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass57() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "engineType") {
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
} consoleObject57;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass58 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass58() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "torque") {
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
} consoleObject58;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass59 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass59() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "differential") {
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
} consoleObject59;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass60 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass60() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "numberOfGears") {
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
} consoleObject60;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass61 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass61() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "gearUp") {
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
} consoleObject61;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass62 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass62() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "gearDown") {
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
} consoleObject62;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass63 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass63();
} consoleObject63;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass64 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass64();
} consoleObject64;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass65 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass65();
} consoleObject65;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass66 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass66();
} consoleObject66;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass67 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass67();
} consoleObject67;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass68 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass68() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "inverseHeatBar") {
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
} consoleObject68;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass69 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass69() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setHeatBarType") {
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
        W64(0x90) = (const char*)0xc6b949;
        W32(0xe0) = getValueForArgType(std::string("heatBarType"));
    }
} consoleObject69;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass70 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass70() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "getHeatBarType") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
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
} consoleObject70;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass72 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass72() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "propRotAxis") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    }
} consoleObject72;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass76 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass76() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "accumulate") {
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
} consoleObject76;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass77 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass77() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "pureRotational") {
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
} consoleObject77;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass78 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass78() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "horizontalSpeedMagnifier") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject78;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass79 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass79() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "defaultAngleOfAttack") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject79;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass80 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass80() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "maxAngleOfAttack") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject80;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass81 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass81() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "attackSpeed") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject81;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass82 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass82() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "horizontalDampAngle") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject82;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass83 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass83() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "horizontalDampAngleFactor") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject83;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass84 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass84() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "constantRpm") {
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
} consoleObject84;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass85 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass85() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "spinWhenNoEngineInAir") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject85;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass86 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass86() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "dampHorizontalVel") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject86;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass87 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass87() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "dampHorizontalVelFactor") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject87;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass88 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass88() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "decreaseAngleToZero") {
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
} consoleObject88;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass89 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass89() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "decreaseAngleToZeroVerticalVel") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject89;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass90 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass90() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "decreaseAngleToZeroSpeed") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject90;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass91 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass91() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "airFlowAffect") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject91;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass92 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass92() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "noEffectAtPerpSpeed") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject92;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass93 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass93() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "canReverse") {
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
} consoleObject93;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass94 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass94() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "trackTurnLowAmplitude") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject94;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass95 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass95() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "trackTurnLowOffset") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject95;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass96 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass96() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "trackTurnHighAmplitude") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject96;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass97 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass97() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "trackTurnHighOffset") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject97;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass98 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass98() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "trackTurnAcceleration") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject98;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass99 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass99() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "trackTurnSpeed") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject99;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass100 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass100() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "audio.newStyleAudio") {
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
} consoleObject100;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass101 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass101() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "audio.transformationRelativeRoot") {
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
} consoleObject101;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass102 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass102() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "audioReset") {
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
} consoleObject102;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass103 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass103() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "remoteEngineInput") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    }
} consoleObject103;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass105 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass105() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "sprintGear1Dampen") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject105;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass106 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass106();
} consoleObject106;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass107 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass107();
} consoleObject107;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass108 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass108();
} consoleObject108;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass109 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass109();
} consoleObject109;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass110 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass110();
} consoleObject110;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass112 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass112();
} consoleObject112;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass113 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass113();
} consoleObject113;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass114 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass114();
} consoleObject114;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass115 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass115();
} consoleObject115;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass116 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass116();
} consoleObject116;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass117 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass117();
} consoleObject117;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass118 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass118();
} consoleObject118;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass119 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass119();
} consoleObject119;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass120 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass120();
} consoleObject120;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass121 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass121();
} consoleObject121;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass123 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass123();
} consoleObject123;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass124 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass124();
} consoleObject124;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass125 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass125();
} consoleObject125;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass126 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass126();
} consoleObject126;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass127 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass127();
} consoleObject127;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass129 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass129();
} consoleObject129;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass130 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass130();
} consoleObject130;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass131 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass131();
} consoleObject131;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass132 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass132();
} consoleObject132;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass133 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass133();
} consoleObject133;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass138 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass138();
} consoleObject138;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass139 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass139();
} consoleObject139;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass140 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass140();
} consoleObject140;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass141 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass141();
} consoleObject141;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass142 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass142();
} consoleObject142;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass143 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass143();
} consoleObject143;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass148 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass148();
} consoleObject148;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass149 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass149();
} consoleObject149;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass150 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass150();
} consoleObject150;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass151 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass151();
} consoleObject151;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass152 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass152();
} consoleObject152;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass153 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass153();
} consoleObject153;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass159 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass159();
} consoleObject159;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass160 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass160();
} consoleObject160;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass161 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass161();
} consoleObject161;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass162 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass162();
} consoleObject162;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass163 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass163();
} consoleObject163;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass164 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass164();
} consoleObject164;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass165 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass165();
} consoleObject165;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass166 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass166();
} consoleObject166;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass171 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass171();
} consoleObject171;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass172 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass172();
} consoleObject172;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass173 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass173();
} consoleObject173;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass174 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass174();
} consoleObject174;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass175 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass175();
} consoleObject175;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass176 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass176();
} consoleObject176;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass181 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass181();
} consoleObject181;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass191 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass191();
} consoleObject191;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass192 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass192();
} consoleObject192;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass193 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass193();
} consoleObject193;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass194 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass194();
} consoleObject194;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass195 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass195();
} consoleObject195;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass196 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass196();
} consoleObject196;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass197 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass197();
} consoleObject197;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass198 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass198();
} consoleObject198;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass202 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass202();
} consoleObject202;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass203 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass203();
} consoleObject203;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass204 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass204();
} consoleObject204;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass205 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass205();
} consoleObject205;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass206 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass206();
} consoleObject206;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass207 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass207();
} consoleObject207;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass208 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass208();
} consoleObject208;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass209 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass209();
} consoleObject209;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults SoundfullAccessSetConsoleClassDefaults("Sound", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass213 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass213();
} consoleObject213;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCSoundSetConsoleClassDefaults("ObjectTemplate", 2, 17);
} } } } 

