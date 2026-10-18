// BF2_FLAGS: --param inline-unit-growth=0 --param large-function-growth=100
// FUNCTION: BF2 0x5473d0
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

namespace { 
__attribute__((noinline)) void addToClassObjectList(ConsoleObject*);
} 

namespace dice { namespace hfe { namespace world { 
Vec3 zeroVec;
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

namespace { 
float* const g_soldierTimeToEnableWeapon = Vars::getFloat("soldier-timeToEnableWeapon", 1.25f);
} 

namespace { 
float* const g_soldierLookAroundX = Vars::getFloat("phy-soldier-look-factor-x", 5.0f);
} 

namespace { 
float* const g_soldierLookAroundY = Vars::getFloat("phy-soldier-look-factor-y", 5.0f);
} 

namespace { 
float* const g_soldierSpeedFactor = Vars::getFloat("phy-soldier-speed-factor", 1.0f);
} 

namespace { 
float* const g_soldierJumpFactor = Vars::getFloat("phy-soldier-jump-factor", 1.0f);
} 

namespace { 
float* const g_soldierJumpLengthFactor = Vars::getFloat("phy-soldier-jump-length-factor", 0.98f);
} 

namespace { 
float* const g_soldierAcceleration = Vars::getFloat("phy-soldier-acceleration", 0.2f);
} 

namespace { 
float* const g_soldierDeceleration = Vars::getFloat("phy-soldier-deceleration", 0.2f);
} 

namespace { 
float* const g_soldierSkyDiveAtSpeed = Vars::getFloat("phy-soldier-skydiveat-speed", -10.0f);
} 

namespace { 
float* const g_soldierSkyDiveSpeed = Vars::getFloat("phy-soldier-skydive-speed", 15.0f);
} 

namespace { 
float* const g_soldierSprintSpeed = Vars::getFloat("phy-soldier-sprint-speed", 7.0f);
} 

namespace { 
float* const g_soldierRunSpeed = Vars::getFloat("phy-soldier-run-speed", 3.9f);
} 

namespace { 
float* const g_soldierWalkSpeed = Vars::getFloat("phy-soldier-walk-speed", 1.5f);
} 

namespace { 
float* const g_soldierCrouchSpeed = Vars::getFloat("phy-soldier-crouch-speed", 2.0f);
} 

namespace { 
float* const g_soldierCrawlSpeed = Vars::getFloat("phy-soldier-crawl-speed", 0.8f);
} 

namespace { 
float* const g_soldierSwimSpeed = Vars::getFloat("phy-soldier-swim-speed", 2.1f);
} 

namespace { 
float* const g_soldierSwimCrawlSpeed = Vars::getFloat("phy-soldier-swimcrawl-speed", 3.645f);
} 

namespace { 
float* const g_soldierInAirSpeed = Vars::getFloat("phy-soldier-inair-speed", 2.0f);
} 

namespace { 
float* const g_soldierSprintRecoverTime = Vars::getFloat("phy-soldier-sprint-recover-time", 120.0f);
} 

namespace { 
float* const g_soldierSprintDissipationTime = Vars::getFloat("phy-soldier-sprint-dissipation-time", 10.0f);
} 

namespace { 
float* const g_soldierSprintLimit = Vars::getFloat("phy-soldier-sprint-limit", 0.5f);
} 

namespace { 
float* const g_poseCrawl2Crouch = Vars::getFloat("pose-crawl-crouch", 0.5f);
} 

namespace { 
float* const g_poseCrawl2Walk = Vars::getFloat("pose-crawl-walk", 0.5f);
} 

namespace { 
float* const g_poseCrawl2Run = Vars::getFloat("pose-crawl-run", 0.5f);
} 

namespace { 
float* const g_poseCrawl2Sprint = Vars::getFloat("pose-crawl-sprint", 0.5f);
} 

namespace { 
float* const g_poseCrawl2Swim = Vars::getFloat("pose-crawl-swim", 0.5f);
} 

namespace { 
float* const g_poseCrawl2SwimCrawl = Vars::getFloat("pose-crawl-swimCrawl", 0.5f);
} 

namespace { 
float* const g_poseCrouch2Crawl = Vars::getFloat("pose-crouch-crawl", 0.5f);
} 

namespace { 
float* const g_poseCrouch2Walk = Vars::getFloat("pose-crouch-walk", 0.25f);
} 

namespace { 
float* const g_poseCrouch2Run = Vars::getFloat("pose-crouch-run", 0.25f);
} 

namespace { 
float* const g_poseCrouch2Sprint = Vars::getFloat("pose-crouch-sprint", 0.25f);
} 

namespace { 
float* const g_poseCrouch2Swim = Vars::getFloat("pose-crouch-swim", 0.5f);
} 

namespace { 
float* const g_poseCrouch2SwimCrawl = Vars::getFloat("pose-crouch-swimCrawl", 0.5f);
} 

namespace { 
float* const g_poseWalk2Crawl = Vars::getFloat("pose-walk-crawl", 0.5f);
} 

namespace { 
float* const g_poseWalk2Crouch = Vars::getFloat("pose-walk-crouch", 0.25f);
} 

namespace { 
float* const g_poseWalk2Run = Vars::getFloat("pose-walk-run", 0.25f);
} 

namespace { 
float* const g_poseWalk2Sprint = Vars::getFloat("pose-walk-sprint", 0.25f);
} 

namespace { 
float* const g_poseWalk2Swim = Vars::getFloat("pose-walk-swim", 0.5f);
} 

namespace { 
float* const g_poseWalk2SwimCrawl = Vars::getFloat("pose-walk-swimCrawl", 0.5f);
} 

namespace { 
float* const g_poseRun2Crawl = Vars::getFloat("pose-run-crawl", 0.5f);
} 

namespace { 
float* const g_poseRun2Crouch = Vars::getFloat("pose-run-crouch", 0.25f);
} 

namespace { 
float* const g_poseRun2Walk = Vars::getFloat("pose-run-walk", 0.25f);
} 

namespace { 
float* const g_poseRun2Sprint = Vars::getFloat("pose-run-sprint", 0.25f);
} 

namespace { 
float* const g_poseRun2Swim = Vars::getFloat("pose-run-swim", 0.5f);
} 

namespace { 
float* const g_poseRun2SwimCrawl = Vars::getFloat("pose-run-swimCrawl", 0.5f);
} 

namespace { 
float* const g_poseSprint2Crawl = Vars::getFloat("pose-sprint-crawl", 0.5f);
} 

namespace { 
float* const g_poseSprint2Crouch = Vars::getFloat("pose-sprint-crouch", 0.25f);
} 

namespace { 
float* const g_poseSprint2Walk = Vars::getFloat("pose-sprint-walk", 0.25f);
} 

namespace { 
float* const g_poseSprint2Run = Vars::getFloat("pose-sprint-run", 0.25f);
} 

namespace { 
float* const g_poseSprint2Swim = Vars::getFloat("pose-sprint-swim", 0.5f);
} 

namespace { 
float* const g_poseSprint2SwimCrawl = Vars::getFloat("pose-sprint-swimCrawl", 0.5f);
} 

namespace { 
float* const g_poseSwim2Crawl = Vars::getFloat("pose-sprint-crawl", 0.5f);
} 

namespace { 
float* const g_poseSwim2Crouch = Vars::getFloat("pose-sprint-crouch", 0.5f);
} 

namespace { 
float* const g_poseSwim2Walk = Vars::getFloat("pose-sprint-walk", 0.5f);
} 

namespace { 
float* const g_poseSwim2Run = Vars::getFloat("pose-sprint-run", 0.5f);
} 

namespace { 
float* const g_poseSwim2Sprint = Vars::getFloat("pose-sprint-swim", 0.5f);
} 

namespace { 
float* const g_poseSwim2SwimCrawl = Vars::getFloat("pose-sprint-swimCrawl", 0.5f);
} 

namespace { 
float* const g_poseSwimCrawl2Crawl = Vars::getFloat("pose-sprint-crawl", 0.5f);
} 

namespace { 
float* const g_poseSwimCrawl2Crouch = Vars::getFloat("pose-sprint-crouch", 0.5f);
} 

namespace { 
float* const g_poseSwimCrawl2Walk = Vars::getFloat("pose-sprint-walk", 0.5f);
} 

namespace { 
float* const g_poseSwimCrawl2Run = Vars::getFloat("pose-sprint-run", 0.5f);
} 

namespace { 
float* const g_poseSwimCrawl2Sprint = Vars::getFloat("pose-sprint-swim", 0.5f);
} 

namespace { 
float* const g_poseSwimCrawl2Swim = Vars::getFloat("pose-sprint-swimCrawl", 0.5f);
} 

namespace { 
float* const soldier_lookSideRestore = Vars::getFloat("soldier-lookSideRestore", 4.0f);
} 

namespace { 
Vec3* soldier_lookMaxAngle = Vars::getVec3("soldier-lookMaxAngle", Vec3(40.0f, 85.0f, 0.0f));
} 

namespace { 
float* const g_soldierStandHeight = Vars::getFloat("coll-soldier-stand-height", 1.7f);
} 

namespace { 
float* const g_soldierRadius = Vars::getFloat("coll-soldier-radius", 0.25f);
} 

namespace { 
float* const g_manDownHeadInterpolateSpeed = Vars::getFloat("soldier-mandown-speed", 3.0f);
} 

namespace { 
float* const g_manDownRotInterpolateSpeed = Vars::getFloat("soldier-mandown-rotspeed", 1.4f);
} 

namespace { 
float* const g_footStepEffectCullDistance = Vars::getFloat("soldier-footstep-effect-cull-distance", 20.0f);
} 

namespace { 
float* const g_footStepEffectOffsetY = Vars::getFloat("soldier-footstep-offset-y", -0.99f);
} 

namespace { 
float* const g_footStepEffectOffsetDofStand = Vars::getFloat("soldier-footstep-offset-dof-stand", 0.13f);
} 

namespace { 
float* const g_footStepEffectOffsetDofProne = Vars::getFloat("soldier-footstep-offset-dof-prone", 0.0f);
} 

namespace { 
float* const g_proneInWaterLimit = Vars::getFloat("soldier-prone-inwater-limit", 1.1f);
} 

namespace { 
float* const g_soldierDrownDamage = Vars::getFloat("soldier-drown-damage", 8.0f);
} 

namespace { 
float* const g_fireDelayAfterJump = Vars::getFloat("fire-delay-after-jump", 1.0f);
} 

namespace { 
float* const g_proneDelayAfterJump = Vars::getFloat("prone-delay-after-jump", 1.0f);
} 

namespace { 
float* const g_jumpDelayAfterProne = Vars::getFloat("jump-delay-after-prone", 1.0f);
} 

namespace { 
float* const g_standDelayFromProne = Vars::getFloat("stand-delay-from-prone", 1.0f);
} 

namespace { 
float* const g_proneDelayFromStand = Vars::getFloat("prone-delay-from-stand", 1.0f);
} 

namespace { 
float* const g_sprintRechargeDelayAfterJump = Vars::getFloat("sprint-recharge-delay-after-jump", 1.0f);
} 

namespace { 
float* const g_fireDelayFromProne = Vars::getFloat("fire-delay-from-prone", 0.6f);
} 

namespace { 
float* const g_cameraMovementSpeedOnProne = Vars::getFloat("camera-movement-speed-on-prone", 0.5f);
} 

namespace { 
float* const g_cameraMovementSpeedOnCrouch = Vars::getFloat("camera-movement-speed-on-crouch", 0.5f);
} 

namespace { 
float* const g_cameraMovementSpeedOnStand = Vars::getFloat("camera-movement-speed-on-stand", 0.5f);
} 

namespace { 
float v_0108e924 = *g_poseCrawl2Crouch;
} 

namespace { 
float v_0108e928 = *g_poseCrawl2Walk;
} 

namespace { 
float v_0108e92c = *g_poseCrawl2Run;
} 

namespace { 
float v_0108e930 = *g_poseCrawl2Sprint;
} 

namespace { 
float v_0108e934 = *g_poseCrawl2Swim;
} 

namespace { 
float v_0108e938 = *g_poseCrawl2SwimCrawl;
} 

namespace { 
float v_0108e93c = *g_poseCrouch2Crawl;
} 

namespace { 
float v_0108e944 = *g_poseCrouch2Walk;
} 

namespace { 
float v_0108e948 = *g_poseCrouch2Run;
} 

namespace { 
float v_0108e94c = *g_poseCrouch2Sprint;
} 

namespace { 
float v_0108e950 = *g_poseCrouch2Swim;
} 

namespace { 
float v_0108e954 = *g_poseCrouch2SwimCrawl;
} 

namespace { 
float v_0108e958 = *g_poseWalk2Crawl;
} 

namespace { 
float v_0108e95c = *g_poseWalk2Crouch;
} 

namespace { 
float v_0108e964 = *g_poseWalk2Run;
} 

namespace { 
float v_0108e968 = *g_poseWalk2Sprint;
} 

namespace { 
float v_0108e96c = *g_poseWalk2Swim;
} 

namespace { 
float v_0108e970 = *g_poseWalk2SwimCrawl;
} 

namespace { 
float v_0108e974 = *g_poseRun2Crawl;
} 

namespace { 
float v_0108e978 = *g_poseRun2Crouch;
} 

namespace { 
float v_0108e97c = *g_poseRun2Walk;
} 

namespace { 
float v_0108e984 = *g_poseRun2Sprint;
} 

namespace { 
float v_0108e988 = *g_poseRun2Swim;
} 

namespace { 
float v_0108e98c = *g_poseRun2SwimCrawl;
} 

namespace { 
float v_0108e990 = *g_poseSprint2Crawl;
} 

namespace { 
float v_0108e994 = *g_poseSprint2Crouch;
} 

namespace { 
float v_0108e998 = *g_poseSprint2Walk;
} 

namespace { 
float v_0108e99c = *g_poseSprint2Run;
} 

namespace { 
float v_0108e9a4 = *g_poseSprint2Swim;
} 

namespace { 
float v_0108e9a8 = *g_poseSprint2SwimCrawl;
} 

namespace { 
float v_0108e9ac = *g_poseSwim2Crawl;
} 

namespace { 
float v_0108e9b0 = *g_poseSwim2Crouch;
} 

namespace { 
float v_0108e9b4 = *g_poseSwim2Walk;
} 

namespace { 
float v_0108e9b8 = *g_poseSwim2Run;
} 

namespace { 
float v_0108e9bc = *g_poseSwim2Sprint;
} 

namespace { 
float v_0108e9c4 = *g_poseSwim2SwimCrawl;
} 

namespace { 
float v_0108e9c8 = *g_poseSwimCrawl2Crawl;
} 

namespace { 
float v_0108e9cc = *g_poseSwimCrawl2Crouch;
} 

namespace { 
float v_0108e9d0 = *g_poseSwimCrawl2Walk;
} 

namespace { 
float v_0108e9d4 = *g_poseSwimCrawl2Run;
} 

namespace { 
float v_0108e9d8 = *g_poseSwimCrawl2Sprint;
} 

namespace { 
float v_0108e9dc = *g_poseSwimCrawl2Swim;
} 

namespace dice { namespace hfe { namespace world { 
float soldierSpeed = *g_soldierCrawlSpeed;
} } } 

namespace { 
float v_0108e904 = *g_soldierCrouchSpeed;
} 

namespace { 
float v_0108e908 = *g_soldierWalkSpeed;
} 

namespace { 
float v_0108e90c = *g_soldierRunSpeed;
} 

namespace { 
float v_0108e910 = *g_soldierSprintSpeed;
} 

namespace { 
float v_0108e914 = *g_soldierSwimSpeed;
} 

namespace { 
float v_0108e918 = *g_soldierSwimCrawlSpeed;
} 

