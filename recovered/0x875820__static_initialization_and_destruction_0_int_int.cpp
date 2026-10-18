// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120
// FUNCTION: BF2 0x875820
#include <iostream>
#include <string>
#include <list>

#define W8(o)  (*(unsigned char*)((char*)this + (o)))
#define W16(o) (*(unsigned short*)((char*)this + (o)))
#define W32(o) (*(unsigned int*)((char*)this + (o)))
#define W64(o) (*(const char**)((char*)this + (o)))

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

struct Vec4 {
    float x, y, z, w;
    Vec4() : x(0), y(0), z(0), w(0) {}
};

class SetConsoleClassDefaults {
public:
    SetConsoleClassDefaults(char const*, unsigned int, unsigned char);
};

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

namespace {

std::list<void*> myList;

__attribute__((noinline)) void addToClassObjectList(ConsoleObject* o);
#define pushNode(o) do { std::_List_node<void*>* n_ = (std::_List_node<void*>*)operator new(sizeof(std::_List_node<void*>)); n_->_M_data = (o); n_->hook((std::_List_node_base*)&myList); } while (0)


SetConsoleClassDefaults GameLogicendUserAccessSetConsoleClassDefaults("GameLogic", 1, 0);

class ConsoleClass137 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass137() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "togglePause") {
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
} consoleObject137;

SetConsoleClassDefaults GameLogicfullAccessSetConsoleClassDefaults("GameLogic", 2, 0);

class ConsoleClass142 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass142() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "maximumLevelViewDistance") {
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
} consoleObject142;

class ConsoleClass143 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass143() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "extraUAVVehicleFlightHeight") {
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

class ConsoleClass144 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass144() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "reset") {
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
} consoleObject144;

class ConsoleClass147 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass147() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "refreshTriggerables") {
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
} consoleObject147;

class ConsoleClass149 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass149() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setTeamLanguage") {
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
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject149;

class ConsoleClass150 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass150() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "getTeamLanguage") {
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
} consoleObject150;

class ConsoleClass151 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass151() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setTeamName") {
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
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject151;

class ConsoleClass152 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass152() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "getTeamName") {
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
} consoleObject152;

class ConsoleClass153 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass153() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setTeamFlag") {
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
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject153;

class ConsoleClass155 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass155() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "becomeSquadLeader") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 1;
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
} consoleObject155;

class ConsoleClass156 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass156() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "enableVoHelp") {
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
} consoleObject156;

class ConsoleClass157 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass157() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supplyDropHeight") {
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
} consoleObject157;

class ConsoleClass158 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass158() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supplyDropNumSecsToLive") {
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
} consoleObject158;

class ConsoleClass159 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass159() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "vehicleDropHeight") {
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
} consoleObject159;

class ConsoleClass160 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass160() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "hitIndicationThreshold") {
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
} consoleObject160;

class ConsoleClass161 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass161() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "feslEnvironment") {
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
} consoleObject161;

class ConsoleClass162 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass162() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setTeamDropVehicle") {
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
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject162;

class ConsoleClass163 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass163() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "getTeamDropVehicle") {
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
} consoleObject163;

class ConsoleClass164 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass164() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setNumDropVehiclesForTeam") {
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
        W64(0x98) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("int"));
    }
} consoleObject164;

class ConsoleClass165 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass165() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setDropVehicleDeviationRadius") {
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
        W64(0x98) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("int"));
    }
} consoleObject165;

class ConsoleClass166 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass166() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "AddInvalidDropVehicleObject") {
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
} consoleObject166;

class ConsoleClass169 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass169() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "noVehiclesOmit") {
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
} consoleObject169;

class ConsoleClass171 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass171() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "messages.setVolumes") {
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
        pushNode(this);
        W64(0x90) = (const char*)0xb3b221;
        W64(0x98) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
        W32(0xe4) = getValueForArgType(std::string("float"));
    }
} consoleObject171;

class ConsoleClass172 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass172() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "messages.addMessage") {
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
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject172;

class ConsoleClass173 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass173();
} consoleObject173;

class ConsoleClass174 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass174() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "messages.addRadioFilter") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject174;

class ConsoleClass175 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass175() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "messages.addHelpMessage") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbd2a5c;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject175;

class ConsoleClass176 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass176();
} consoleObject176;

class ConsoleClass177 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass177();
} consoleObject177;

class ConsoleClass179 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass179();
} consoleObject179;

class ConsoleClass181 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass181() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "teleport") {
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
        pushNode(this);
    }
} consoleObject181;

class ConsoleClass182 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass182();
} consoleObject182;

class ConsoleClass183 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass183();
} consoleObject183;

class ConsoleClass190 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass190();
} consoleObject190;

class ConsoleClass191 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass191();
} consoleObject191;

class ConsoleClass193 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass193();
} consoleObject193;

class ConsoleClass195 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass195();
} consoleObject195;

class ConsoleClass196 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass196();
} consoleObject196;

class ConsoleClass197 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass197();
} consoleObject197;

class ConsoleClass198 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass198();
} consoleObject198;

class ConsoleClass199 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass199();
} consoleObject199;

class ConsoleClass200 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass200();
} consoleObject200;

class ConsoleClass201 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass201();
} consoleObject201;

class ConsoleClass202 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass202();
} consoleObject202;

class ConsoleClass203 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass203();
} consoleObject203;

class ConsoleClass204 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass204();
} consoleObject204;

class ConsoleClass206 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass206();
} consoleObject206;

class ConsoleClass207 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass207();
} consoleObject207;

class ConsoleClass209 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass209();
} consoleObject209;

class ConsoleClass210 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass210();
} consoleObject210;

class ConsoleClass211 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass211();
} consoleObject211;

class ConsoleClass212 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass212();
} consoleObject212;

class ConsoleClass213 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass213();
} consoleObject213;

class ConsoleClass214 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass214();
} consoleObject214;

class ConsoleClass215 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass215();
} consoleObject215;

class ConsoleClass216 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass216();
} consoleObject216;

class ConsoleClass217 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass217();
} consoleObject217;

class ConsoleClass218 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass218();
} consoleObject218;

class ConsoleClass220 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass220();
} consoleObject220;

class ConsoleClass221 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass221();
} consoleObject221;

class ConsoleClass224 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass224();
} consoleObject224;

SetConsoleClassDefaults PlayerfullAccessSetConsoleClassDefaults("Player", 2, 0);

class ConsoleClass255 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass255();
} consoleObject255;

class ConsoleClass256 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass256();
} consoleObject256;

class ConsoleClass257 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass257();
} consoleObject257;

class ConsoleClass258 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass258();
} consoleObject258;

class ConsoleClass259 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass259();
} consoleObject259;

class ConsoleClass260 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass260();
} consoleObject260;

class ConsoleClass261 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass261();
} consoleObject261;

SetConsoleClassDefaults LocalPlayerfullAccessSetConsoleClassDefaults("LocalPlayer", 2, 0);

class ConsoleClass267 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass267();
} consoleObject267;

class ConsoleClass268 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass268();
} consoleObject268;

SetConsoleClassDefaults CombatAreafullAccessSetConsoleClassDefaults("CombatArea", 2, 0);

class ConsoleClass294 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass294();
} consoleObject294;

class ConsoleClass295 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass295();
} consoleObject295;

class ConsoleClass296 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass296();
} consoleObject296;

class ConsoleClass297 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass297();
} consoleObject297;

class ConsoleClass304 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass304();
} consoleObject304;

class ConsoleClass305 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass305();
} consoleObject305;

class ConsoleClass306 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass306();
} consoleObject306;

class ConsoleClass307 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass307();
} consoleObject307;

class ConsoleClass308 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass308();
} consoleObject308;

class ConsoleClass309 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass309();
} consoleObject309;

class ConsoleClass310 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass310();
} consoleObject310;

class ConsoleClass311 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass311();
} consoleObject311;

SetConsoleClassDefaults CombatAreaManagerfullAccessSetConsoleClassDefaults("CombatAreaManager", 2, 0);

class ConsoleClass314 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass314();
} consoleObject314;

class ConsoleClass315 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass315();
} consoleObject315;

class ConsoleClass316 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass316();
} consoleObject316;

class ConsoleClass317 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass317();
} consoleObject317;

class ConsoleClass318 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass318();
} consoleObject318;

SetConsoleClassDefaults adminendUserAccessSetConsoleClassDefaults("admin", 1, 0);

class ConsoleClass322 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass322();
} consoleObject322;

class ConsoleClass323 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass323();
} consoleObject323;

class ConsoleClass324 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass324();
} consoleObject324;

class ConsoleClass325 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass325();
} consoleObject325;

class ConsoleClass328 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass328();
} consoleObject328;

class ConsoleClass329 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass329() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "banPlayerKey") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 2;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject329;

class ConsoleClass330 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass330() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addAddressToBanList") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject330;

class ConsoleClass331 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass331() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addKeyToBanList") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject331;

class ConsoleClass332 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass332() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "removeAddressFromBanList") {
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
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject332;

class ConsoleClass333 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass333() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "removeKeyFromBanList") {
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
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject333;

class ConsoleClass334 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass334() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "clearBanList") {
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
        pushNode(this);
    }
} consoleObject334;

class ConsoleClass335 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass335() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listBannedAddresses") {
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
        pushNode(this);
    }
} consoleObject335;

class ConsoleClass336 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass336() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listBannedKeys") {
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
        pushNode(this);
    }
} consoleObject336;

class ConsoleClass337 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass337() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "kickPlayer") {
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
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject337;

class ConsoleClass338 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass338() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listPlayers") {
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
        pushNode(this);
    }
} consoleObject338;

SetConsoleClassDefaults reservedSlotsendUserAccessSetConsoleClassDefaults("reservedSlots", 1, 0);

class ConsoleClass348 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass348() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "load") {
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
        pushNode(this);
    }
} consoleObject348;

class ConsoleClass349 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass349() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "save") {
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
        pushNode(this);
    }
} consoleObject349;

class ConsoleClass350 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass350() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "configFile") {
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
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject350;

class ConsoleClass351 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass351() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addNick") {
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
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject351;

class ConsoleClass352 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass352() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "removeNick") {
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
        pushNode(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject352;

class ConsoleClass353 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass353() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "clear") {
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
        pushNode(this);
    }
} consoleObject353;

class ConsoleClass354 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass354() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "list") {
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
        pushNode(this);
    }
} consoleObject354;

SetConsoleClassDefaults RendererfullAccessSetConsoleClassDefaults("Renderer", 2, 0);

class ConsoleClass360 : public ConsoleObjectBaseImpl {
public:
    Vec4 value;
    ConsoleClass360() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "fogStartEndAndBase") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xbcd7cb;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this);
        W64(0x90) = (const char*)0xbcd7cb;
        W32(0xe0) = getValueForArgType(std::string("Vec4"));
    }
} consoleObject360;

} } }
