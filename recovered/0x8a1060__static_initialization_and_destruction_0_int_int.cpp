// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=300
// FUNCTION: BF2 0x8a1060
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

namespace dice { namespace hfe { namespace world { namespace { 
std::list<void*> BFMaterialManagerList;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults MaterialfullAccessSetConsoleClassDefaults("Material", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass26 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass26() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "active") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a53;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a53;
        W32(0xe0) = getValueForArgType(std::string("unsigned int"));
    }
} consoleObject26;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass27 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass27();
} consoleObject27;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass28 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass28();
} consoleObject28;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass32 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass32() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "friction") {
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
} consoleObject32;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass33 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass33() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "elasticity") {
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
} consoleObject33;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass34 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass34() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "resistance") {
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
} consoleObject34;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass35 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass35() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "projectileCollisionHardness") {
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
} consoleObject35;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass36 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass36() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "damageLoss") {
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
} consoleObject36;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass37 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass37() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "minDamageLoss") {
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
} consoleObject37;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass38 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass38() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "maxDamageLoss") {
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
} consoleObject38;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass39 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass39() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "penetrationDeviation") {
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
} consoleObject39;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass40 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass40() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "overrideNeverPenetrate") {
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
} consoleObject40;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass41 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass41();
} consoleObject41;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass42 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass42();
} consoleObject42;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass43 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass43();
} consoleObject43;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass44 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass44();
} consoleObject44;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults MaterialManagerfullAccessSetConsoleClassDefaults("MaterialManager", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass50 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass50();
} consoleObject50;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass51 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass51();
} consoleObject51;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass53 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass53() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "createCell") {
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
        W64(0x90) = (const char*)0xbd2a53;
        W64(0x98) = (const char*)0xbd2a53;
        W32(0xe0) = getValueForArgType(std::string("unsigned int"));
        W32(0xe4) = getValueForArgType(std::string("unsigned int"));
    }
} consoleObject53;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass55 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass55() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "damageMod") {
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
} consoleObject55;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass59 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass59() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setDecalTemplate") {
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
        W64(0x90) = (const char*)0xbd2a53;
        W64(0x98) = (const char*)0xbd2b34;
        W32(0xe0) = getValueForArgType(std::string("unsigned int"));
        W32(0xe4) = getValueForArgType(std::string("IObjectTemplate_ptrproxy"));
    }
} consoleObject59;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass60 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass60() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setEffectTemplate") {
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
        pushNode(this, BFMaterialManagerList);
        W64(0x90) = (const char*)0xbd2a53;
        W64(0x98) = (const char*)0xbd2b34;
        W32(0xe0) = getValueForArgType(std::string("unsigned int"));
        W32(0xe4) = getValueForArgType(std::string("IObjectTemplate_ptrproxy"));
    }
} consoleObject60;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass61 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass61() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setSoundTemplate") {
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
        pushNode(this, BFMaterialManagerList);
        W64(0x90) = (const char*)0xbd2a53;
        W64(0x98) = (const char*)0xbd2b34;
        W32(0xe0) = getValueForArgType(std::string("unsigned int"));
        W32(0xe4) = getValueForArgType(std::string("IObjectTemplate_ptrproxy"));
    }
} consoleObject61;
} } } } 

