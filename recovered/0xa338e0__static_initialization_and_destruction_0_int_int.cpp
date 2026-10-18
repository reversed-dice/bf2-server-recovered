// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120
// FUNCTION: BF2 0xa338e0
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
std::list<void*> hudCompTemplList;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessSetConsoleClassDefaults("ObjectTemplate", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass60 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass60();
} consoleObject60;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass61 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass61() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "postProcess.tvDistortionRoll") {
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
} consoleObject61;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass62 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass62() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "postProcess.tvDistortionFreq") {
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
} consoleObject62;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass63 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass63() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "postProcess.tvDistortionScale") {
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
} consoleObject63;
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
    ConsoleClass68();
} consoleObject68;
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
class ConsoleClass71 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass71();
} consoleObject71;
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
class ConsoleClass78 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass78();
} consoleObject78;
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
    ConsoleClass85();
} consoleObject85;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass86 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass86();
} consoleObject86;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass87 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass87();
} consoleObject87;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass88 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass88();
} consoleObject88;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass89 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass89();
} consoleObject89;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass90 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass90();
} consoleObject90;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass91 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass91();
} consoleObject91;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass92 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass92();
} consoleObject92;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass93 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass93();
} consoleObject93;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass94 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass94();
} consoleObject94;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass95 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass95();
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
    std::string value;
    ConsoleClass97() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "vehicleHud.injurySound") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject97;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass100 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass100() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.guiIndex") {
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
} consoleObject100;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass101 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass101() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.altGuiIndex") {
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
} consoleObject101;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass102 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass102() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.hudName") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject102;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass103 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass103() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.enableMouse") {
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
} consoleObject103;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass104 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass104() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.crosshairIcon") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject104;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass105 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass105() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.crosshairIconSize") {
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
} consoleObject105;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass106 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass106() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.altCrosshairIcon") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject106;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass107 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass107() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.clipIcon") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject107;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass108 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass108() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.ammoIcon") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject108;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass109 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass109() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.ammoBarFrontIcon") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject109;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass110 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass110() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.ammoBarBackIcon") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject110;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass111 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass111() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.weaponIcon") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject111;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass112 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass112() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.altWeaponIcon") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject112;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass113 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass113() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.selectIcon") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject113;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass114 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass114() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.specialAbilityIcon") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject114;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass115 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass115() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.hasMag") {
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
} consoleObject115;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass116 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass116() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.showAmmo") {
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
} consoleObject116;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass117 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass117() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.ShowClips") {
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
} consoleObject117;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass118 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass118() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.hasFireRate") {
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
} consoleObject118;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass119 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass119() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.hasRangeFinder") {
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
} consoleObject119;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass120 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass120() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.switchGuiOnCamera") {
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
} consoleObject120;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass121 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass121() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.showInfo") {
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
} consoleObject121;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass122 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass122() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.disableOnSprint") {
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
} consoleObject122;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass123 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass123() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.displaySelectOnActivation") {
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
} consoleObject123;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass124 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass124() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.deviationFactor") {
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
} consoleObject124;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass125 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass125() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "weaponHud.maxVisualDeviation") {
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
        pushNode(this, hudCompTemplList);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    }
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
class ConsoleClass128 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass128();
} consoleObject128;
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
class ConsoleClass136 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass136();
} consoleObject136;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass137 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass137();
} consoleObject137;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass138 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass138();
} consoleObject138;
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
class ConsoleClass144 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass144();
} consoleObject144;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass147 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass147();
} consoleObject147;
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
class ConsoleClass154 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass154();
} consoleObject154;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass155 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass155();
} consoleObject155;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass156 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass156();
} consoleObject156;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass157 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass157();
} consoleObject157;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass158 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass158();
} consoleObject158;
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
class ConsoleClass167 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass167();
} consoleObject167;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass168 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass168();
} consoleObject168;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass169 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass169();
} consoleObject169;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass170 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass170();
} consoleObject170;
} } } } 

