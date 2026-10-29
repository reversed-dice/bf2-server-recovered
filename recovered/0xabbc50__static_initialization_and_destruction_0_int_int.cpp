// FUNCTION: BF2 0xabbc50
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
    ConsoleObjectBaseImpl(const char* dyn, const char* name) {
        W64(0x10) = dyn;
        W64(0x18) = name;
    }
    virtual ~ConsoleObjectBaseImpl();
    int getValueForArgType(std::string);
    char raw[0x10a - 8];
};

class SetConsoleClassDefaults {
public:
    SetConsoleClassDefaults(char const*, unsigned int, unsigned char);
};

} }

using namespace dice::hfe;

namespace dice { namespace hfe { namespace world { namespace {

std::list<void*> objTemplPortalList;

#define pushNode(o) do { std::_List_node<void*>* n_ = (std::_List_node<void*>*)operator new(sizeof(std::_List_node<void*>)); n_->_M_data = (o); n_->hook((std::_List_node_base*)&objTemplPortalList); } while (0)

} } } }

namespace dice { namespace hfe { namespace world { namespace {

SetConsoleClassDefaults PortalfullAccessSetConsoleClassDefaults("Portal", 2, 0);

} } } }

namespace dice { namespace hfe { namespace world { namespace {

class ConsoleClass30 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass30() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, (const char*)0xba0321) {
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
        pushNode(this);
        W64(0x90) = (const char*)0xba032b;
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject30;

} } } }

namespace dice { namespace hfe { namespace world { namespace {

class ConsoleClass31 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass31() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, (const char*)0xc7da33) {
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
        pushNode(this);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    }
} consoleObject31;

} } } }
