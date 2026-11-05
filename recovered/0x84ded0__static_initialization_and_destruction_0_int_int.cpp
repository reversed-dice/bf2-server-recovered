// FUNCTION: BF2 0x84ded0
#include <iostream>
#include <string>
#include <list>

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
    ConsoleObjectBaseImpl(const char* p, const char* n) {
        W64(0x10) = p;
        W64(0x18) = n;
    }
    virtual ~ConsoleObjectBaseImpl();
    int getValueForArgType(std::string s) {
        return ~-(int)(s.compare("std::string") == 0);
    }
    char raw[0x10a - 8];
};

class SetConsoleClassDefaults {
public:
    SetConsoleClassDefaults(char const*, unsigned int, unsigned char);
};

} }

using namespace dice::hfe;

namespace dice { namespace hfe { namespace io { namespace {
std::list<void*> moduleNetworkList;
} } } }

namespace dice { namespace hfe { namespace io { namespace {
SetConsoleClassDefaults NetworkfullAccessSetConsoleClassDefaults("Network", 2, 0);
} } } }

namespace dice { namespace hfe { namespace io { namespace {
class ConsoleClass32 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass32() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, (const char*)0xbb9dbe) {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xbb9dc4;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, moduleNetworkList);
        W64(0x90) = (const char*)0xbb9dc4;
        W32(0xe0) = getValueForArgType(std::string("PredictionMode"));
    }
} consoleObject32;
} } } }

namespace dice { namespace hfe { namespace io { namespace {
SetConsoleClassDefaults NetworkableInfofullAccessSetConsoleClassDefaults("NetworkableInfo", 2, 0);
} } } }

namespace dice { namespace hfe { namespace io { namespace {
class ConsoleClass35 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass35() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, (const char*)0xbb9de3) {
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
        pushNode(this, moduleNetworkList);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject35;
} } } }

namespace dice { namespace hfe { namespace io { namespace {
class ConsoleClass36 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass36() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, (const char*)0xbb9df1) {
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
        pushNode(this, moduleNetworkList);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject36;
} } } }

namespace dice { namespace hfe { namespace io { namespace {
class ConsoleClass37 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass37() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, (const char*)0xbb9dfc) {
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
        pushNode(this, moduleNetworkList);
        W64(0x90) = (const char*)0xbb9dc4;
        W32(0xe0) = getValueForArgType(std::string("PredictionMode"));
    }
} consoleObject37;
} } } }

namespace dice { namespace hfe { namespace io { namespace {
class ConsoleClass38 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass38() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, (const char*)0xbb9e0e) {
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
        pushNode(this, moduleNetworkList);
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject38;
} } } }

namespace dice { namespace hfe { namespace io { namespace {
class ConsoleClass39 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass39() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, (const char*)0xbb9e1e) {
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
        pushNode(this, moduleNetworkList);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject39;
} } } }

namespace dice { namespace hfe { namespace io { namespace {
class ConsoleClass40 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass40() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, (const char*)0xbb9e2a) {
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
        pushNode(this, moduleNetworkList);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject40;
} } } }
