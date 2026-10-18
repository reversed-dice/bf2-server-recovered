// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=300
// FUNCTION: BF2 0x8ac4a0
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
    static Vec3* getVec3(char const*, const Vec3&);
};

struct ListHead {
    void* a;
    void* b;
    __attribute__((always_inline)) ListHead() { a = this; b = this; }
    ~ListHead() {}
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

namespace dice { namespace hfe { namespace { 
__attribute__((noinline)) void addToClassObjectList(ConsoleObject*);
} } } 

namespace dice { namespace hfe { namespace { 
ListHead myList;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults GamefullAccessSetConsoleClassDefaults("Game", 2, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass232 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass232() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "unload") {
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
} consoleObject232;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass233 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass233() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultStaticObjectName, "radioMessage") {
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
        W64(0x90) = (const char*)0xbd6343;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = ~-(unsigned int)(std::string("TargetChannel").compare("std::string") == 0);
        W32(0xe4) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject233;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass234 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass234() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "simulationRate") {
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
} consoleObject234;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults GameendUserAccessSetConsoleClassDefaults("Game", 1, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass237 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass237() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "sayAll") {
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
} consoleObject237;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass238 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass238() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "sayTeam") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
        W32(0xe4) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject238;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass242 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass242() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "lockFps") {
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
} consoleObject242;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass244 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass244() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "allowToggleFullscreen") {
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
} consoleObject244;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass245 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass245() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "toggleFullscreen") {
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
} consoleObject245;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults VarsfullAccessSetConsoleClassDefaults("Vars", 2, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass255 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass255() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultStaticObjectName, "set") {
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
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
        W32(0xe4) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject255;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults demoendUserAccessSetConsoleClassDefaults("demo", 1, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass264 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass264() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "recordDemo") {
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
} consoleObject264;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass265 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass265() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "stopRecording") {
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
} consoleObject265;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass266 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass266() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "shutdownDemo") {
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
} consoleObject266;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults demofullAccessSetConsoleClassDefaults("demo", 2, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass269 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass269() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "restartDemo") {
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
} consoleObject269;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass270 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass270() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "togglePlayerDemo") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject270;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass271 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass271() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "toggleCameraDemo") {
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
} consoleObject271;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass272 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass272() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "toggleDemoPauseOrPlay") {
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
} consoleObject272;
} } } 

namespace dice { namespace hfe { namespace { 
SetConsoleClassDefaults bf2EnginefullAccessSetConsoleClassDefaults("bf2Engine", 2, 0);
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass276 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass276() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "startGame") {
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
        pushNode(this, myList);
    }
} consoleObject276;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass277 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass277() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "shutdownGame") {
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
        pushNode(this, myList);
    }
} consoleObject277;
} } } 

namespace dice { namespace hfe { namespace { 
class ConsoleClass278 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass278() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "hostServer") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, myList);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
        W32(0xe4) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject278;
} } } 

