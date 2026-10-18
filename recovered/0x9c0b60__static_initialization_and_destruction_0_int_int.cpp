// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120
// FUNCTION: BF2 0x9c0b60
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
std::list<void*> objTempFxList;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults EffectTweakfullAccessSetConsoleClassDefaults("EffectTweak", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass71 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass71() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setAlphaIntensityForAllEffects") {
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
} consoleObject71;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass72 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass72() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setEmitScaleFactorForAllEffects") {
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
} consoleObject72;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass73 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass73() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setEmitSpeedScaleFactorForAllEffects") {
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
} consoleObject73;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass74 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass74() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setAgeScaleFactorForAllEffects") {
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
} consoleObject74;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass75 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass75() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setStartAgeForAllEffects") {
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
} consoleObject75;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass76 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass76() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setSoundIntensity") {
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
} consoleObject76;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessSetConsoleClassDefaults("ObjectTemplate", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass83 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass83() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isStatic") {
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
} consoleObject83;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass88 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass88() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isStatic") {
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
} consoleObject88;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass89 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass89() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "usedOnTransparentMaterials") {
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
    std::string value;
    ConsoleClass90() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "decalTextureName") {
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
} consoleObject90;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass92 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass92() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "randomColorIntensity") {
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
} consoleObject92;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass93 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass93() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "color") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc4cde8;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc4cde8;
        W32(0xe0) = getValueForArgType(std::string("Vec3ColorFloat"));
    }
} consoleObject93;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass94 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass94() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "randomSize") {
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
} consoleObject94;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass95 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass95() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "size") {
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
} consoleObject95;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass96 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass96() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "randomRotation") {
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
} consoleObject96;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass97 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass97() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "rotation") {
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
} consoleObject97;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass98 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass98() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationEnable") {
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
} consoleObject98;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass99 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass99() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationSpeed") {
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
} consoleObject99;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass100 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass100() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationFrameWidth") {
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
} consoleObject100;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass101 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass101() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationFrameHeight") {
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
} consoleObject101;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass102 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass102() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setAnimationFrameWidthRelative") {
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
} consoleObject102;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass103 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass103() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setAnimationFrameHeightRelative") {
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
} consoleObject103;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass104 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass104() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationRandomizedStartFrame") {
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
} consoleObject104;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass105 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass105() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationFrameCount") {
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
} consoleObject105;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass106 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass106() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationFrameCountX") {
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
} consoleObject106;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass114 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass114() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "useCameraOrientation") {
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
} consoleObject114;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass115 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass115() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "looping") {
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
} consoleObject115;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass116 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass116() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "startAtCreation") {
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
} consoleObject116;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass117 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass117() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "intensityAtSpeed") {
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
} consoleObject117;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass118 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass118() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addEmitterSpeed") {
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
} consoleObject118;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass119 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass119() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "emitterSpeedScale") {
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
} consoleObject119;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass121 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass121() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "startProbability") {
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
} consoleObject121;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass122 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass122() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "lodDistance") {
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
} consoleObject122;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass124 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float def;
        float table[102];
        float tail[4];
        M() : def(1.0f) {
            for (int i = 0; i < 4; ++i) tail[i] = 0.0f;
            for (int i = 0; i < 102; ++i) table[i] = def;
        }
    } value;
    ConsoleClass124() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "intensityOverTime") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc4cb20;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc4cb20;
        W32(0xe0) = getValueForArgType(std::string("OverTimeDistribution"));
    }
} consoleObject124;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass126 : public ConsoleObjectBaseImpl {
public:
    struct M {
        int f0;
        float f1;
        float f2;
        unsigned char f3;
        char pad4[3];
        unsigned long f4;
        M() : f0(0), f1(1.0f), f2(0.0f), f3(0), f4(0x759dc150) {}
    } value;
    ConsoleClass126() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "delay") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc12e64;
        W8(0x24) = cat;
        W8(0x108) = 0;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc12e64;
        W32(0xe0) = getValueForArgType(std::string("RandomDistribution"));
    }
} consoleObject126;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass127 : public ConsoleObjectBaseImpl {
public:
    struct M {
        int f0;
        float f1;
        float f2;
        unsigned char f3;
        char pad4[3];
        unsigned long f4;
        M() : f0(0), f1(1.0f), f2(0.0f), f3(0), f4(0x759dc150) {}
    } value;
    ConsoleClass127() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "timeToLive") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc12e64;
        W8(0x24) = cat;
        W8(0x108) = 0;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc12e64;
        W32(0xe0) = getValueForArgType(std::string("RandomDistribution"));
    }
} consoleObject127;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass128 : public ConsoleObjectBaseImpl {
public:
    struct M {
        int f0;
        float f1;
        float f2;
        unsigned char f3;
        char pad4[3];
        unsigned long f4;
        M() : f0(0), f1(1.0f), f2(0.0f), f3(0), f4(0x759dc150) {}
    } value;
    ConsoleClass128() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "intensity") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc12e64;
        W8(0x24) = cat;
        W8(0x108) = 0;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc12e64;
        W32(0xe0) = getValueForArgType(std::string("RandomDistribution"));
    }
} consoleObject128;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass129 : public ConsoleObjectBaseImpl {
public:
    struct M {
        int f0;
        float f1;
        float f2;
        unsigned char f3;
        char pad4[3];
        unsigned long f4;
        M() : f0(0), f1(1.0f), f2(0.0f), f3(0), f4(0x759dc150) {}
    } value;
    ConsoleClass129() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "relativePositionInDof") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc12e64;
        W8(0x24) = cat;
        W8(0x108) = 0;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc12e64;
        W32(0xe0) = getValueForArgType(std::string("RandomDistribution"));
    }
} consoleObject129;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass130 : public ConsoleObjectBaseImpl {
public:
    struct M {
        int f0;
        float f1;
        float f2;
        unsigned char f3;
        char pad4[3];
        unsigned long f4;
        M() : f0(0), f1(1.0f), f2(0.0f), f3(0), f4(0x759dc150) {}
    } value;
    ConsoleClass130() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "relativePositionInUp") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc12e64;
        W8(0x24) = cat;
        W8(0x108) = 0;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc12e64;
        W32(0xe0) = getValueForArgType(std::string("RandomDistribution"));
    }
} consoleObject130;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass131 : public ConsoleObjectBaseImpl {
public:
    struct M {
        int f0;
        float f1;
        float f2;
        unsigned char f3;
        char pad4[3];
        unsigned long f4;
        M() : f0(0), f1(1.0f), f2(0.0f), f3(0), f4(0x759dc150) {}
    } value;
    ConsoleClass131() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "relativePositionInRight") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc12e64;
        W8(0x24) = cat;
        W8(0x108) = 0;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc12e64;
        W32(0xe0) = getValueForArgType(std::string("RandomDistribution"));
    }
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
class ConsoleClass134 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass134();
} consoleObject134;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass135 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass135();
} consoleObject135;
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
class ConsoleClass139 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass139();
} consoleObject139;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass140 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass140();
} consoleObject140;
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
class ConsoleClass145 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass145();
} consoleObject145;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass146 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass146();
} consoleObject146;
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

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass171 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass171();
} consoleObject171;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass172 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass172();
} consoleObject172;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass173 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass173();
} consoleObject173;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass174 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass174();
} consoleObject174;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass175 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass175();
} consoleObject175;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass176 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass176();
} consoleObject176;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass178 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass178();
} consoleObject178;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass179 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass179();
} consoleObject179;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass180 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass180();
} consoleObject180;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass183 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass183();
} consoleObject183;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass184 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass184();
} consoleObject184;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass185 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass185();
} consoleObject185;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass186 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass186();
} consoleObject186;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass187 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass187();
} consoleObject187;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass188 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass188();
} consoleObject188;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass189 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass189();
} consoleObject189;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass190 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass190();
} consoleObject190;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass191 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass191();
} consoleObject191;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass192 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass192();
} consoleObject192;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass193 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass193();
} consoleObject193;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass194 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass194();
} consoleObject194;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass195 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass195();
} consoleObject195;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass196 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass196();
} consoleObject196;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass198 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass198();
} consoleObject198;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass199 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass199();
} consoleObject199;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass200 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass200();
} consoleObject200;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass201 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass201();
} consoleObject201;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass202 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass202();
} consoleObject202;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass203 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass203();
} consoleObject203;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass204 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass204();
} consoleObject204;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass205 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass205();
} consoleObject205;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass206 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass206();
} consoleObject206;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCEmitterSetConsoleClassDefaults("ObjectTemplate", 2, 21);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass266 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass266();
} consoleObject266;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass267 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass267();
} consoleObject267;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass268 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass268();
} consoleObject268;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass269 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass269() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "emitTime") {
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
} consoleObject269;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass270 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass270() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "emitDelay") {
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
} consoleObject270;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass271 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass271() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isLooping") {
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
} consoleObject271;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass272 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass272() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isStaticSystem") {
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
} consoleObject272;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass274 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass274() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "nearCullingEnable") {
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
} consoleObject274;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass277 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass277() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "emitPrio") {
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
} consoleObject277;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass278 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass278() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "LodDistance") {
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
} consoleObject278;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass279 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass279() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "QualityLevel") {
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
} consoleObject279;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass280 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass280() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "preWarmTime") {
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
} consoleObject280;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass281 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass281() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "randomSpeed") {
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
} consoleObject281;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass282 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass282() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "emitSpeed") {
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
} consoleObject282;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass283 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        float f3;
        M() : f0(0.0f), f1(0.0f), f2(0.0f), f3(0.0f) {}
    } value;
    ConsoleClass283() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "emitSpeedGraph") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xbcd7cb;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xbcd7cb;
        W32(0xe0) = getValueForArgType(std::string("Vec4"));
    }
} consoleObject283;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass284 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass284() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "emitDirection") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject284;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass285 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass285() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "randomDirectionAngle") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject285;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass286 : public ConsoleObjectBaseImpl {
public:
    struct M {
        int f0;
        float f1;
        float f2;
        unsigned char f3;
        char pad4[3];
        unsigned long f4;
        M() : f0(0), f1(1.0f), f2(0.0f), f3(0), f4(0x759dc150) {}
    } value;
    ConsoleClass286() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "emitRangeX") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc12e64;
        W8(0x24) = cat;
        W8(0x108) = 0;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc12e64;
        W32(0xe0) = getValueForArgType(std::string("RandomDistribution"));
    }
} consoleObject286;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass287 : public ConsoleObjectBaseImpl {
public:
    struct M {
        int f0;
        float f1;
        float f2;
        unsigned char f3;
        char pad4[3];
        unsigned long f4;
        M() : f0(0), f1(1.0f), f2(0.0f), f3(0), f4(0x759dc150) {}
    } value;
    ConsoleClass287() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "emitRangeY") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc12e64;
        W8(0x24) = cat;
        W8(0x108) = 0;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc12e64;
        W32(0xe0) = getValueForArgType(std::string("RandomDistribution"));
    }
} consoleObject287;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass288 : public ConsoleObjectBaseImpl {
public:
    struct M {
        int f0;
        float f1;
        float f2;
        unsigned char f3;
        char pad4[3];
        unsigned long f4;
        M() : f0(0), f1(1.0f), f2(0.0f), f3(0), f4(0x759dc150) {}
    } value;
    ConsoleClass288() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "emitRangeZ") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc12e64;
        W8(0x24) = cat;
        W8(0x108) = 0;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc12e64;
        W32(0xe0) = getValueForArgType(std::string("RandomDistribution"));
    }
} consoleObject288;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass289 : public ConsoleObjectBaseImpl {
public:
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass289() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "emitRadius") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject289;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass290 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass290() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "radialDirection") {
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
} consoleObject290;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass291 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass291() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "randomRadialDirection") {
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
} consoleObject291;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass293 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass293() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "gasCloudType") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W64(0x88) = (const char*)0xc4cfc9;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc4cfc9;
        W32(0xe0) = getValueForArgType(std::string("geom::GasCloudType"));
    }
} consoleObject293;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass294 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass294() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "blurryVisionTime") {
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
} consoleObject294;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass295 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass295() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "blurryVisionHoldTime") {
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
} consoleObject295;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass296 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass296() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "minGasCloudRadius") {
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
} consoleObject296;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass297 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass297() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "maxGasCloudRadius") {
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
} consoleObject297;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass298 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass298() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "gasCloudRadiusTime") {
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
} consoleObject298;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass299 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass299() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "gasCloudDamage") {
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
} consoleObject299;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass301 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass301() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "showInFirstPerson") {
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
} consoleObject301;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass302 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass302() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "showInThirdPerson") {
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
} consoleObject302;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCRenderingSetConsoleClassDefaults("ObjectTemplate", 2, 22);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass309 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass309() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "blendMode") {
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
} consoleObject309;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass310 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass310() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "drawOrder") {
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
} consoleObject310;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass311 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass311() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "writeZ") {
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
} consoleObject311;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass312 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass312() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "particleType") {
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
} consoleObject312;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass313 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass313() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "drawOrder") {
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
} consoleObject313;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass314 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass314() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "textureName") {
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
} consoleObject314;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass315 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass315() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "textureName") {
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
} consoleObject315;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass316 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass316() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "textureName") {
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
} consoleObject316;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass317 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass317() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "numPlanes") {
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
} consoleObject317;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass319 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass319() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "textureTileFactor") {
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
} consoleObject319;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass320 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass320() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "textureOffsetVelocity") {
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
} consoleObject320;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass321 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass321() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "geometry") {
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
} consoleObject321;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass322 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass322() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "particleSystemTemplate") {
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
} consoleObject322;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCAnimationSetConsoleClassDefaults("ObjectTemplate", 2, 23);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass328 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass328() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationEnable") {
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
} consoleObject328;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass329 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass329() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationPlayOnce") {
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
} consoleObject329;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass330 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass330() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationSpeed") {
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
} consoleObject330;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass331 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass331() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationFrameWidth") {
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
} consoleObject331;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass332 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass332() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationFrameHeight") {
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
} consoleObject332;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass333 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass333() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setAnimationFrameWidthRelative") {
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
} consoleObject333;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass334 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass334() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setAnimationFrameHeightRelative") {
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
} consoleObject334;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass335 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass335() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationRandomizedStartFrame") {
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
} consoleObject335;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass336 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass336() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationFrameCount") {
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
} consoleObject336;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass337 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass337() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationFrameCountX") {
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
} consoleObject337;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass338 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass338() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationEnable") {
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
} consoleObject338;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass339 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass339() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationSpeed") {
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
} consoleObject339;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass340 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass340() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationFrameWidth") {
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
} consoleObject340;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass341 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass341() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "animationFrameHeight") {
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
        pushNode(this, objTempFxList);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = getValueForArgType(std::string("int"));
    }
} consoleObject341;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass342 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass342();
} consoleObject342;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass343 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass343();
} consoleObject343;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass344 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass344();
} consoleObject344;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass345 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass345();
} consoleObject345;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass347 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass347();
} consoleObject347;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass348 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass348();
} consoleObject348;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass349 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass349();
} consoleObject349;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass350 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass350();
} consoleObject350;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass351 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass351();
} consoleObject351;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass352 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass352();
} consoleObject352;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass353 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass353();
} consoleObject353;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass354 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass354();
} consoleObject354;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass355 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass355();
} consoleObject355;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass356 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass356();
} consoleObject356;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCParticleSetConsoleClassDefaults("ObjectTemplate", 2, 19);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass362 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass362();
} consoleObject362;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass363 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass363();
} consoleObject363;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass365 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass365();
} consoleObject365;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass366 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass366();
} consoleObject366;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass367 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass367();
} consoleObject367;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass368 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass368();
} consoleObject368;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass369 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass369();
} consoleObject369;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass370 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass370();
} consoleObject370;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass371 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass371();
} consoleObject371;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass372 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass372();
} consoleObject372;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass373 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass373();
} consoleObject373;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass375 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass375();
} consoleObject375;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass376 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass376();
} consoleObject376;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass377 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass377();
} consoleObject377;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass378 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass378();
} consoleObject378;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass379 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass379();
} consoleObject379;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass381 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass381();
} consoleObject381;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass382 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass382();
} consoleObject382;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass383 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass383();
} consoleObject383;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCPhysicsSetConsoleClassDefaults("ObjectTemplate", 2, 1);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass387 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass387();
} consoleObject387;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass388 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass388();
} consoleObject388;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass390 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass390();
} consoleObject390;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass391 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass391();
} consoleObject391;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass393 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass393();
} consoleObject393;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass394 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass394();
} consoleObject394;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass396 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass396();
} consoleObject396;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass397 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass397();
} consoleObject397;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass398 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass398();
} consoleObject398;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass399 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass399();
} consoleObject399;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass400 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass400();
} consoleObject400;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass401 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass401();
} consoleObject401;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass404 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass404();
} consoleObject404;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass405 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass405();
} consoleObject405;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass406 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass406();
} consoleObject406;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass407 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass407();
} consoleObject407;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass410 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass410();
} consoleObject410;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass412 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass412();
} consoleObject412;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass413 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass413();
} consoleObject413;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass414 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass414();
} consoleObject414;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass415 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass415();
} consoleObject415;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass416 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass416();
} consoleObject416;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass417 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass417();
} consoleObject417;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass419 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass419();
} consoleObject419;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass420 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass420();
} consoleObject420;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass421 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass421();
} consoleObject421;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass423 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass423();
} consoleObject423;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass424 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass424();
} consoleObject424;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass426 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass426();
} consoleObject426;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass427 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass427();
} consoleObject427;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass434 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass434();
} consoleObject434;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass435 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass435();
} consoleObject435;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass436 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass436();
} consoleObject436;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass437 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass437();
} consoleObject437;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass438 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass438();
} consoleObject438;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass443 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass443();
} consoleObject443;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCEffectBundleSettingsSetConsoleClassDefaults("ObjectTemplate", 2, 25);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass474 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass474();
} consoleObject474;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass475 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass475();
} consoleObject475;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass476 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass476();
} consoleObject476;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass478 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass478();
} consoleObject478;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass479 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass479();
} consoleObject479;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass480 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass480();
} consoleObject480;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass481 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass481();
} consoleObject481;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass483 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass483();
} consoleObject483;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCAlphaIntensitySetConsoleClassDefaults("ObjectTemplate", 2, 26);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass489 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass489();
} consoleObject489;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass490 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass490();
} consoleObject490;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass492 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass492();
} consoleObject492;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass493 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass493();
} consoleObject493;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass494 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass494();
} consoleObject494;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass495 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass495();
} consoleObject495;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass496 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass496();
} consoleObject496;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass497 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass497();
} consoleObject497;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCEmitFrequencySetConsoleClassDefaults("ObjectTemplate", 2, 27);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass500 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass500();
} consoleObject500;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass501 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass501();
} consoleObject501;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass503 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass503();
} consoleObject503;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass504 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass504();
} consoleObject504;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass505 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass505();
} consoleObject505;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass506 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass506();
} consoleObject506;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass507 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass507();
} consoleObject507;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass508 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass508();
} consoleObject508;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCEmitSpeedSetConsoleClassDefaults("ObjectTemplate", 2, 28);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass511 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass511();
} consoleObject511;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass512 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass512();
} consoleObject512;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass514 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass514();
} consoleObject514;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass515 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass515();
} consoleObject515;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass516 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass516();
} consoleObject516;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass517 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass517();
} consoleObject517;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass518 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass518();
} consoleObject518;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass519 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass519();
} consoleObject519;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCStartAgeSetConsoleClassDefaults("ObjectTemplate", 2, 29);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass522 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass522();
} consoleObject522;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass523 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass523();
} consoleObject523;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass525 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass525();
} consoleObject525;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass526 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass526();
} consoleObject526;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass527 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass527();
} consoleObject527;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass528 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass528();
} consoleObject528;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass529 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass529();
} consoleObject529;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass530 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass530();
} consoleObject530;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCSoundIntensitySetConsoleClassDefaults("ObjectTemplate", 2, 30);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass533 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass533();
} consoleObject533;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass534 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass534();
} consoleObject534;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass536 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass536();
} consoleObject536;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass537 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass537();
} consoleObject537;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass538 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass538();
} consoleObject538;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass539 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass539();
} consoleObject539;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass540 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass540();
} consoleObject540;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass541 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass541();
} consoleObject541;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCAgeScaleSetConsoleClassDefaults("ObjectTemplate", 2, 31);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass544 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass544();
} consoleObject544;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass545 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass545();
} consoleObject545;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass547 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass547();
} consoleObject547;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass548 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass548();
} consoleObject548;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass549 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass549();
} consoleObject549;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass550 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass550();
} consoleObject550;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass551 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass551();
} consoleObject551;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass552 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass552();
} consoleObject552;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCLodSettingsSetConsoleClassDefaults("ObjectTemplate", 2, 32);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass555 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass555();
} consoleObject555;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass556 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass556();
} consoleObject556;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass558 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass558();
} consoleObject558;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass559 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass559();
} consoleObject559;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass560 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass560();
} consoleObject560;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass561 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass561();
} consoleObject561;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass562 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass562();
} consoleObject562;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass563 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass563();
} consoleObject563;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ParticlesfullAccessSetConsoleClassDefaults("Particles", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass572 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass572();
} consoleObject572;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass573 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass573();
} consoleObject573;
} } } } 

