// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=120
// FUNCTION: BF2 0x980d90
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
std::list<void*> gameLogicObjTemplBaseList;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCDefaultSetConsoleClassDefaults("ObjectTemplate", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass73 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass73();
} consoleObject73;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass89 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass89();
} consoleObject89;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass92 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass92();
} consoleObject92;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass93 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass93();
} consoleObject93;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass96 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass96();
} consoleObject96;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass97 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass97();
} consoleObject97;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass98 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass98();
} consoleObject98;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass99 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass99();
} consoleObject99;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass100 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass100();
} consoleObject100;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass104 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass104();
} consoleObject104;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass105 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass105();
} consoleObject105;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass107 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass107();
} consoleObject107;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass109 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass109();
} consoleObject109;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass111 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass111();
} consoleObject111;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass112 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass112();
} consoleObject112;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass113 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass113();
} consoleObject113;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass114 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass114();
} consoleObject114;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCPhysicsSetConsoleClassDefaults("ObjectTemplate", 2, 1);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass118 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass118();
} consoleObject118;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass119 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass119();
} consoleObject119;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass120 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass120();
} consoleObject120;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass121 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass121();
} consoleObject121;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass122 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass122();
} consoleObject122;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass123 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass123();
} consoleObject123;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass124 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass124();
} consoleObject124;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass127 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass127();
} consoleObject127;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass128 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass128();
} consoleObject128;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass129 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass129();
} consoleObject129;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass130 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass130();
} consoleObject130;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass131 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass131();
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
class ConsoleClass143 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass143();
} consoleObject143;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCAnimationSetConsoleClassDefaults("ObjectTemplate", 2, 23);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass147 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass147();
} consoleObject147;
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
class ConsoleClass154 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass154();
} consoleObject154;
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
class ConsoleClass157 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass157();
} consoleObject157;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass159 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass159();
} consoleObject159;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass160 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass160();
} consoleObject160;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass161 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass161();
} consoleObject161;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCDamageSetConsoleClassDefaults("ObjectTemplate", 2, 2);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass166 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass166();
} consoleObject166;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCAISetConsoleClassDefaults("ObjectTemplate", 2, 14);
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
class ConsoleClass190 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass190();
} consoleObject190;
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
class ConsoleClass197 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass197();
} consoleObject197;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass198 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass198();
} consoleObject198;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass207 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass207();
} consoleObject207;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCRotationSetConsoleClassDefaults("ObjectTemplate", 2, 7);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass223 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass223();
} consoleObject223;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass224 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass224();
} consoleObject224;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass225 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass225();
} consoleObject225;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass231 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass231();
} consoleObject231;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass232 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass232();
} consoleObject232;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass233 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass233();
} consoleObject233;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass234 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass234();
} consoleObject234;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass235 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass235();
} consoleObject235;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass237 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass237();
} consoleObject237;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass238 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass238();
} consoleObject238;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass239 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass239();
} consoleObject239;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass241 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass241();
} consoleObject241;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass242 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass242();
} consoleObject242;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass243 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass243();
} consoleObject243;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass244 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass244();
} consoleObject244;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass245 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass245();
} consoleObject245;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass246 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass246();
} consoleObject246;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass247 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass247();
} consoleObject247;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass248 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass248();
} consoleObject248;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass249 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass249();
} consoleObject249;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass250 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass250();
} consoleObject250;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass251 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass251();
} consoleObject251;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass252 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass252();
} consoleObject252;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass253 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass253();
} consoleObject253;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass254 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass254();
} consoleObject254;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCCameraSetConsoleClassDefaults("ObjectTemplate", 2, 8);
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
class ConsoleClass270 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass270();
} consoleObject270;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass271 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass271();
} consoleObject271;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass272 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass272();
} consoleObject272;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass273 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass273();
} consoleObject273;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass274 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass274();
} consoleObject274;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass275 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass275();
} consoleObject275;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass276 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass276();
} consoleObject276;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass277 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass277();
} consoleObject277;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass278 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass278();
} consoleObject278;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass280 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass280();
} consoleObject280;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass281 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass281();
} consoleObject281;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass282 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass282();
} consoleObject282;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass283 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass283();
} consoleObject283;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass285 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass285();
} consoleObject285;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass286 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass286();
} consoleObject286;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass287 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass287();
} consoleObject287;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass288 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass288();
} consoleObject288;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass289 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass289();
} consoleObject289;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass290 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass290();
} consoleObject290;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass291 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass291();
} consoleObject291;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass292 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass292();
} consoleObject292;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass294 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass294();
} consoleObject294;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass295 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass295();
} consoleObject295;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass296 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass296();
} consoleObject296;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass298 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass298();
} consoleObject298;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass299 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass299();
} consoleObject299;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass300 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass300();
} consoleObject300;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass301 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass301();
} consoleObject301;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass303 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass303();
} consoleObject303;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass304 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass304();
} consoleObject304;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass306 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass306();
} consoleObject306;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass307 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass307() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "allowInsideStaticSun") {
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
} consoleObject307;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass308 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass308() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "insideStaticSunDirection") {
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
} consoleObject308;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass309 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass309() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "insideStaticSunColor") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc2ba73;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc2ba73;
        W32(0xe0) = getValueForArgType(std::string("Vec3ColorFloatIntensity"));
    }
} consoleObject309;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass310 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass310() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "insideStaticSunDamageColor") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc2ba73;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc2ba73;
        W32(0xe0) = getValueForArgType(std::string("Vec3ColorFloatIntensity"));
    }
} consoleObject310;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass311 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass311() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "insideDamageFrequency") {
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
} consoleObject311;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass312 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass312() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "insideDamageThreshold") {
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
} consoleObject312;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass313 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass313() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "insideStaticSunAmbientColor") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc2ba73;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc2ba73;
        W32(0xe0) = getValueForArgType(std::string("Vec3ColorFloatIntensity"));
    }
} consoleObject313;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass315 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass315() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "cockpitLod") {
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
} consoleObject315;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass316 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass316() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "cockpitSubGeom") {
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
} consoleObject316;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass320 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass320() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "worldFOV") {
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
    ConsoleClass321() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "insideFOV") {
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
} consoleObject321;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass325 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass325() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "fOV") {
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
} consoleObject325;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass326 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass326() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "speed") {
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
} consoleObject326;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass327 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass327() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "height") {
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
} consoleObject327;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass334 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass334() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "entryRadius") {
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
} consoleObject334;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCWindAffectorSetConsoleClassDefaults("ObjectTemplate", 2, 24);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass349 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass349() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "windType") {
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
} consoleObject349;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass350 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass350() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "windIsDynamic") {
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
} consoleObject350;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass351 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass351() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "windBlowTime") {
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
} consoleObject351;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass352 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass352() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "widnBlowTime") {
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
} consoleObject352;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass353 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass353() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "windDirection") {
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
} consoleObject353;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass354 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass354() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "windFalloff") {
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
} consoleObject354;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass355 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass355() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "windRadialFalloff") {
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
} consoleObject355;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass356 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass356() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "windSpeed") {
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
} consoleObject356;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessCOCLightSetConsoleClassDefaults("ObjectTemplate", 2, 18);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass365 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass365() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "geometry") {
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
} consoleObject365;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass366 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass366() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "lightType") {
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
} consoleObject366;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass367 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass367() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "affectingType") {
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
} consoleObject367;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass368 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass368() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "isDynamic") {
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
} consoleObject368;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass369 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass369() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "castsStaticShadow") {
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
} consoleObject369;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass370 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass370() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "castsDynamicShadow") {
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
} consoleObject370;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass371 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass371() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "selfLights") {
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
} consoleObject371;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass372 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass372() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "selfShadows") {
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
} consoleObject372;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass373 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass373() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supportsPerVertex") {
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
} consoleObject373;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass374 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass374() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supportsPerPixel") {
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
} consoleObject374;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass375 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass375() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supportsGlow") {
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
} consoleObject375;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass376 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass376() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "supportsEmitter") {
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
} consoleObject376;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass377 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass377() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "affectLightmappedObjects") {
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
} consoleObject377;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass378 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass378() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "attenuationRange1") {
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
} consoleObject378;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass379 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass379() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "attenuationRange2") {
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
} consoleObject379;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass380 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass380() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "color") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc2ba73;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc2ba73;
        W32(0xe0) = getValueForArgType(std::string("Vec3ColorFloatIntensity"));
    }
} consoleObject380;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass381 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass381() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "speccolor") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xc2ba73;
        W8(0x108) = 0;
        W8(0x24) = cat;
        addToClassObjectList(this);
        W64(0x90) = (const char*)0xc2ba73;
        W32(0xe0) = getValueForArgType(std::string("Vec3ColorFloatIntensity"));
    }
} consoleObject381;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass382 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass382() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "HDRIntensity") {
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
} consoleObject382;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass383 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass383() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "coneAngle1") {
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
} consoleObject383;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass384 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass384() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "coneAngle2") {
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
} consoleObject384;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass385 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass385() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "direction") {
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
} consoleObject385;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass386 : public ConsoleObjectBaseImpl {
public:
    std::string value;
    ConsoleClass386() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "projectorTexture") {
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
} consoleObject386;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass387 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass387() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "projectorFov") {
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
} consoleObject387;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass388 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass388() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "projectorAspect") {
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
} consoleObject388;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass389 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass389() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "projectorNear") {
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
} consoleObject389;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass390 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass390() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "projectorFar") {
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
} consoleObject390;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass391 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass391() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "projectorApplyMask") {
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
} consoleObject391;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass392 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass392() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "enabled") {
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
} consoleObject392;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass393 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass393() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "fov") {
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
} consoleObject393;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass394 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass394() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "intensity") {
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
} consoleObject394;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass395 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass395() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "shadowIntensity") {
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
} consoleObject395;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass396 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass396() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "softness") {
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
} consoleObject396;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass397 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass397() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "objectShadows") {
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
} consoleObject397;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass398 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass398() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "flicker") {
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
} consoleObject398;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass399 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass399() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "scale") {
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
} consoleObject399;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
SetConsoleClassDefaults ObjectTemplatefullAccessSetConsoleClassDefaults("ObjectTemplate", 2, 0);
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass408 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass408() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ik.positionLeft") {
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
} consoleObject408;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass409 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass409() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ik.rotationLeft") {
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
} consoleObject409;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass410 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass410() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ik.poleVectorLeft") {
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
} consoleObject410;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass411 : public ConsoleObjectBaseImpl {
public:
    Vec3 value;
    ConsoleClass411() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ik.positionRight") {
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
        pushNode(this, gameLogicObjTemplBaseList);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject411;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass412 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass412() : ConsoleObjectBaseImpl(ConsoleObject::mDefaultDynamicObjectName, "ik.rotationRight") {
        unsigned acc = ConsoleObject::mDefaultAccess;
        W32(0x10c) = 0;
        W32(0x110) = 0;
        W32(0x114) = 0;
        W8(0x109) = 1;
        W32(0x20) = acc;
        unsigned char cat = ConsoleObject::mDefaultCategory;
        W32(0x8) = 1;
        W32(0x28) = 0;
        W32(0x2c) = 1;
        W64(0x88) = (const char*)0xb3a92b;
        W8(0x108) = 0;
        W8(0x24) = cat;
        pushNode(this, gameLogicObjTemplBaseList);
        W64(0x90) = (const char*)0xb3a92b;
        W32(0xe0) = getValueForArgType(std::string("Vec3"));
    }
} consoleObject412;
} } } } 

namespace dice { namespace hfe { namespace world { namespace { 
class ConsoleClass413 : public ConsoleObjectBaseImpl {
public:
    ConsoleClass413();
} consoleObject413;
} } } } 

