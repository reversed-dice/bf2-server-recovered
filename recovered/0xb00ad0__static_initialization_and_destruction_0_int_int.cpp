// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=100
// FUNCTION: BF2 0xb00ad0
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

namespace dice { namespace hfe { namespace ai { namespace { 
__attribute__((noinline)) void addToClassObjectList(ConsoleObject*);
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
std::list<void*> aiList;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
SetConsoleClassDefaults IAIfullAccessSetConsoleClassDefaults("IAI", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
SetConsoleClassDefaults AIfullAccessSetConsoleClassDefaults("AI", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
SetConsoleClassDefaults AITemplatefullAccessSetConsoleClassDefaults("AITemplate", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass93 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass93() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "create") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 1;
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
} consoleObject93;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass94 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass94() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "active") {
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
} consoleObject94;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass95 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass95() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "types") {
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
} consoleObject95;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass96 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass96() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "degeneration") {
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
} consoleObject96;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass97 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass97() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "allowedTimeDiff") {
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
} consoleObject97;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass98 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass98() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "basicTemp") {
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
} consoleObject98;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass99 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass99() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "commonKnowledge") {
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
} consoleObject99;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass100 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass100() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "secondary") {
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
} consoleObject100;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass101 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass101() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addType") {
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
        W64(0x90) = (const char*)0xca179a;
        W32(0xe0) = getValueForArgType(std::string("ai::InformationType"));
    }
} consoleObject101;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass102 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass102() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addPlugIn") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 1;
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
} consoleObject102;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
SetConsoleClassDefaults AITemplatePlugInfullAccessSetConsoleClassDefaults("AITemplatePlugIn", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass139 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass139() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "create") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 2;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject139;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass140 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass140() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "active") {
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
} consoleObject140;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass143 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass143() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "coverValue") {
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
} consoleObject143;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass144 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass144() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "transparency") {
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
} consoleObject144;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass147 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass147() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "vehicleNumber") {
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
} consoleObject147;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass148 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass148() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setPathfindingMap") {
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
} consoleObject148;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass149 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass149() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "maxSpeed") {
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
} consoleObject149;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass150 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass150() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "lodHeight") {
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
} consoleObject150;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass151 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass151() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "turnRadius") {
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
} consoleObject151;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass152 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass152() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "coverSearchRadius") {
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
} consoleObject152;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass153 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass153() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "avoidCollisionLookAhead") {
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
        pushNode(this, aiList);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject153;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass154 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass154() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isTurnable") {
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
        pushNode(this, aiList);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject154;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass155 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass155() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setSoundSphereRadius") {
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
        pushNode(this, aiList);
        W64(0x90) = (const char*)0xb3b221;
        W64(0x98) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
        W32(0xe4) = getValueForArgType(std::string("float"));
    }
} consoleObject155;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass156 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass156() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setHearingProbability") {
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
        pushNode(this, aiList);
        W64(0x90) = (const char*)0xb3b221;
        W64(0x98) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
        W32(0xe4) = getValueForArgType(std::string("float"));
    }
} consoleObject156;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass159 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass159() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "getStrType") {
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
        pushNode(this, aiList);
    }
} consoleObject159;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass160 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass160() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setStrType") {
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
        pushNode(this, aiList);
        W64(0x90) = (const char*)0xca1321;
        W32(0xe0) = getValueForArgType(std::string("CombatStrengthType"));
    }
} consoleObject160;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass164 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass164() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setIsAntiAircraft") {
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
        pushNode(this, aiList);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject164;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass167 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass167() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "cullDistance") {
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
        pushNode(this, aiList);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject167;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass168 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass168();
} consoleObject168;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass169 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass169();
} consoleObject169;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass170 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass170();
} consoleObject170;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass171 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass171();
} consoleObject171;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass172 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass172();
} consoleObject172;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass173 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass173();
} consoleObject173;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass174 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass174();
} consoleObject174;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass177 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass177() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "driveControls") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 2;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xca12e0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, aiList);
    }
} consoleObject177;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass178 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass178() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "aimControls") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 2;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xca12e0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, aiList);
    }
} consoleObject178;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass179 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass179();
} consoleObject179;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass180 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass180();
} consoleObject180;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass181 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass181();
} consoleObject181;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass182 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass182();
} consoleObject182;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass183 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass183();
} consoleObject183;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass184 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass184();
} consoleObject184;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass185 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass185();
} consoleObject185;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass186 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass186();
} consoleObject186;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass187 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass187();
} consoleObject187;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass188 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass188();
} consoleObject188;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass189 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass189();
} consoleObject189;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass190 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass190();
} consoleObject190;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass191 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass191();
} consoleObject191;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass192 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass192();
} consoleObject192;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass193 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass193();
} consoleObject193;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass194 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass194();
} consoleObject194;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass195 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass195();
} consoleObject195;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass196 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass196();
} consoleObject196;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass197 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass197();
} consoleObject197;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass198 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass198();
} consoleObject198;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass199 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass199();
} consoleObject199;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass200 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass200();
} consoleObject200;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass201 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass201();
} consoleObject201;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass202 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass202();
} consoleObject202;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass203 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass203();
} consoleObject203;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass204 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass204();
} consoleObject204;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass205 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass205();
} consoleObject205;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass206 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass206();
} consoleObject206;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass207 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass207();
} consoleObject207;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass208 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass208();
} consoleObject208;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass209 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass209();
} consoleObject209;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass210 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass210();
} consoleObject210;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass211 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass211();
} consoleObject211;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass212 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass212();
} consoleObject212;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass213 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass213();
} consoleObject213;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass214 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass214();
} consoleObject214;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass215 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass215();
} consoleObject215;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass216 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass216();
} consoleObject216;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
SetConsoleClassDefaults weaponTemplatefullAccessSetConsoleClassDefaults("weaponTemplate", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass223 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass223();
} consoleObject223;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass224 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass224();
} consoleObject224;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass225 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass225();
} consoleObject225;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass226 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass226();
} consoleObject226;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass227 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass227();
} consoleObject227;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass229 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass229();
} consoleObject229;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass230 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass230();
} consoleObject230;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass231 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass231();
} consoleObject231;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass232 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass232();
} consoleObject232;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass233 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass233();
} consoleObject233;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass234 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass234();
} consoleObject234;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass235 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass235();
} consoleObject235;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass236 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass236();
} consoleObject236;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass237 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass237();
} consoleObject237;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass238 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass238();
} consoleObject238;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass239 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass239();
} consoleObject239;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass240 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass240();
} consoleObject240;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass241 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass241();
} consoleObject241;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass242 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass242();
} consoleObject242;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass243 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass243();
} consoleObject243;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass244 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass244();
} consoleObject244;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass245 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass245();
} consoleObject245;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
SetConsoleClassDefaults kitTemplatefullAccessSetConsoleClassDefaults("kitTemplate", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass251 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass251();
} consoleObject251;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass252 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass252();
} consoleObject252;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass253 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass253();
} consoleObject253;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass254 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass254();
} consoleObject254;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass255 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass255();
} consoleObject255;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass256 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass256();
} consoleObject256;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass257 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass257();
} consoleObject257;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
SetConsoleClassDefaults aiCommfullAccessSetConsoleClassDefaults("aiComm", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass262 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass262();
} consoleObject262;
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
SetConsoleClassDefaults aiCheatsendUserAccessSetConsoleClassDefaults("aiCheats", 1, 0);
} } } } 

namespace dice { namespace hfe { namespace ai { namespace { 
class ConsoleClass268 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass268();
} consoleObject268;
} } } } 

