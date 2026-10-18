// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=100
// FUNCTION: BF2 0x858f50
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

namespace dice { namespace hfe { namespace io { namespace { 
__attribute__((noinline)) void addToClassObjectList(ConsoleObject*);
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
std::list<void*> myList;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
SetConsoleClassDefaults ConsolefullAccessSetConsoleClassDefaults("Console", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass427 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass427();
} consoleObject427;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass434 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass434();
} consoleObject434;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass435 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass435() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "echo") {
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
} consoleObject435;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass436 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass436() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "echoErrors") {
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
} consoleObject436;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass438 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass438() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listVariables") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
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
} consoleObject438;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass439 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass439() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listConstants") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
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
} consoleObject439;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass441 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass441() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "bindKeyToConsoleScript") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject441;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass443 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass443();
} consoleObject443;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass444 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass444();
} consoleObject444;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass445 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass445();
} consoleObject445;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass446 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass446();
} consoleObject446;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass447 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass447();
} consoleObject447;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass448 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass448();
} consoleObject448;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass449 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass449();
} consoleObject449;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass450 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass450();
} consoleObject450;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass451 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass451();
} consoleObject451;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass452 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass452();
} consoleObject452;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass453 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass453();
} consoleObject453;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass454 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass454();
} consoleObject454;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass456 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass456();
} consoleObject456;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass457 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass457();
} consoleObject457;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass458 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass458();
} consoleObject458;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass460 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass460() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "useRelativePaths") {
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
} consoleObject460;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass461 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass461() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "allowMultipleFileLoad") {
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
} consoleObject461;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
SetConsoleClassDefaults SettingsManagerendUserAccessSetConsoleClassDefaults("SettingsManager", 1, 0);
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass503 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass503() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "stringSet") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, myList);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject503;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass504 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass504() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "boolSet") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, myList);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("bool"));
    }
} consoleObject504;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass505 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass505() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "intSet") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, myList);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("int"));
    }
} consoleObject505;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass506 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass506() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "floatSet") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, myList);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("float"));
    }
} consoleObject506;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass507 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass507() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "U32Set") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, myList);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba8580;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("U32"));
    }
} consoleObject507;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass509 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass509() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "stringGet") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, myList);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject509;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass510 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass510();
} consoleObject510;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass511 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass511();
} consoleObject511;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass512 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass512();
} consoleObject512;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass513 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass513();
} consoleObject513;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
SetConsoleClassDefaults InputDevicesendUserAccessSetConsoleClassDefaults("InputDevices", 1, 0);
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass518 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass518();
} consoleObject518;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass519 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass519();
} consoleObject519;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
SetConsoleClassDefaults ControlMapendUserAccessSetConsoleClassDefaults("ControlMap", 1, 0);
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass523 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass523();
} consoleObject523;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass524 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass524();
} consoleObject524;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass525 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass525();
} consoleObject525;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass527 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass527();
} consoleObject527;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass528 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass528();
} consoleObject528;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass529 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass529();
} consoleObject529;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass530 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass530();
} consoleObject530;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass532 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass532();
} consoleObject532;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass533 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass533();
} consoleObject533;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass535 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass535();
} consoleObject535;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass536 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass536();
} consoleObject536;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass538 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass538();
} consoleObject538;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass539 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass539();
} consoleObject539;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass540 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass540();
} consoleObject540;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass542 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass542();
} consoleObject542;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass544 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass544();
} consoleObject544;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass545 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass545();
} consoleObject545;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass550 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass550();
} consoleObject550;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass552 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass552();
} consoleObject552;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass553 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass553();
} consoleObject553;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass554 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass554();
} consoleObject554;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
SetConsoleClassDefaults FileManagerfullAccessSetConsoleClassDefaults("FileManager", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass557 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass557();
} consoleObject557;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass559 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass559();
} consoleObject559;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass560 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass560();
} consoleObject560;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass561 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass561();
} consoleObject561;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass562 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass562();
} consoleObject562;
} } } } 

namespace dice { namespace hfe { namespace io { namespace { 
class ConsoleClass563 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass563() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "copyFile") {
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
        pushNode(this, myList);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject563;
} } } } 

