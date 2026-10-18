// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120
// FUNCTION: BF2 0xad5cb0
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

namespace dice { namespace hfe { namespace animationTools { namespace { 
__attribute__((noinline)) void addToClassObjectList(ConsoleObject*);
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
std::list<void*> moduleConsolList;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
SetConsoleClassDefaults RagDollfullAccessSetConsoleClassDefaults("RagDoll", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass96 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass96() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "reset") {
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
} consoleObject96;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass97 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass97();
} consoleObject97;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass98 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass98() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "active") {
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
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject98;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass99 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass99() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "drawConstraints") {
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
        W32(0xe0) = getValueForArgType(std::string("bool"));
    }
} consoleObject99;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass100 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass100() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "gravity") {
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
        W64(0x90) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("float"));
    }
} consoleObject100;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass101 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass101() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "skeleton") {
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
} consoleObject101;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass102 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass102() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addParticle") {
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
        W64(0x98) = (const char*)0xb3b221;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("float"));
    }
} consoleObject102;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass103 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass103() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addBone") {
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
} consoleObject103;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass104 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass104() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "lockBone") {
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
} consoleObject104;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass105 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass105() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "toSkeleton") {
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
        W64(0x90) = (const char*)0xbd2a5c;
        W64(0x98) = (const char*)0xbd2a5c;
        W64(0xa0) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
        W32(0xe4) = getValueForArgType(std::string("int"));
        W32(0xe8) = getValueForArgType(std::string("int"));
    }
} consoleObject105;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass106 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass106() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "linkMode") {
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
} consoleObject106;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass107 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass107() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addConstraint") {
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
} consoleObject107;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass108 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass108();
} consoleObject108;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass109 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass109();
} consoleObject109;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass110 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass110();
} consoleObject110;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass111 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass111();
} consoleObject111;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass112 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass112();
} consoleObject112;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass113 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass113();
} consoleObject113;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass115 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass115();
} consoleObject115;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass117 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass117();
} consoleObject117;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
SetConsoleClassDefaults AnimationSystemfullAccessSetConsoleClassDefaults("AnimationSystem", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass123 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass123();
} consoleObject123;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass124 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass124();
} consoleObject124;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass125 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass125();
} consoleObject125;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass126 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass126();
} consoleObject126;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass138 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass138();
} consoleObject138;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass139 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass139();
} consoleObject139;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass140 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass140() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "reloadScript") {
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
} consoleObject140;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass141 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass141() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "createBundle") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc91678;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject141;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass142 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass142() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "deleteActiveBundle") {
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
} consoleObject142;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass143 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass143() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "createTrigger") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 2;
        W32(0x2c) = 2;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc916a7;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
        W32(0xe4) = getValueForArgType(std::string("std::string"));
    }
} consoleObject143;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass144 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass144() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "deleteActiveTrigger") {
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
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass145 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass145() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listTriggerTypes") {
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
} consoleObject145;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass146 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass146() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "activeBundle") {
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
} consoleObject146;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass147 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass147() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listBundles") {
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
} consoleObject147;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass148 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass148() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "activeTrigger") {
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
        pushNode(this, moduleConsolList);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject148;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass149 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass149() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listTriggers") {
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
        pushNode(this, moduleConsolList);
    }
} consoleObject149;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass150 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass150() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "hide") {
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
        pushNode(this, moduleConsolList);
    }
} consoleObject150;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass151 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass151() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "createAnimation") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 0;
        W32(0x28) = 1;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc91718;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, moduleConsolList);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject151;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass152 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass152() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listAnimations") {
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
        pushNode(this, moduleConsolList);
    }
} consoleObject152;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass153 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass153() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "activeAnimation") {
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
        pushNode(this, moduleConsolList);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject153;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass154 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass154() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "createValueHolder") {
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
        pushNode(this, moduleConsolList);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject154;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass155 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass155() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listValueHolders") {
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
        pushNode(this, moduleConsolList);
    }
} consoleObject155;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass156 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass156() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "saveValueHolders") {
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
        pushNode(this, moduleConsolList);
    }
} consoleObject156;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass157 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass157() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "activeValueHolder") {
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
        pushNode(this, moduleConsolList);
        W64(0x90) = (const char*)0xba02f0;
        W32(0xe0) = getValueForArgType(std::string("std::string"));
    }
} consoleObject157;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass161 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass161();
} consoleObject161;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass162 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass162();
} consoleObject162;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass163 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass163();
} consoleObject163;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass164 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass164();
} consoleObject164;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass165 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass165();
} consoleObject165;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass166 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass166();
} consoleObject166;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass167 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass167();
} consoleObject167;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass168 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass168();
} consoleObject168;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
SetConsoleClassDefaults AnimationValueHolderfullAccessSetConsoleClassDefaults("AnimationValueHolder", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass174 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass174();
} consoleObject174;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass175 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass175();
} consoleObject175;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass176 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass176();
} consoleObject176;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass177 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass177();
} consoleObject177;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass178 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass178();
} consoleObject178;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass179 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass179();
} consoleObject179;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass180 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass180();
} consoleObject180;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
SetConsoleClassDefaults AnimationManagerfullAccessSetConsoleClassDefaults("AnimationManager", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass186 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass186();
} consoleObject186;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass187 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass187();
} consoleObject187;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass188 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass188();
} consoleObject188;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass189 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass189();
} consoleObject189;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass190 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass190();
} consoleObject190;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass191 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass191();
} consoleObject191;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass192 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass192();
} consoleObject192;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
SetConsoleClassDefaults AnimationBundlefullAccessSetConsoleClassDefaults("AnimationBundle", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass197 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass197();
} consoleObject197;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass198 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass198();
} consoleObject198;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass199 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass199();
} consoleObject199;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass200 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass200();
} consoleObject200;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass201 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass201();
} consoleObject201;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass202 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass202();
} consoleObject202;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass203 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass203();
} consoleObject203;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass204 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass204();
} consoleObject204;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass205 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass205();
} consoleObject205;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass206 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass206();
} consoleObject206;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass207 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass207();
} consoleObject207;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass208 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass208();
} consoleObject208;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass209 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass209();
} consoleObject209;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass210 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass210();
} consoleObject210;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass211 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass211();
} consoleObject211;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass212 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass212();
} consoleObject212;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass213 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass213();
} consoleObject213;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass214 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass214();
} consoleObject214;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass215 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass215();
} consoleObject215;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass216 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass216();
} consoleObject216;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass217 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass217();
} consoleObject217;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
SetConsoleClassDefaults AnimationTriggerfullAccessSetConsoleClassDefaults("AnimationTrigger", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass223 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass223();
} consoleObject223;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass224 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass224();
} consoleObject224;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass225 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass225();
} consoleObject225;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass226 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass226();
} consoleObject226;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass227 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass227();
} consoleObject227;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass228 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass228();
} consoleObject228;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass229 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass229();
} consoleObject229;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass231 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass231();
} consoleObject231;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass233 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass233();
} consoleObject233;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass234 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass234();
} consoleObject234;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass235 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass235();
} consoleObject235;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass236 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass236();
} consoleObject236;
} } } } 

namespace dice { namespace hfe { namespace animationTools { namespace { 
class ConsoleClass238 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass238();
} consoleObject238;
} } } } 

