#pragma once
#include "IPlayer.h"
namespace dice { namespace hfe { namespace world {
class IObject;
class IPlayer;
class Inner;
class ItemContainer;
class SoldierCamera;
class SoldierPose;
class Soldier_CharacterMode;
class TemplateMessage;
class Vec3;
class Soldier {
public:
  // FUNCTION: BF2 0x00546300
  void setIsSkyDiving(bool param_2);
  // FUNCTION: BF2 0x00546340
  void updateHoldBreathUnderwaterTime(float);
  // FUNCTION: BF2 0x00546450
  void getNameTagOffset();
  // FUNCTION: BF2 0x00546460
  void getRidingWithOffset();
  // FUNCTION: BF2 0x00546470
  void getRidingWithDistMod();
  // FUNCTION: BF2 0x00546480
  void getSoundFilter() const;
  // FUNCTION: BF2 0x00546490
  unsigned int getItemContainerType() const;
  // FUNCTION: BF2 0x005465e0
  unsigned char getIsSprinting() const;
  // FUNCTION: BF2 0x005465f0
  void setIsSprinting(unsigned char);
  // FUNCTION: BF2 0x00546600
  unsigned int isNotFireingOrHaveRecoil();
  // FUNCTION: BF2 0x00546610
  void removeChild(world::IObject*);
  // FUNCTION: BF2 0x00546760
  float getCurrentAbility() const;
  // FUNCTION: BF2 0x00546770
  void setCurrentAbility(float);
  // FUNCTION: BF2 0x005467a0
  void removeFromLadder();
  // FUNCTION: BF2 0x005467b0
  void getKitType() const;
  // FUNCTION: BF2 0x005467e0
  float getSoldierRadius() const;
  // FUNCTION: BF2 0x005467f0
  float getStandingHeight() const;
  // FUNCTION: BF2 0x00546800
  float getNormalizedUnderwaterTime() const;
  // FUNCTION: BF2 0x00546810
  void stopDrowningSound();
  // FUNCTION: BF2 0x00546820
  void* getSoldierCamera() const;
  // FUNCTION: BF2 0x00546e50
  void bulletFlyBy(world::IObject*, Vec3 const &, Vec3 const &);
  // FUNCTION: BF2 0x00546f30
  void sendMessageToItem(int, world::TemplateMessage, world::IPlayer*, bool);
  // FUNCTION: BF2 0x005473a0
  void* getActiveCamera();
  // FUNCTION: BF2 0x00548700
  void triggerFootStepEffect(int, int);
  // FUNCTION: BF2 0x00548a10
  void setLadderId(unsigned, int);
  // FUNCTION: BF2 0x0054a190
  void destroy(bool);
  // FUNCTION: BF2 0x0054ac70
  void getMovementMatrix();
  // FUNCTION: BF2 0x0054b290
  void setLookLeftRightAngle(float);
  // FUNCTION: BF2 0x0054b2c0
  void setLookUpDownAngle(float);
  // FUNCTION: BF2 0x0054dd50
  void handlePickupOnItem(world::IPlayer*, world::IObject*);
  // FUNCTION: BF2 0x0054ddc0
  void handleDropOnItem(world::IPlayer*, world::IObject*);
  // FUNCTION: BF2 0x0054e4f0
  void initNetworkableComp();
  // FUNCTION: BF2 0x00550810
  unsigned int release();
  // FUNCTION: BF2 0x00550880
  void queryInterface(unsigned, int) const;
  // FUNCTION: BF2 0x005508f0
  unsigned char isOccupied() const;
  // FUNCTION: BF2 0x00550910
  unsigned int getPcoId() const;
  // FUNCTION: BF2 0x00550930
  void setPcoId();
  // FUNCTION: BF2 0x00550950
  const char* getCameras();
  // FUNCTION: BF2 0x00550970
  const char* getOwnCameras();
  // FUNCTION: BF2 0x00550990
  void nextCamera();
  // FUNCTION: BF2 0x005509b0
  void setActiveCamera();
  // FUNCTION: BF2 0x005509d0
  const char* getPcos();
  // FUNCTION: BF2 0x005509f0
  const char* getWeapons();
  // FUNCTION: BF2 0x00550a20
  void* getActiveWeapon(int slot) const;
  // FUNCTION: BF2 0x00550a40
  long getWeapons(int index) const;
  // FUNCTION: BF2 0x00550a70
  int getActiveItemIndex();
  // FUNCTION: BF2 0x00550a90
  void toggleOnWeaponLock();
  // FUNCTION: BF2 0x00550aa0
  unsigned int getSubPos();
  // FUNCTION: BF2 0x00550ab0
  unsigned int getSonarPos();
  // FUNCTION: BF2 0x00550ad0
  unsigned int getArtPos();
  // FUNCTION: BF2 0x00550af0
  void setTeam(unsigned int);
  // FUNCTION: BF2 0x00550b10
  int getTeam();
  // FUNCTION: BF2 0x00550b30
  void setDefaultTeam();
  // FUNCTION: BF2 0x00550b50
  void setTimeToLiveUnused();
  // FUNCTION: BF2 0x00550b70
  void setObjectSpawnerId();
  // FUNCTION: BF2 0x00550b90
  unsigned int getObjectSpawnerId() const;
  // FUNCTION: BF2 0x00550bb0
  void setObjectSpawnerHolding();
  // FUNCTION: BF2 0x00550bd0
  unsigned int getObjectSpawnerHolding() const;
  // FUNCTION: BF2 0x00550bf0
  void addVehicleMod();
  // FUNCTION: BF2 0x00550c10
  void removeVehicleMod();
  // FUNCTION: BF2 0x00550c30
  unsigned int getVehicleMod();
  // FUNCTION: BF2 0x00550c50
  float getShakeFactor() const;
  // FUNCTION: BF2 0x00550c70
  float getSprintStamina() const;
  // FUNCTION: BF2 0x00550c90
  void setSprintStamina(float);
  // FUNCTION: BF2 0x00550cb0
  void setSprintStaminaDissipationFactor(float factor);
  // FUNCTION: BF2 0x00550cd0
  float getSprintFactor() const;
  // FUNCTION: BF2 0x00550cf0
  int getAmmoStatus();
  // FUNCTION: BF2 0x00550d10
  void setAmmoStatus(unsigned int);
  // FUNCTION: BF2 0x00550d30
  int getPose() const;
  // FUNCTION: BF2 0x00550d50
  int getRequestedPose() const;
  // FUNCTION: BF2 0x00550d60
  void setRequestedPose(world::SoldierPose);
  // FUNCTION: BF2 0x00550d80
  bool getIsNewPoseRequested() const;
  // FUNCTION: BF2 0x00550db0
  unsigned long long getKit();
  // FUNCTION: BF2 0x00550dd0
  int getLastContactMaterial() const;
  // FUNCTION: BF2 0x00550df0
  unsigned int getIsUnderwater() const;
  // FUNCTION: BF2 0x00550e00
  bool getIsSwimming() const;
  // FUNCTION: BF2 0x00550e20
  int getLadderId() const;
  // FUNCTION: BF2 0x00550e40
  void setZiplineId(unsigned int);
  // FUNCTION: BF2 0x00550e60
  int getZiplineId() const;
  // FUNCTION: BF2 0x00550e80
  void setGrapplingHookId(unsigned int);
  // FUNCTION: BF2 0x00550ea0
  int getGrapplingHookId() const;
  // FUNCTION: BF2 0x00550ec0
  void setReadyToClimbTime(float);
  // FUNCTION: BF2 0x00550ee0
  unsigned char getIsSkyDiving() const;
  // FUNCTION: BF2 0x00550f00
  float getFireDelayAfterJump() const;
  // FUNCTION: BF2 0x00551070
  void* getOccupingPlayer() const;
  // FUNCTION: BF2 0x005510a0
  void* getUsedVehicle() const;
  // FUNCTION: BF2 0x00551130
  int getRef();
  // FUNCTION: BF2 0x00551700
  void releaseAnimation();
  // FUNCTION: BF2 0x005517b0
  void resetHeadMovements();
  // FUNCTION: BF2 0x005517e0
  void disableInverseKinematic(bool);
  // FUNCTION: BF2 0x00551810
  void wakeUpRagdoll();
  // FUNCTION: BF2 0x00551ee0
  void applyExplosionForce(Vec3 const &);
  // FUNCTION: BF2 0x005535c0
  void dropWeaponFx();
  // FUNCTION: BF2 0x005535d0
  void dropHelmetFx();
  // FUNCTION: BF2 0x00556b80
  void setCharacterMode(world::Soldier_CharacterMode);

  unsigned char m_unk_0x1;  // +0x1, inferred, seen in 1 method(s)
  unsigned int m_unk_0x8;  // +0x8, inferred, seen in 1 method(s)
  void* m_unk_0x28;  // +0x28, inferred, seen in 1 method(s)
  unsigned int m_unk_0x4A;  // +0x4A, inferred, seen in 3 method(s)
  unsigned int m_unk_0x4E;  // +0x4E, inferred, seen in 2 method(s)
  void* m_unk_0x50;  // +0x50, inferred, seen in 2 method(s)
  void* m_unk_0x60;  // +0x60, inferred, seen in 1 method(s)
  unsigned int m_unk_0x65;  // +0x65, inferred, seen in 2 method(s)
  unsigned char m_unk_0x6A;  // +0x6A, inferred, seen in 4 method(s)
  unsigned int m_unk_0x6B;  // +0x6B, inferred, seen in 3 method(s)
  void* m_unk_0x70;  // +0x70, inferred, seen in 1 method(s)
  unsigned int m_unk_0x75;  // +0x75, inferred, seen in 3 method(s)
  unsigned int m_unk_0x76;  // +0x76, inferred, seen in 3 method(s)
  unsigned int m_unk_0x77;  // +0x77, inferred, seen in 1 method(s)
  void* m_unk_0x78;  // +0x78, inferred, seen in 2 method(s)
  unsigned int m_unk_0x79;  // +0x79, inferred, seen in 5 method(s)
  unsigned int m_unk_0x7A;  // +0x7A, inferred, seen in 2 method(s)
  unsigned int m_unk_0x7B;  // +0x7B, inferred, seen in 2 method(s)
  unsigned int m_unk_0x7C;  // +0x7C, inferred, seen in 1 method(s)
  unsigned int m_unk_0x7F;  // +0x7F, inferred, seen in 3 method(s)
  unsigned int m_unk_0x80;  // +0x80, inferred, seen in 2 method(s)
  unsigned int m_unk_0x81;  // +0x81, inferred, seen in 1 method(s)
  unsigned int m_unk_0x82;  // +0x82, inferred, seen in 1 method(s)
  unsigned int m_unk_0x83;  // +0x83, inferred, seen in 5 method(s)
  unsigned int m_unk_0x84;  // +0x84, inferred, seen in 5 method(s)
  unsigned int m_unk_0x8B;  // +0x8B, inferred, seen in 1 method(s)
  unsigned int m_unk_0x8C;  // +0x8C, inferred, seen in 1 method(s)
  unsigned char m_unk_0x8D;  // +0x8D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x8E;  // +0x8E, inferred, seen in 2 method(s)
  unsigned int m_unk_0x8F;  // +0x8F, inferred, seen in 3 method(s)
  unsigned int m_unk_0x90;  // +0x90, inferred, seen in 5 method(s)
  unsigned int m_unk_0x91;  // +0x91, inferred, seen in 4 method(s)
  unsigned int m_unk_0x92;  // +0x92, inferred, seen in 2 method(s)
  unsigned int m_unk_0x93;  // +0x93, inferred, seen in 2 method(s)
  unsigned char m_unk_0x94;  // +0x94, inferred, seen in 2 method(s)
  char m_unk_0x96;  // +0x96, inferred, seen in 2 method(s)
  unsigned int m_unk_0x97;  // +0x97, inferred, seen in 3 method(s)
  unsigned int m_unk_0x98;  // +0x98, inferred, seen in 2 method(s)
  unsigned int m_unk_0x99;  // +0x99, inferred, seen in 2 method(s)
  unsigned int m_unk_0x9D;  // +0x9D, inferred, seen in 1 method(s)
  unsigned int m_unk_0x9E;  // +0x9E, inferred, seen in 3 method(s)
  unsigned char m_unk_0xA3;  // +0xA3, inferred, seen in 2 method(s)
  unsigned int m_unk_0xA4;  // +0xA4, inferred, seen in 3 method(s)
  unsigned int m_unk_0xA5;  // +0xA5, inferred, seen in 3 method(s)
  unsigned int m_unk_0xA6;  // +0xA6, inferred, seen in 3 method(s)
  unsigned int m_unk_0xA7;  // +0xA7, inferred, seen in 3 method(s)
  unsigned int m_unk_0xA8;  // +0xA8, inferred, seen in 2 method(s)
  unsigned int m_unk_0xAD;  // +0xAD, inferred, seen in 2 method(s)
  unsigned char m_unk_0xB0;  // +0xB0, inferred, seen in 2 method(s)
  unsigned char m_unk_0xB1;  // +0xB1, inferred, seen in 2 method(s)
  unsigned char m_unk_0xB2;  // +0xB2, inferred, seen in 4 method(s)
  unsigned int m_unk_0xB3;  // +0xB3, inferred, seen in 1 method(s)
  unsigned int m_unk_0xB4;  // +0xB4, inferred, seen in 2 method(s)
  unsigned int m_unk_0xB5;  // +0xB5, inferred, seen in 2 method(s)
  unsigned int m_unk_0xB6;  // +0xB6, inferred, seen in 3 method(s)
  unsigned int m_unk_0xB7;  // +0xB7, inferred, seen in 2 method(s)
  int m_unk_0x250;  // +0x250, inferred, seen in 2 method(s)
  ItemContainer* m_itemContainer;  // +0x258, corroborated (local type)
  void* m_unk_0x260;  // +0x260, inferred, seen in 1 method(s)
  void* m_unk_0x298;  // +0x298, inferred, seen in 1 method(s)
  void* m_unk_0x2A0;  // +0x2A0, inferred, seen in 1 method(s)
  void* m_unk_0x2B0;  // +0x2B0, inferred, seen in 1 method(s)
  void* m_unk_0x2B8;  // +0x2B8, inferred, seen in 1 method(s)
  void* m_unk_0x2F8;  // +0x2F8, inferred, seen in 1 method(s)
  void* m_unk_0x310;  // +0x310, inferred, seen in 1 method(s)
  void* m_unk_0x318;  // +0x318, inferred, seen in 1 method(s)
  SoldierCamera* m_soldierCamera;  // +0x338, corroborated (local type)
  unsigned char m_unk_0x350;  // +0x350, inferred, seen in 1 method(s)
  unsigned int m_unk_0x354;  // +0x354, inferred, seen in 3 method(s)
  unsigned int m_unk_0x358;  // +0x358, inferred, seen in 1 method(s)
  void* m_unk_0x360;  // +0x360, inferred, seen in 2 method(s)
  Inner* m_inner;  // +0x370, corroborated (local type)
  void* m_unk_0x380;  // +0x380, inferred, seen in 1 method(s)
  void* m_unk_0x388;  // +0x388, inferred, seen in 1 method(s)
  void* m_unk_0x398;  // +0x398, inferred, seen in 4 method(s)
  unsigned int m_unk_0x3A8;  // +0x3A8, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3AC;  // +0x3AC, inferred, seen in 4 method(s)
  unsigned int m_unk_0x3B0;  // +0x3B0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3B4;  // +0x3B4, inferred, seen in 3 method(s)
  unsigned int m_unk_0x3BC;  // +0x3BC, inferred, seen in 5 method(s)
  unsigned int m_unk_0x3C4;  // +0x3C4, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3C8;  // +0x3C8, inferred, seen in 5 method(s)
  unsigned int m_unk_0x3CC;  // +0x3CC, inferred, seen in 9 method(s)
  float m_3d0;  // +0x3D0, corroborated (local type)
  unsigned int m_unk_0x3D4;  // +0x3D4, inferred, seen in 2 method(s)
  float m_3d8;  // +0x3D8, corroborated (local type)
  unsigned int m_unk_0x3DC;  // +0x3DC, inferred, seen in 2 method(s)
  unsigned int m_unk_0x3E4;  // +0x3E4, inferred, seen in 2 method(s)
  void* m_unk_0x3E8;  // +0x3E8, inferred, seen in 1 method(s)
  void* m_unk_0x3F0;  // +0x3F0, inferred, seen in 8 method(s)
  unsigned int m_unk_0x3F8;  // +0x3F8, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3FC;  // +0x3FC, inferred, seen in 3 method(s)
  unsigned int m_unk_0x400;  // +0x400, inferred, seen in 2 method(s)
  unsigned int m_unk_0x404;  // +0x404, inferred, seen in 2 method(s)
  unsigned int m_unk_0x408;  // +0x408, inferred, seen in 2 method(s)
  unsigned int m_unk_0x40C;  // +0x40C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x410;  // +0x410, inferred, seen in 2 method(s)
  unsigned int m_unk_0x414;  // +0x414, inferred, seen in 2 method(s)
  float m_unk_0x418;  // +0x418, inferred, seen in 2 method(s)
  unsigned int m_unk_0x41C;  // +0x41C, inferred, seen in 7 method(s)
  float m_unk_0x420;  // +0x420, inferred, seen in 2 method(s)
  unsigned int m_unk_0x424;  // +0x424, inferred, seen in 3 method(s)
  void* m_unk_0x428;  // +0x428, inferred, seen in 2 method(s)
  void* m_unk_0x430;  // +0x430, inferred, seen in 2 method(s)
  void* m_unk_0x438;  // +0x438, inferred, seen in 3 method(s)
  void* m_unk_0x440;  // +0x440, inferred, seen in 2 method(s)
  void* m_unk_0x448;  // +0x448, inferred, seen in 2 method(s)
  void* m_unk_0x450;  // +0x450, inferred, seen in 2 method(s)
  int m_unk_0x45C;  // +0x45C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x464;  // +0x464, inferred, seen in 1 method(s)
  unsigned char m_unk_0x468;  // +0x468, inferred, seen in 1 method(s)
  char m_unk_0x469;  // +0x469, inferred, seen in 3 method(s)
  unsigned char m_unk_0x46A;  // +0x46A, inferred, seen in 4 method(s)
  unsigned char m_unk_0x46B;  // +0x46B, inferred, seen in 3 method(s)
  unsigned char m_unk_0x46C;  // +0x46C, inferred, seen in 5 method(s)
  int m_unk_0x470;  // +0x470, inferred, seen in 4 method(s)
  unsigned int m_unk_0x474;  // +0x474, inferred, seen in 3 method(s)
  unsigned int m_unk_0x47C;  // +0x47C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x484;  // +0x484, inferred, seen in 4 method(s)
  unsigned char m_unk_0x48C;  // +0x48C, inferred, seen in 6 method(s)
  unsigned int m_unk_0x494;  // +0x494, inferred, seen in 2 method(s)
  unsigned int m_unk_0x49C;  // +0x49C, inferred, seen in 2 method(s)
  void* m_unk_0x4A8;  // +0x4A8, inferred, seen in 3 method(s)
  char m_unk_0x4B0;  // +0x4B0, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4B4;  // +0x4B4, inferred, seen in 4 method(s)
  unsigned int m_unk_0x4BC;  // +0x4BC, inferred, seen in 1 method(s)
  unsigned int m_unk_0x4C0;  // +0x4C0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x4C4;  // +0x4C4, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4E8;  // +0x4E8, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4EC;  // +0x4EC, inferred, seen in 5 method(s)
  unsigned int m_unk_0x4F0;  // +0x4F0, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4F4;  // +0x4F4, inferred, seen in 3 method(s)
  unsigned int m_unk_0x510;  // +0x510, inferred, seen in 1 method(s)
  unsigned char m_unk_0x516;  // +0x516, inferred, seen in 2 method(s)
  char m_unk_0x519;  // +0x519, inferred, seen in 3 method(s)
  unsigned int m_unk_0x51C;  // +0x51C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x520;  // +0x520, inferred, seen in 1 method(s)
  unsigned int m_unk_0x524;  // +0x524, inferred, seen in 4 method(s)
  unsigned int m_unk_0x528;  // +0x528, inferred, seen in 1 method(s)
  unsigned int m_unk_0x52C;  // +0x52C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x530;  // +0x530, inferred, seen in 1 method(s)
  unsigned int m_unk_0x534;  // +0x534, inferred, seen in 3 method(s)
  unsigned int m_unk_0x53C;  // +0x53C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x540;  // +0x540, inferred, seen in 1 method(s)
  unsigned int m_unk_0x544;  // +0x544, inferred, seen in 1 method(s)
  unsigned int m_unk_0x548;  // +0x548, inferred, seen in 1 method(s)
  unsigned int m_unk_0x54C;  // +0x54C, inferred, seen in 1 method(s)
  unsigned int m_unk_0x550;  // +0x550, inferred, seen in 1 method(s)
  unsigned int m_unk_0x554;  // +0x554, inferred, seen in 3 method(s)
  unsigned int m_unk_0x558;  // +0x558, inferred, seen in 1 method(s)
  unsigned int m_unk_0x55C;  // +0x55C, inferred, seen in 1 method(s)
  unsigned int m_unk_0x560;  // +0x560, inferred, seen in 1 method(s)
  unsigned int m_unk_0x564;  // +0x564, inferred, seen in 1 method(s)
  unsigned int m_unk_0x568;  // +0x568, inferred, seen in 1 method(s)
  unsigned int m_unk_0x56C;  // +0x56C, inferred, seen in 1 method(s)
  unsigned int m_unk_0x570;  // +0x570, inferred, seen in 1 method(s)
  unsigned int m_unk_0x574;  // +0x574, inferred, seen in 2 method(s)
  unsigned int m_unk_0x578;  // +0x578, inferred, seen in 1 method(s)
  unsigned int m_unk_0x57C;  // +0x57C, inferred, seen in 3 method(s)
  unsigned char m_unk_0x581;  // +0x581, inferred, seen in 2 method(s)
  unsigned int m_unk_0x584;  // +0x584, inferred, seen in 2 method(s)
  unsigned char m_unk_0x589;  // +0x589, inferred, seen in 1 method(s)
  unsigned int m_unk_0x58C;  // +0x58C, inferred, seen in 1 method(s)
  unsigned char m_unk_0x591;  // +0x591, inferred, seen in 6 method(s)
  unsigned int m_unk_0x594;  // +0x594, inferred, seen in 3 method(s)
  unsigned char m_unk_0x59C;  // +0x59C, inferred, seen in 3 method(s)
  unsigned char m_unk_0x59D;  // +0x59D, inferred, seen in 3 method(s)
  unsigned int m_unk_0x5A0;  // +0x5A0, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5A4;  // +0x5A4, inferred, seen in 3 method(s)
  unsigned int m_unk_0x5A8;  // +0x5A8, inferred, seen in 1 method(s)
  unsigned int m_unk_0x5AC;  // +0x5AC, inferred, seen in 3 method(s)
  unsigned int m_unk_0x5B0;  // +0x5B0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x5B4;  // +0x5B4, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5B8;  // +0x5B8, inferred, seen in 2 method(s)
};
} } }
