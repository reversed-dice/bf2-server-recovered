// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120
// FUNCTION: BF2 0xaf5330
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

namespace dice { namespace hfe { namespace world { 
Vec3 debugMeshMaterialColors[10] = {
    Vec3(0.66f, 0.66f, 0.185f),
    Vec3(0.185f, 0.66f, 0.185f),
    Vec3(0.185f, 0.185f, 0.66f),
    Vec3(0.185f, 0.66f, 0.66f),
    Vec3(0.66f, 0.185f, 0.185f),
    Vec3(0.66f, 0.66f, 0.66f),
    Vec3(0.66f, 0.185f, 0.66f),
    Vec3(0.185f, 0.185f, 0.185f),
    Vec3(1.0f, 1.0f, 1.0f),
    Vec3(0.0f, 0.0f, 0.0f)
};
} } } 

namespace dice { namespace hfe { namespace world { namespace { 
std::list<void*> myList;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults PhysicsfullAccessSetConsoleClassDefaults("Physics", 2, 0);
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
    struct M {
        float f0;
        float f1;
        float f2;
        M() : f0(0.0f), f1(0.0f), f2(0.0f) {}
    } value;
    ConsoleClass141() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "wind") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("Vec3").compare("std::string") == 0);
    }
} consoleObject141;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass142 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass142() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "airDensityZeroAtHeight") {
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
} consoleObject142;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass143 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass143() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "listProperties") {
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
} consoleObject143;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults heightmapclusterfullAccessSetConsoleClassDefaults("heightmapcluster", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass146 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass146() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "create") {
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
} consoleObject146;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass147 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass147() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setClusterSize") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    }
} consoleObject147;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass148 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass148() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setHeightmapSize") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    }
} consoleObject148;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass149 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass149() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "addHeightmap") {
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
        W64(0x90) = (const char*)0xba02f0;
        W64(0x98) = (const char*)0xbd2a5c;
        W64(0xa0) = (const char*)0xbd2a5c;
        W32(0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
        W32(0xe4) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
        W32(0xe8) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    }
} consoleObject149;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass150 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass150() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "intersectCameraRay") {
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
} consoleObject150;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass151 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass151() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setSeaWaterLevel") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject151;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass152 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass152() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "compileWaterMeshesIntoHeightmap") {
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
} consoleObject152;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass153 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass153() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "importSurroundingRawHeightMap") {
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
} consoleObject153;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass154 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass154() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "smoothEdges") {
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
        W64(0x98) = (const char*)0xb3b221;
        W64(0xa0) = (const char*)0xb3b221;
        W32(0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
        W32(0xe4) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
        W32(0xe8) = ~-(unsigned int)(std::string("float").compare("std::string") == 0);
    }
} consoleObject154;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass155 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass155() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "stitchEdges") {
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

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults heightmapfullAccessSetConsoleClassDefaults("heightmap", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass161 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass161() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setSize") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
        W32(0xe4) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    }
} consoleObject161;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass162 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass162() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setScale") {
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
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = ~-(unsigned int)(std::string("Vec3").compare("std::string") == 0);
    }
} consoleObject162;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass163 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass163() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setBitResolution") {
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
        W32(0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    }
} consoleObject163;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass164 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass164() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "loadHeightData") {
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
} consoleObject164;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass165 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass165() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setModified") {
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
} consoleObject165;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass167 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass167() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "setMaterialScale") {
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
        pushNode(this, myList);
        W64(0x90) = (const char*)0xbd2a5c;
        W32(0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    }
} consoleObject167;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass168 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass168();
} consoleObject168;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults collisionManagerfullAccessSetConsoleClassDefaults("collisionManager", 2, 0);
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
class ConsoleClass177 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass177();
} consoleObject177;
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
class ConsoleClass181 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass181();
} consoleObject181;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass182 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass182();
} consoleObject182;
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

