// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=150
// FUNCTION: BF2 0xa7f750
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

namespace dice { namespace hfe { namespace { 
__attribute__((noinline)) void addToClassObjectList(ConsoleObject*);
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

namespace dice { namespace hfe { namespace { 
std::list<void*> gameList;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults SquadManagerfullAccessSetConsoleClassDefaults("SquadManager", 2, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass590 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass590();
} consoleObject590;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass591 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass591() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "leaveSquad") {
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
} consoleObject591;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass592 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass592() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "makeMeCommander") {
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
} consoleObject592;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass593 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass593() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "popNextCommanderApplicant") {
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
} consoleObject593;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass594 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass594() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "changeSquadName") {
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
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("bool"));
    }
} consoleObject594;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass595 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass595() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listSquadMembers") {
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
        W64(0x90) = (const char*)0xbd2a5c;
        W64(0x98) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("int"));
    }
} consoleObject595;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass596 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass596() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listSquads") {
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
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject596;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults rendererfullAccessSetConsoleClassDefaults("renderer", 2, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass607 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass607() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listScreenModes") {
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
} consoleObject607;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass608 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass608() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "screenMode") {
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
} consoleObject608;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults pythonHostfullAccessSetConsoleClassDefaults("pythonHost", 2, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass624 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass624() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "reinitialize") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject624;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass626 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass626();
} consoleObject626;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults svendUserAccessSetConsoleClassDefaults("sv", 1, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass643 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass643() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "load") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject643;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass644 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass644() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "save") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject644;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass645 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass645() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "configFile") {
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
} consoleObject645;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass647 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass647() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "serverName") {
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
} consoleObject647;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass649 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass649() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "password") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
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
} consoleObject649;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass650 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass650() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "internet") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject650;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass652 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass652() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "maxConnectionType") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc75aea;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc75aea;
        W32(0xe0) = getValueForArgType(std::string("ConnectionType"));
    }
} consoleObject652;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass654 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass654() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "welcomeMessage") {
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
} consoleObject654;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass656 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass656() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "serverIP") {
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
} consoleObject656;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass657 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass657() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "serverPort") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject657;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass659 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass659() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "allowFreeCam") {
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
} consoleObject659;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass660 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass660() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "allowExternalViews") {
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
} consoleObject660;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass661 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass661() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "allowNoseCam") {
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
} consoleObject661;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass662 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass662() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "hitIndicator") {
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
} consoleObject662;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass665 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass665() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "maxPlayers") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject665;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass666 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass666() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "numReservedSlots") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject666;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass668 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass668() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "numPlayersNeededToStart") {
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
} consoleObject668;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass669 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass669() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "notEnoughPlayersRestartDelay") {
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
} consoleObject669;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass671 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass671() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "startDelay") {
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
} consoleObject671;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass672 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass672() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "endDelay") {
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
} consoleObject672;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass673 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass673() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "spawnTime") {
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
} consoleObject673;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass674 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass674() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "manDownTime") {
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
} consoleObject674;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass676 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass676() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "endOfRoundDelay") {
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
} consoleObject676;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass678 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass678() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ticketRatio") {
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
} consoleObject678;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass679 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass679() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "roundsPerMap") {
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
} consoleObject679;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass680 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass680() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "timeLimit") {
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
} consoleObject680;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass681 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass681() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "scoreLimit") {
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
} consoleObject681;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass683 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass683() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "soldierFriendlyFire") {
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
} consoleObject683;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass684 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass684() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "vehicleFriendlyFire") {
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
} consoleObject684;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass685 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass685() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "soldierSplashFriendlyFire") {
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
} consoleObject685;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass686 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass686();
} consoleObject686;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass687 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass687();
} consoleObject687;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass688 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass688();
} consoleObject688;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass689 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass689();
} consoleObject689;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass691 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass691();
} consoleObject691;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass692 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass692();
} consoleObject692;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass693 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass693();
} consoleObject693;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass694 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass694();
} consoleObject694;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass696 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass696();
} consoleObject696;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass697 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass697();
} consoleObject697;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass698 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass698();
} consoleObject698;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass699 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass699();
} consoleObject699;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass700 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass700();
} consoleObject700;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass701 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass701();
} consoleObject701;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass702 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass702();
} consoleObject702;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass703 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass703();
} consoleObject703;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass705 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass705();
} consoleObject705;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass706 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass706();
} consoleObject706;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass707 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass707();
} consoleObject707;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass709 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass709();
} consoleObject709;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass711 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass711();
} consoleObject711;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass712 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass712();
} consoleObject712;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass714 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass714();
} consoleObject714;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass715 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass715();
} consoleObject715;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass716 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass716();
} consoleObject716;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass718 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass718();
} consoleObject718;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass721 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass721();
} consoleObject721;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass722 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass722();
} consoleObject722;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass723 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass723();
} consoleObject723;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass724 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass724();
} consoleObject724;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass725 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass725();
} consoleObject725;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass728 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass728();
} consoleObject728;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass731 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass731();
} consoleObject731;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass732 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass732();
} consoleObject732;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass733 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass733();
} consoleObject733;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass736 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass736();
} consoleObject736;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass737 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass737() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "radioMaxSpamFlagCount") {
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
} consoleObject737;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass738 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass738() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "radioBlockedDurationTime") {
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
} consoleObject738;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass741 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass741() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "useGlobalRank") {
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
} consoleObject741;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass742 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass742() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "useGlobalUnlocks") {
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
} consoleObject742;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass744 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass744() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "friendlyFireWithMines") {
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
} consoleObject744;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults svfullAccessSetConsoleClassDefaults("sv", 2, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass747 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass747() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ranked") {
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
} consoleObject747;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass748 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass748() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "punkBuster") {
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
} consoleObject748;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults maplistendUserAccessSetConsoleClassDefaults("maplist", 1, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass753 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass753() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "load") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject753;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass754 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass754() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "save") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject754;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass755 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass755() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "configFile") {
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
} consoleObject755;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass757 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass757() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "mapCount") {
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
} consoleObject757;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass758 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass758() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "currentMap") {
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
} consoleObject758;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass759 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass759() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "clear") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject759;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass760 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass760() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "remove") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 1;
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
} consoleObject760;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass761 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass761() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "list") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
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
} consoleObject761;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass762 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass762() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "append") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 3;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W64(0xa0) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
        W32(0xe8) = getValueForArgType(std::string("int"));
    }
} consoleObject762;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass763 : public ConsoleObjectBaseImpl {
public:
    __attribute__((always_inline)) ConsoleClass763() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "insert") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 3;
        W32(0x2c) = 4;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, gameList);
        W64(0x90) = (const char*)0xbd2a5c;
        W64(0x98) = (const char*)0xba02f0;
        W64(0xa0) = (const char*)0xba02f0;
        W64(0xa8) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
        W32(0xe8) = getValueForArgType(std::string("std::string"));
        W32(0xec) = getValueForArgType(std::string("int"));
    }
} consoleObject763;
} } } 

