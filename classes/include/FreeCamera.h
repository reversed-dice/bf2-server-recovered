#pragma once
#include "IPlayer.h"
namespace dice { namespace hfe { namespace world {
typedef void* __attribute__((may_alias)) voidp_ma_57f870;
namespace io { class PlayerInput; }
class IPlayer;
class IPlayerptr_int;
using io::PlayerInput;  // bare 'PlayerInput' resolves to the only class of this name in the binary
class FreeCamera {
public:
  // FUNCTION: BF2 0x0057ddc0
  void destroy(bool);
  // FUNCTION: BF2 0x0057e070
  void resetTraceCamera();
  // FUNCTION: BF2 0x0057e0b0
  void getActiveFOV() const;
  // FUNCTION: BF2 0x0057e140
  void enter(world::IPlayerptr_int&);
  // FUNCTION: BF2 0x0057e1f0
  void exit();
  // FUNCTION: BF2 0x0057e3b0
  void handlePlayerInputCVMTrace(world::IPlayer*, io::PlayerInput const &, float, unsigned, int);
  // FUNCTION: BF2 0x0057eae0
  void* getTraceObject();
  // FUNCTION: BF2 0x0057eb70
  void initNetworkableComp();
  // FUNCTION: BF2 0x0057f870
  void exitPlayer();
  // FUNCTION: BF2 0x00581900
  void queryInterface(unsigned, int) const;
  // FUNCTION: BF2 0x00581970
  void setInterpolatedMode();
  // FUNCTION: BF2 0x00581990
  int getViewMode() const;
  // FUNCTION: BF2 0x005819b0
  unsigned char isActive() const;
  // FUNCTION: BF2 0x005819d0
  void setIsActive(unsigned char);
  // FUNCTION: BF2 0x005819f0
  void setCameraId();
  // FUNCTION: BF2 0x00581a10
  unsigned int getCameraId();
  // FUNCTION: BF2 0x00581a30
  void onEnter();
  // FUNCTION: BF2 0x00581a50
  void onExit();
  // FUNCTION: BF2 0x00581a70
  void updateCameraView(bool);
  // FUNCTION: BF2 0x00581aa0
  void prevViewMode();
  // FUNCTION: BF2 0x00581ac0
  unsigned int isOccupied() const;
  // FUNCTION: BF2 0x00581ae0
  unsigned int getPcoId() const;
  // FUNCTION: BF2 0x00581b00
  void setPcoId();
  // FUNCTION: BF2 0x00581b20
  const char* getCameras();
  // FUNCTION: BF2 0x00581b40
  const char* getOwnCameras();
  // FUNCTION: BF2 0x00581b60
  void nextCamera();
  // FUNCTION: BF2 0x00581b80
  const char* getActiveCamera();
  // FUNCTION: BF2 0x00581ba0
  void setActiveCamera();
  // FUNCTION: BF2 0x00581bc0
  const char* getPcos();
  // FUNCTION: BF2 0x00581be0
  const char* getPcoPosId();
  // FUNCTION: BF2 0x00581c00
  void addWeapon();
  // FUNCTION: BF2 0x00581c20
  const char* getWeapons();
  // FUNCTION: BF2 0x00581c60
  unsigned int getActiveWeapon() const;
  // FUNCTION: BF2 0x00581c80
  void setActiveWeapon();
  // FUNCTION: BF2 0x00581c90
  void* getPrimWeaponIcons();
  // FUNCTION: BF2 0x00581ca0
  void* getSecWeaponIcons();
  // FUNCTION: BF2 0x00581cc0
  void toggleOnWeaponLock();
  // FUNCTION: BF2 0x00581cd0
  void getVehicleIcon();
  // FUNCTION: BF2 0x00581d00
  void addPlayerInputObject();
  // FUNCTION: BF2 0x00581d20
  void removePlayerInputObject();
  // FUNCTION: BF2 0x00581d30
  unsigned int getSubPos();
  // FUNCTION: BF2 0x00581d40
  unsigned int getSonarPos();
  // FUNCTION: BF2 0x00581d60
  unsigned int getArtPos();
  // FUNCTION: BF2 0x00581d80
  void setTraceObjectId(unsigned int);
  // FUNCTION: BF2 0x00581da0
  int getTraceObjectId();
  // FUNCTION: BF2 0x00581dc0
  void setExternCameraTrans();
  // FUNCTION: BF2 0x00581de0
  unsigned int getExternCameraTrans();
  // FUNCTION: BF2 0x00581e00
  void setTeam();
  // FUNCTION: BF2 0x00581e20
  unsigned int getTeam();
  // FUNCTION: BF2 0x00581e40
  void setDefaultTeam();
  // FUNCTION: BF2 0x00581e60
  unsigned int getToggleMouseLook();
  // FUNCTION: BF2 0x00581e80
  void setTimeToLiveUnused();
  // FUNCTION: BF2 0x00581ea0
  void setObjectSpawnerId();
  // FUNCTION: BF2 0x00581ec0
  unsigned int getObjectSpawnerId() const;
  // FUNCTION: BF2 0x00581ee0
  void setObjectSpawnerHolding();
  // FUNCTION: BF2 0x00581f00
  unsigned int getObjectSpawnerHolding() const;
  // FUNCTION: BF2 0x00581f20
  const char* getNameTagOffset();
  // FUNCTION: BF2 0x00581f40
  const char* getRidingWithOffset();
  // FUNCTION: BF2 0x00581f60
  float getRidingWithDistMod() const;
  // FUNCTION: BF2 0x00581f70
  void setMenuVisibleForTeam(unsigned, char);
  // FUNCTION: BF2 0x00581f80
  unsigned int getMenuVisibleForTeam();
  // FUNCTION: BF2 0x00581fc0
  const char* getLinkedPlayerControlObject();
  // FUNCTION: BF2 0x00581fe0
  void addVehicleMod();
  // FUNCTION: BF2 0x00582000
  void removeVehicleMod();
  // FUNCTION: BF2 0x00582020
  unsigned int getVehicleMod();
  // FUNCTION: BF2 0x00582040
  const char* getSoundFilter() const;
  // FUNCTION: BF2 0x00582060
  void handleExplosion(float explosionForce);
  // FUNCTION: BF2 0x00582080
  float getShakeFactor() const;
  // FUNCTION: BF2 0x005820a0
  unsigned int getIsSprinting() const;
  // FUNCTION: BF2 0x005820b0
  unsigned int getIsSprintingPossible() const;
  // FUNCTION: BF2 0x005820d0
  float getSprintStamina() const;
  // FUNCTION: BF2 0x005820f0
  void setSprintStamina(float stamina);
  // FUNCTION: BF2 0x00582110
  void setSprintStaminaDissipationFactor(float factor);
  // FUNCTION: BF2 0x00582130
  float getSprintFactor() const;
  // FUNCTION: BF2 0x00582150
  unsigned int getIsUnderwater() const;
  // FUNCTION: BF2 0x00582170
  float getNormalizedUnderwaterTime() const;
  // FUNCTION: BF2 0x00582180
  float getListenerObstruction() const;
  // FUNCTION: BF2 0x00582190
  void setListenerObstruction(float);
  // FUNCTION: BF2 0x005821b0
  void getStaticSunDirection() const;
  // FUNCTION: BF2 0x005821d0
  void getStaticSunColor() const;
  // FUNCTION: BF2 0x005821f0
  void getStaticSunDamageColor() const;
  // FUNCTION: BF2 0x00582210
  void getStaticSunAmbientColor() const;
  // FUNCTION: BF2 0x00582230
  unsigned int allowCameraModeCycle();
  // FUNCTION: BF2 0x00582410
  void* getOccupingPlayer() const;
  // FUNCTION: BF2 0x00582480
  int getRef();
  // FUNCTION: BF2 0x00582560
  unsigned int release();
  // FUNCTION: BF2 0x00582560
  virtual void slot00();
  // FUNCTION: BF2 0x00582560
  virtual void slot01();
  // FUNCTION: BF2 0x00582560
  virtual void slot02();
  // FUNCTION: BF2 0x00582560
  virtual void slot03();
  // FUNCTION: BF2 0x00582560
  virtual void slot04();
  // FUNCTION: BF2 0x00582560
  virtual void slot05();
  // FUNCTION: BF2 0x00582560
  virtual void slot30();
  // FUNCTION: BF2 0x005825d0
  void* getPlayer() const;
  // FUNCTION: BF2 0x00582610
  ~FreeCamera();

  unsigned char m_unk_0x1E;  // +0x1E, inferred, seen in 1 method(s)
  void* m_unk_0x28;  // +0x28, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4A;  // +0x4A, inferred, seen in 3 method(s)
  unsigned char m_unk_0x54;  // +0x54, inferred, seen in 2 method(s)
  unsigned int m_unk_0x56;  // +0x56, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5C;  // +0x5C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x64;  // +0x64, inferred, seen in 4 method(s)
  unsigned char m_unk_0x65;  // +0x65, inferred, seen in 2 method(s)
  unsigned int m_unk_0x66;  // +0x66, inferred, seen in 2 method(s)
  unsigned int m_unk_0x67;  // +0x67, inferred, seen in 2 method(s)
  unsigned int m_unk_0x68;  // +0x68, inferred, seen in 1 method(s)
  unsigned int m_unk_0x69;  // +0x69, inferred, seen in 1 method(s)
  unsigned int m_unk_0x6A;  // +0x6A, inferred, seen in 3 method(s)
  unsigned int m_unk_0x6B;  // +0x6B, inferred, seen in 1 method(s)
  unsigned int m_unk_0x6C;  // +0x6C, inferred, seen in 1 method(s)
  unsigned int m_unk_0x6D;  // +0x6D, inferred, seen in 1 method(s)
  unsigned int m_unk_0x6E;  // +0x6E, inferred, seen in 1 method(s)
  unsigned int m_unk_0x6F;  // +0x6F, inferred, seen in 3 method(s)
  unsigned char m_unk_0x70;  // +0x70, inferred, seen in 2 method(s)
  float m_unk_0x71;  // +0x71, inferred, seen in 3 method(s)
  unsigned int m_unk_0x72;  // +0x72, inferred, seen in 2 method(s)
  unsigned int m_unk_0x73;  // +0x73, inferred, seen in 2 method(s)
  unsigned int m_unk_0x75;  // +0x75, inferred, seen in 3 method(s)
  unsigned int m_unk_0x76;  // +0x76, inferred, seen in 1 method(s)
  unsigned int m_unk_0x77;  // +0x77, inferred, seen in 1 method(s)
  unsigned int m_unk_0x78;  // +0x78, inferred, seen in 1 method(s)
  unsigned int m_unk_0x79;  // +0x79, inferred, seen in 1 method(s)
  unsigned int m_unk_0x7A;  // +0x7A, inferred, seen in 3 method(s)
  unsigned int m_unk_0x7B;  // +0x7B, inferred, seen in 1 method(s)
  unsigned int m_unk_0x7C;  // +0x7C, inferred, seen in 1 method(s)
  unsigned int m_unk_0x7D;  // +0x7D, inferred, seen in 3 method(s)
  unsigned int m_unk_0x7E;  // +0x7E, inferred, seen in 3 method(s)
  unsigned int m_unk_0x7F;  // +0x7F, inferred, seen in 2 method(s)
  unsigned int m_unk_0x80;  // +0x80, inferred, seen in 2 method(s)
  unsigned int m_unk_0x81;  // +0x81, inferred, seen in 3 method(s)
  unsigned int m_unk_0x82;  // +0x82, inferred, seen in 3 method(s)
  unsigned int m_unk_0x83;  // +0x83, inferred, seen in 2 method(s)
  unsigned int m_unk_0x84;  // +0x84, inferred, seen in 2 method(s)
  unsigned char m_unk_0x86;  // +0x86, inferred, seen in 2 method(s)
  int m_unk_0x250;  // +0x250, inferred, seen in 2 method(s)
  void* m_unk_0x298;  // +0x298, inferred, seen in 3 method(s)
  unsigned char m_unk_0x2A0;  // +0x2A0, inferred, seen in 2 method(s)
  int m_unk_0x320;  // +0x320, inferred, seen in 2 method(s)
  unsigned int m_unk_0x324;  // +0x324, inferred, seen in 4 method(s)
  unsigned char m_unk_0x328;  // +0x328, inferred, seen in 1 method(s)
  float m_ridingWithDistMod;  // +0x32C, corroborated (local type)
  unsigned int m_unk_0x334;  // +0x334, inferred, seen in 2 method(s)
  int m_unk_0x338;  // +0x338, inferred, seen in 3 method(s)
  unsigned int m_unk_0x33C;  // +0x33C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x344;  // +0x344, inferred, seen in 1 method(s)
  unsigned int m_unk_0x34C;  // +0x34C, inferred, seen in 1 method(s)
  unsigned int m_unk_0x354;  // +0x354, inferred, seen in 1 method(s)
  unsigned int m_unk_0x35C;  // +0x35C, inferred, seen in 1 method(s)
  unsigned int m_unk_0x364;  // +0x364, inferred, seen in 3 method(s)
  unsigned int m_unk_0x36C;  // +0x36C, inferred, seen in 1 method(s)
  unsigned int m_unk_0x374;  // +0x374, inferred, seen in 1 method(s)
  unsigned int m_unk_0x37C;  // +0x37C, inferred, seen in 5 method(s)
  unsigned char m_unk_0x380;  // +0x380, inferred, seen in 1 method(s)
  float m_unk_0x384;  // +0x384, inferred, seen in 3 method(s)
  float m_unk_0x38C;  // +0x38C, inferred, seen in 3 method(s)
  unsigned char m_unk_0x394;  // +0x394, inferred, seen in 2 method(s)
  unsigned int m_unk_0x3AC;  // +0x3AC, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3B4;  // +0x3B4, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3BC;  // +0x3BC, inferred, seen in 3 method(s)
  unsigned int m_unk_0x3C4;  // +0x3C4, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3CC;  // +0x3CC, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3D4;  // +0x3D4, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3DC;  // +0x3DC, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3E4;  // +0x3E4, inferred, seen in 3 method(s)
  unsigned int m_unk_0x3EC;  // +0x3EC, inferred, seen in 3 method(s)
  unsigned int m_unk_0x3F4;  // +0x3F4, inferred, seen in 3 method(s)
  unsigned int m_unk_0x3F8;  // +0x3F8, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3FC;  // +0x3FC, inferred, seen in 3 method(s)
  unsigned int m_unk_0x400;  // +0x400, inferred, seen in 1 method(s)
  unsigned int m_unk_0x404;  // +0x404, inferred, seen in 2 method(s)
  unsigned int m_unk_0x40C;  // +0x40C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x414;  // +0x414, inferred, seen in 3 method(s)
  unsigned int m_unk_0x41C;  // +0x41C, inferred, seen in 2 method(s)
};
} } }
