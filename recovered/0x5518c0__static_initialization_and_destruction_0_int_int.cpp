// FUNCTION: BF2 0x5518c0

#include <iostream>
#include <string>

namespace dice { namespace hfe {

class Vars
{
public:
	static int* getInt(char const*, int);
	static float* getFloat(char const*, float);
};

namespace world {

class Vec3
{
public:
	Vec3() : x(0), y(0), z(0) {}
	float x, y, z;
};

Vec3 zeroVec;

namespace {

float* rd_expForceMod = Vars::getFloat("rd_expForceMod", 1.0f);
float* rd_dieInVehicleForce = Vars::getFloat("rd_dieInVehicleForce", 100.0f);
float* rd_hitForce = Vars::getFloat("rd_hitForce", 9000.0f);
float* rd_hitUp = Vars::getFloat("rd_hitUp", 0);
float* soldier_lookIdleAngle = Vars::getFloat("soldier_lookIdleAngle", 15.0f);
float* soldier_lookIdleTime = Vars::getFloat("soldier_lookIdleTime", 2.5f);
float* soldier_lookSmooth = Vars::getFloat("soldier_lookSmooth", 10.0f);
float* anim_soldier_spring_clamp = Vars::getFloat("anim-soldier-spring-clamp", 0.001f);
float* anim_soldier_spring_zoom_factor = Vars::getFloat("anim-soldier-spring-zoom-factor", 6.0f);
float* anim_soldier_1p_speed_crouch = Vars::getFloat("anim-soldier-1p-speed-crouch", 1.7f);
float* anim_soldier_1p_speed_prone = Vars::getFloat("anim-soldier-1p-speed-prone", 3.0f);
int* anim_playCameraAnimations = Vars::getInt("anim_playCameraAnimations", 1);
int* anim_playSoldierAnimations = Vars::getInt("anim_playSoldierAnimations", 1);
int* anim_playSoldierPostAnimations = Vars::getInt("anim_playSoldierPostAnimations", 1);
int* anim_playWeaponAnimations = Vars::getInt("anim_playWeaponAnimations", 1);
int* anim_playVehicleAnimations = Vars::getInt("anim_playVehicleAnimations", 1);
float* anim_startLandAtHeight = Vars::getFloat("anim_startLandAtHeight", 1.0f);
float* anim_startLandAtSpeed = Vars::getFloat("anim_startLandAtSpeed", -0.5f);
float* anim_startJumpAtSpeed = Vars::getFloat("anim_startJumpAtSpeed", 2.5f);
float* soldier_fov1p = Vars::getFloat("soldier-fov1p", 0.82f);
float* soldier_lookUp = Vars::getFloat("soldier-lookUp", -70.0f);
float* soldier_lookDown = Vars::getFloat("soldier-lookDown", 70.0f);
float* soldier_proneLookUp = Vars::getFloat("soldier-proneLookUp", -30.0f);
float* soldier_proneLookDown = Vars::getFloat("soldier-proneLookDown", 5.0f);
float* soldier_throwHelmet = Vars::getFloat("soldier_throwHelmet", 0.025f);
float* soldier_throwGun = Vars::getFloat("soldier_throwGun", 0.025f);
float* soldier_throwGunForward = Vars::getFloat("soldier_throwGunForward", 1.0f);
float* soldier_throwKitPartsDelay = Vars::getFloat("soldier_throwKitPartsDelay", 0.3f);
float* soldier_drop_min = Vars::getFloat("soldier-drop-min", 0.5f);
float* soldier_drop_max = Vars::getFloat("soldier-drop-max", 1.5f);
float* soldier_revive_disableinputtime = Vars::getFloat("soldier-revive-disableinputtime", 2.1f);

}

} } }
