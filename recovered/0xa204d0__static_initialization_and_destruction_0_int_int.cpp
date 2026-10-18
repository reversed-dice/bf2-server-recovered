// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120
// FUNCTION: BF2 0xa204d0
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
std::list<void*> gameLogicCompTemplList;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessSetConsoleClassDefaults("ObjectTemplate", 2, 0);
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
    ConsoleClass49();
} consoleObject49;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass50 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass50() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "armor.maxHitPoints") {
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
} consoleObject50;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass51 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass51() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "armor.attackDamage") {
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
} consoleObject51;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass52 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass52();
} consoleObject52;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass53 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass53();
} consoleObject53;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass54 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass54();
} consoleObject54;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass55 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass55();
} consoleObject55;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass56 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass56();
} consoleObject56;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass57 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass57();
} consoleObject57;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass58 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass58();
} consoleObject58;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass59 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass59();
} consoleObject59;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass60 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass60();
} consoleObject60;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass62 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass62();
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
class ConsoleClass69 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass69();
} consoleObject69;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass70 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass70();
} consoleObject70;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass72 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass72();
} consoleObject72;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass73 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass73();
} consoleObject73;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass74 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass74();
} consoleObject74;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass75 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass75();
} consoleObject75;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass76 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass76();
} consoleObject76;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass77 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass77();
} consoleObject77;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass79 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass79();
} consoleObject79;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass80 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass80();
} consoleObject80;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass81 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass81();
} consoleObject81;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass82 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass82();
} consoleObject82;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass83 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass83();
} consoleObject83;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass84 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass84();
} consoleObject84;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass85 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass85() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "armor.hideChildrenOnSpectacularDeath") {
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
} consoleObject85;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass86 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass86() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "armor.destroyOnSpectacularDeath") {
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
} consoleObject86;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass87 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass87() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "armor.canBeDestroyed") {
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
} consoleObject87;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass88 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass88() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "armor.showDamageAsDirt") {
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
} consoleObject88;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass89 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass89() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "armor.useMMOnDeath") {
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
} consoleObject89;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass90 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass90() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "armor.addArmorEffect") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 4;
        W32(0x2c) = 4;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W64(0x98) = (const char*)0xba02f0;
        W64(0xa0) = (const char*)0xb3a92b;
        W64(0xa8) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
        W32(0xe8) = getValueForArgType(std::string("Vec3"));
        W32(0xec) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject90;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass91 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass91() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "armor.addArmorEffectSpectacular") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 4;
        W32(0x2c) = 4;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W64(0x98) = (const char*)0xba02f0;
        W64(0xa0) = (const char*)0xb3a92b;
        W64(0xa8) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
        W32(0xe8) = getValueForArgType(std::string("Vec3"));
        W32(0xec) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject91;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass92 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass92() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "armor.addWreckArmorEffect") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 4;
        W32(0x2c) = 4;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W64(0x98) = (const char*)0xba02f0;
        W64(0xa0) = (const char*)0xb3a92b;
        W64(0xa8) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
        W32(0xe8) = getValueForArgType(std::string("Vec3"));
        W32(0xec) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject92;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass95 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass95() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ability.hasHealingAbility") {
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
} consoleObject95;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass96 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass96();
} consoleObject96;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass97 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass97();
} consoleObject97;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass98 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass98();
} consoleObject98;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass101 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass101();
} consoleObject101;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass102 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass102();
} consoleObject102;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass103 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass103();
} consoleObject103;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass104 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass104();
} consoleObject104;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass105 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass105() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "radio.spottedMessage") {
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
        pushNode(this, gameLogicCompTemplList);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject105;
} } } } 

