// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=300
// FUNCTION: BF2 0x89a0b0
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
std::list<void*> ScoreSystemList;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ScoreManagerfullAccessSetConsoleClassDefaults("ScoreManager", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass24 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass24() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "death") {
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
} consoleObject24;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass25 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass25() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "kill") {
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
} consoleObject25;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass26 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass26() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ammo") {
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
} consoleObject26;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass27 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass27() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "assistKill") {
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
} consoleObject27;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass28 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass28() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "inDirectKill") {
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
} consoleObject28;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass29 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass29() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "TK") {
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
} consoleObject29;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass30 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass30() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "heal") {
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
} consoleObject30;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass31 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass31() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "soldierRevive") {
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
} consoleObject31;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass32 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass32() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "repair") {
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
} consoleObject32;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass33 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass33() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "vehicleRevive") {
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
} consoleObject33;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass34 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass34() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "flagCapture") {
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
} consoleObject34;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass35 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass35() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "flagReturn") {
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
} consoleObject35;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass36 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass36() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "controlPointCapture") {
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
} consoleObject36;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass37 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass37() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "objective") {
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
} consoleObject37;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass38 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass38() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "driverPassenger") {
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
} consoleObject38;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass39 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass39() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "teamDamage") {
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
} consoleObject39;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass40 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass40() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "teamVehicleDamage") {
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
} consoleObject40;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass45 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass45();
} consoleObject45;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass46 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass46();
} consoleObject46;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass47 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass47();
} consoleObject47;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass48 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass48();
} consoleObject48;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass49 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass49() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "teamVehicleDamageLimit") {
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
        pushNode(this, ScoreSystemList);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject49;
} } } } 

