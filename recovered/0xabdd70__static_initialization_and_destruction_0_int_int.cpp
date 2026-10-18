// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120
// FUNCTION: BF2 0xabdd70
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

namespace dice { namespace hfe { namespace tool { namespace { 
__attribute__((noinline)) void addToClassObjectList(ConsoleObject*);
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
std::list<void*> myList;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
SetConsoleClassDefaults ObjectfullAccessSetConsoleClassDefaults("Object", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass125 : public ConsoleObjectBaseImpl {
public:
    struct M {
        unsigned long f0;
        M() : f0(0x0) {}
    } value;
    ConsoleClass125() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "create") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 3;
        W64(0x88) = (const char*)0xc7cacc;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc7cda8;
        W64(0x98) = (const char*)0xb3a92b;
        W64(0xa0) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("world::IObjectTemplate_ptrproxy"));
        W32(0xe4) = getValueForArgType(std::string("Vec3"));
        W32(0xe8) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject125;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass131 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass131();
} consoleObject131;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass132 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass132();
} consoleObject132;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass133 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass133();
} consoleObject133;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass134 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass134();
} consoleObject134;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass135 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass135();
} consoleObject135;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass136 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass136();
} consoleObject136;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass137 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass137();
} consoleObject137;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass138 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass138();
} consoleObject138;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass139 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass139();
} consoleObject139;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass140 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass140();
} consoleObject140;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass141 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass141();
} consoleObject141;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass142 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass142();
} consoleObject142;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass143 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass143();
} consoleObject143;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass144 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass144();
} consoleObject144;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass145 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass145();
} consoleObject145;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessSetConsoleClassDefaults("ObjectTemplate", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass150 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass150();
} consoleObject150;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass151 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass151();
} consoleObject151;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass152 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass152();
} consoleObject152;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass153 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass153();
} consoleObject153;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass154 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass154();
} consoleObject154;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass155 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass155() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "updateAll") {
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
} consoleObject155;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass156 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass156();
} consoleObject156;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass157 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass157() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "printScript") {
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
        W64(0x90) = (const char*)0xc7cda8;
        W32(0xe0) = ~-(unsigned int)(std::string("world::IObjectTemplate_ptrproxy").compare("std::string") == 0);
    }
} consoleObject157;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass158 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass158() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "saveAll") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
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
} consoleObject158;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass159 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass159() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "save") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc7cda8;
        W32(0xe0) = ~-(unsigned int)(std::string("world::IObjectTemplate_ptrproxy").compare("std::string") == 0);
    }
} consoleObject159;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass160 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass160() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "loadAll") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
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
} consoleObject160;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass161 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass161() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "type") {
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
        W64(0x90) = (const char*)0xc7cda8;
        W32(0xe0) = ~-(unsigned int)(std::string("world::IObjectTemplate_ptrproxy").compare("std::string") == 0);
    }
} consoleObject161;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
SetConsoleClassDefaults EditorfullAccessSetConsoleClassDefaults("Editor", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass169 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass169() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "saveAllUsedTemplates") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject169;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass171 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass171() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "deleteAllObjects") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba02f0;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject171;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass172 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass172() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listObjects") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
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
} consoleObject172;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass173 : public ConsoleObjectBaseImpl {
public:
    struct M {
        unsigned long f0;
        M() : f0(0x0) {}
    } value;
    ConsoleClass173() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "getActiveObjectTemplate") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 0;
        W64(0x88) = (const char*)0xc7cda8;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject173;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass174 : public ConsoleObjectBaseImpl {
public:
    struct M {
        unsigned long f0;
        M() : f0(0x0) {}
    } value;
    ConsoleClass174() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "getActiveObject") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x2c) = 0;
        W64(0x88) = (const char*)0xc7cacc;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
    }
} consoleObject174;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass176 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass176() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "saveAllTemplates") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
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
} consoleObject176;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass177 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass177() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "saveAllObjects") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject177;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass178 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass178() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "saveAllSpawners") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
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
} consoleObject178;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass179 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass179() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "saveSpawners") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 3;
        W32(0x2c) = 3;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba032b;
        W64(0x98) = (const char*)0xba032b;
        W64(0xa0) = (const char*)0xba032b;
        W32(0xe0) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
        W32(0xe4) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
        W32(0xe8) = ~-(unsigned int)(std::string("bool").compare("std::string") == 0);
    }
} consoleObject179;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass180 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass180() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "saveAllTemplatesAndObjects") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
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
} consoleObject180;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass181 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass181() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "loadAllObjects") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba032b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject181;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass182 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass182() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "loadAllTemplatesAndObjects") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
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
} consoleObject182;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass183 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass183() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listAllVehicles") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
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
} consoleObject183;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass185 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass185() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "updateAllTemplates") {
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
} consoleObject185;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass186 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass186() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listTemplates") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    }
} consoleObject186;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass187 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass187() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setActiveObject") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc7cacc;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc7cacc;
        W32(0xe0) = ~-(unsigned int)(std::string("world::IObject_ptrproxy").compare("std::string") == 0);
    }
} consoleObject187;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass188 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass188() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setActiveObjectTemplate") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc7cda8;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc7cda8;
        W32(0xe0) = ~-(unsigned int)(std::string("world::IObjectTemplate_ptrproxy").compare("std::string") == 0);
    }
} consoleObject188;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass190 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass190() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "deleteTemplate") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc7cda8;
        W32(0xe0) = ~-(unsigned int)(std::string("world::IObjectTemplate_ptrproxy").compare("std::string") == 0);
    }
} consoleObject190;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass191 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass191() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "updateTemplate") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc7cda8;
        W32(0xe0) = ~-(unsigned int)(std::string("world::IObjectTemplate_ptrproxy").compare("std::string") == 0);
    }
} consoleObject191;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass192 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass192() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "deleteObject") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 0;
        W32(0x8) = 0;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xba030e;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc7cacc;
        W32(0xe0) = ~-(unsigned int)(std::string("world::IObject_ptrproxy").compare("std::string") == 0);
    }
} consoleObject192;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass193 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass193() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "printTemplateCreationScript") {
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
        W64(0x90) = (const char*)0xc7cda8;
        W32(0xe0) = ~-(unsigned int)(std::string("world::IObjectTemplate_ptrproxy").compare("std::string") == 0);
    }
} consoleObject193;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass194 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass194() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "printObjectCreationScript") {
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
        W64(0x90) = (const char*)0xc7cacc;
        W32(0xe0) = ~-(unsigned int)(std::string("world::IObject_ptrproxy").compare("std::string") == 0);
    }
} consoleObject194;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass195 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass195();
} consoleObject195;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass196 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass196();
} consoleObject196;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass197 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass197();
} consoleObject197;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass199 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass199();
} consoleObject199;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass200 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass200() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "quickReloadActiveTemplate") {
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
} consoleObject200;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass201 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass201();
} consoleObject201;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass202 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass202();
} consoleObject202;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass203 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass203();
} consoleObject203;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass204 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass204();
} consoleObject204;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass206 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass206();
} consoleObject206;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass211 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass211();
} consoleObject211;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass212 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass212();
} consoleObject212;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass214 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass214();
} consoleObject214;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass215 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass215();
} consoleObject215;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass216 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass216();
} consoleObject216;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass217 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass217();
} consoleObject217;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass219 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass219();
} consoleObject219;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass220 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass220();
} consoleObject220;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass221 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass221();
} consoleObject221;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass222 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass222();
} consoleObject222;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass223 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass223();
} consoleObject223;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass224 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass224();
} consoleObject224;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass225 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass225();
} consoleObject225;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass226 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass226();
} consoleObject226;
} } } } 

namespace dice { namespace hfe { namespace tool { namespace { 
class ConsoleClass227 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass227();
} consoleObject227;
} } } } 

