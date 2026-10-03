#pragma once
#include <string>
namespace dice { namespace hfe { namespace world {
class CameraShakeTriggers;
class ToolTipType;
class Vec3;
class VehicleCategory;
class VehicleType;
class PlayerControlObjectTemplate {
public:
  // FUNCTION: BF2 0x00521480
  void setPcoId(unsigned int);
  // FUNCTION: BF2 0x005214a0
  int getPcoId();
  // FUNCTION: BF2 0x005214c0
  void setPcoFlags(int);
  // FUNCTION: BF2 0x005214e0
  int getPcoFlags() const;
  // FUNCTION: BF2 0x00521500
  void setVehicleCategory(world::VehicleCategory);
  // FUNCTION: BF2 0x00521520
  int getVehicleCategory() const;
  // FUNCTION: BF2 0x00521540
  void setControlsCategory(world::VehicleCategory);
  // FUNCTION: BF2 0x00521560
  int getControlsCategory() const;
  // FUNCTION: BF2 0x00521580
  void setVehicleType(world::VehicleType);
  // FUNCTION: BF2 0x005215a0
  int getVehicleType();
  // FUNCTION: BF2 0x005215c0
  void setToolTipType(world::ToolTipType);
  // FUNCTION: BF2 0x005215e0
  int getToolTipType();
  // FUNCTION: BF2 0x00521600
  void setArtPos(unsigned char);
  // FUNCTION: BF2 0x00521620
  unsigned char getArtPos();
  // FUNCTION: BF2 0x00521640
  void setDirBarXScale(float);
  // FUNCTION: BF2 0x00521660
  float getDirBarXScale() const;
  // FUNCTION: BF2 0x00521680
  void setDirBarYScaleAbove(float);
  // FUNCTION: BF2 0x005216a0
  float getDirBarYScaleAbove() const;
  // FUNCTION: BF2 0x005216c0
  void setDirBarYScaleBelow(float);
  // FUNCTION: BF2 0x005216e0
  float getDirBarYScaleBelow() const;
  // FUNCTION: BF2 0x00521700
  void setDirBarRotate(float);
  // FUNCTION: BF2 0x00521720
  float getDirBarRotate() const;
  // FUNCTION: BF2 0x00521740
  void setDirBarYScaleMin(float);
  // FUNCTION: BF2 0x00521760
  float getDirBarYScaleMin() const;
  // FUNCTION: BF2 0x00521780
  void setDirBarYScaleMax(float);
  // FUNCTION: BF2 0x005217a0
  float getDirBarYScaleMax();
  // FUNCTION: BF2 0x005217c0
  const char* getNameTagOffset();
  // FUNCTION: BF2 0x005217e0
  const char* getRidingWithOffset();
  // FUNCTION: BF2 0x00521800
  void setRidingWithDistMod(float);
  // FUNCTION: BF2 0x00521820
  float getRidingWithDistMod() const;
  // FUNCTION: BF2 0x00521840
  void setVehicleCameraShake(world::CameraShakeTriggers);
  // FUNCTION: BF2 0x00521860
  int getVehicleCameraShake();
  // FUNCTION: BF2 0x00521880
  void setVehicleFov(float fov);
  // FUNCTION: BF2 0x005218a0
  float getVehicleFov() const;
  // FUNCTION: BF2 0x005218c0
  void setSeatLeftRotationLimit(float);
  // FUNCTION: BF2 0x005218e0
  float getSeatLeftRotationLimit() const;
  // FUNCTION: BF2 0x00521900
  void setSeatRightRotationLimit(float);
  // FUNCTION: BF2 0x00521920
  float getSeatRightRotationLimit() const;
  // FUNCTION: BF2 0x00521940
  const char* getSeatParent() const;
  // FUNCTION: BF2 0x00521960
  const char* getSeatPosition() const;
  // FUNCTION: BF2 0x00521980
  const char* getSeatTransformation() const;
  // FUNCTION: BF2 0x005219a0
  float getListenerObstruction() const;
  // FUNCTION: BF2 0x00521a10
  void setMaintainCameraOnExit(bool);
  // FUNCTION: BF2 0x00521a30
  unsigned char getMaintainCameraOnExit();
  // FUNCTION: BF2 0x00521a50
  void setMaintainCameraOnEnter(bool);
  // FUNCTION: BF2 0x00521a70
  unsigned char getMaintainCameraOnEnter();
  // FUNCTION: BF2 0x00522040
  void setSoldierExitLocation(Vec3 const &, Vec3 const &);
  // FUNCTION: BF2 0x00522090
  void setSoldierExitPosition(Vec3 const &);
  // FUNCTION: BF2 0x005220c0
  void setSoldierExitRotation(Vec3 const &);
  // FUNCTION: BF2 0x005220f0
  void setNameTagOffset(Vec3);
  // FUNCTION: BF2 0x00522120
  void setRidingWithOffset(Vec3);
  // FUNCTION: BF2 0x00522e20
  void setSeatParent(std::string const &);
  // FUNCTION: BF2 0x005363e0
  unsigned int release();
  // FUNCTION: BF2 0x005363e0
  virtual void slot00();
  // FUNCTION: BF2 0x005363e0
  virtual void slot01();
  // FUNCTION: BF2 0x005363e0
  virtual void slot02();
  // FUNCTION: BF2 0x005363e0
  virtual void slot03();
  // FUNCTION: BF2 0x005363e0
  virtual void slot04();
  // FUNCTION: BF2 0x005363e0
  virtual void slot05();
  // FUNCTION: BF2 0x005363e0
  virtual void slot30();
  // FUNCTION: BF2 0x00536450
  void queryInterface(unsigned, int) const;
  // FUNCTION: BF2 0x00536720
  int getRef();
  // FUNCTION: BF2 0x005368b0
  void* queryImplementation(unsigned int id);
  // FUNCTION: BF2 0x00536b60
  unsigned int getClassID() const;
  // FUNCTION: BF2 0x00536b70
  void getSeatAnimationSystem();
  // FUNCTION: BF2 0x00536b90
  const char* getSoundFilter() const;
  // FUNCTION: BF2 0x00536ba0
  unsigned char getNeverDrawAs1p() const;
  // FUNCTION: BF2 0x00536bb0
  void setNeverDrawAs1p(bool);
  // FUNCTION: BF2 0x00536e00
  void setSeatPosition(Vec3 const &);
  // FUNCTION: BF2 0x00537880
  void watchesTargetObjectType(int) const;
  // FUNCTION: BF2 0x005378c0
  void addTargetObjectTypeToWatch(int);
  // FUNCTION: BF2 0x00539700
  void setSoundFilter(std::string const &);
  // FUNCTION: BF2 0x0053ad40
  void* createObject() const;
  // FUNCTION: BF2 0x0053be40
  void templateInitialize();

  unsigned int m_unk_0x1;  // +0x1, inferred, seen in 2 method(s)
  unsigned int m_unk_0x6;  // +0x6, inferred, seen in 2 method(s)
  unsigned int m_unk_0xA;  // +0xA, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1C;  // +0x1C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x40;  // +0x40, inferred, seen in 3 method(s)
  unsigned int m_unk_0x44;  // +0x44, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4C;  // +0x4C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4D;  // +0x4D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4E;  // +0x4E, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4F;  // +0x4F, inferred, seen in 2 method(s)
  unsigned int m_unk_0x50;  // +0x50, inferred, seen in 2 method(s)
  unsigned int m_unk_0x51;  // +0x51, inferred, seen in 2 method(s)
  unsigned int m_unk_0x52;  // +0x52, inferred, seen in 2 method(s)
  unsigned char m_unk_0x53;  // +0x53, inferred, seen in 2 method(s)
  unsigned int m_unk_0x54;  // +0x54, inferred, seen in 4 method(s)
  unsigned int m_unk_0x55;  // +0x55, inferred, seen in 2 method(s)
  unsigned int m_unk_0x56;  // +0x56, inferred, seen in 2 method(s)
  unsigned int m_unk_0x57;  // +0x57, inferred, seen in 2 method(s)
  unsigned int m_unk_0x58;  // +0x58, inferred, seen in 2 method(s)
  unsigned int m_unk_0x59;  // +0x59, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5A;  // +0x5A, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5B;  // +0x5B, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5C;  // +0x5C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5D;  // +0x5D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x61;  // +0x61, inferred, seen in 2 method(s)
  unsigned int m_unk_0x62;  // +0x62, inferred, seen in 2 method(s)
  unsigned int m_unk_0x66;  // +0x66, inferred, seen in 2 method(s)
  unsigned int m_unk_0x67;  // +0x67, inferred, seen in 2 method(s)
  unsigned int m_unk_0x68;  // +0x68, inferred, seen in 2 method(s)
  unsigned int m_unk_0x69;  // +0x69, inferred, seen in 2 method(s)
  unsigned int m_unk_0x6A;  // +0x6A, inferred, seen in 2 method(s)
  unsigned char m_unk_0x6B;  // +0x6B, inferred, seen in 2 method(s)
  unsigned int m_unk_0x6C;  // +0x6C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x6F;  // +0x6F, inferred, seen in 2 method(s)
  unsigned int m_unk_0x74;  // +0x74, inferred, seen in 2 method(s)
  unsigned int m_unk_0x75;  // +0x75, inferred, seen in 2 method(s)
  unsigned int m_unk_0x76;  // +0x76, inferred, seen in 2 method(s)
  unsigned int m_unk_0x77;  // +0x77, inferred, seen in 2 method(s)
  unsigned int m_unk_0x78;  // +0x78, inferred, seen in 2 method(s)
  unsigned int m_unk_0x79;  // +0x79, inferred, seen in 2 method(s)
  unsigned int m_unk_0x7A;  // +0x7A, inferred, seen in 2 method(s)
  int m_unk_0x200;  // +0x200, inferred, seen in 2 method(s)
  void* m_unk_0x208;  // +0x208, inferred, seen in 1 method(s)
  unsigned int m_unk_0x210;  // +0x210, inferred, seen in 2 method(s)
  unsigned int m_unk_0x214;  // +0x214, inferred, seen in 2 method(s)
  unsigned int m_unk_0x218;  // +0x218, inferred, seen in 2 method(s)
  unsigned int m_unk_0x21C;  // +0x21C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x220;  // +0x220, inferred, seen in 2 method(s)
  unsigned int m_unk_0x224;  // +0x224, inferred, seen in 2 method(s)
  unsigned int m_unk_0x228;  // +0x228, inferred, seen in 2 method(s)
  unsigned int m_unk_0x22C;  // +0x22C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x230;  // +0x230, inferred, seen in 2 method(s)
  unsigned int m_unk_0x234;  // +0x234, inferred, seen in 2 method(s)
  unsigned int m_unk_0x238;  // +0x238, inferred, seen in 2 method(s)
  unsigned int m_unk_0x23C;  // +0x23C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x240;  // +0x240, inferred, seen in 4 method(s)
  unsigned int m_unk_0x244;  // +0x244, inferred, seen in 4 method(s)
  unsigned int m_unk_0x248;  // +0x248, inferred, seen in 4 method(s)
  unsigned int m_unk_0x24C;  // +0x24C, inferred, seen in 2 method(s)
  void* m_unk_0x250;  // +0x250, inferred, seen in 2 method(s)
  unsigned int m_unk_0x258;  // +0x258, inferred, seen in 2 method(s)
  float m_seatRightRotationLimit;  // +0x25C, corroborated (local type)
  float m_unk_0x260;  // +0x260, inferred, seen in 3 method(s)
  unsigned int m_unk_0x264;  // +0x264, inferred, seen in 5 method(s)
  float m_unk_0x268;  // +0x268, inferred, seen in 3 method(s)
  unsigned int m_unk_0x26C;  // +0x26C, inferred, seen in 5 method(s)
  float m_unk_0x270;  // +0x270, inferred, seen in 3 method(s)
  unsigned int m_unk_0x274;  // +0x274, inferred, seen in 5 method(s)
  unsigned int m_unk_0x278;  // +0x278, inferred, seen in 1 method(s)
  unsigned int m_unk_0x27C;  // +0x27C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x280;  // +0x280, inferred, seen in 1 method(s)
  unsigned int m_unk_0x284;  // +0x284, inferred, seen in 3 method(s)
  unsigned int m_unk_0x288;  // +0x288, inferred, seen in 1 method(s)
  unsigned int m_unk_0x28C;  // +0x28C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x290;  // +0x290, inferred, seen in 1 method(s)
  unsigned int m_unk_0x294;  // +0x294, inferred, seen in 2 method(s)
  char m_unk_0x298;  // +0x298, inferred, seen in 1 method(s)
  unsigned char m_unk_0x299;  // +0x299, inferred, seen in 3 method(s)
  unsigned char m_unk_0x29A;  // +0x29A, inferred, seen in 3 method(s)
  unsigned char m_unk_0x29B;  // +0x29B, inferred, seen in 3 method(s)
  float m_unk_0x29C;  // +0x29C, inferred, seen in 3 method(s)
  float m_unk_0x2A0;  // +0x2A0, inferred, seen in 1 method(s)
  float m_unk_0x2A4;  // +0x2A4, inferred, seen in 3 method(s)
  unsigned int m_unk_0x2AC;  // +0x2AC, inferred, seen in 3 method(s)
  int m_unk_0x2B0;  // +0x2B0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x2B4;  // +0x2B4, inferred, seen in 3 method(s)
  int m_unk_0x2B8;  // +0x2B8, inferred, seen in 1 method(s)
  unsigned int m_unk_0x2BC;  // +0x2BC, inferred, seen in 3 method(s)
  float m_unk_0x2C0;  // +0x2C0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x2C4;  // +0x2C4, inferred, seen in 3 method(s)
  float m_unk_0x2C8;  // +0x2C8, inferred, seen in 1 method(s)
  unsigned int m_unk_0x2CC;  // +0x2CC, inferred, seen in 3 method(s)
  float m_unk_0x2D0;  // +0x2D0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x2D4;  // +0x2D4, inferred, seen in 3 method(s)
  float m_unk_0x2D8;  // +0x2D8, inferred, seen in 1 method(s)
  unsigned int m_unk_0x2DC;  // +0x2DC, inferred, seen in 3 method(s)
  float m_unk_0x2E0;  // +0x2E0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x2E4;  // +0x2E4, inferred, seen in 5 method(s)
  unsigned int m_unk_0x2E8;  // +0x2E8, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2EC;  // +0x2EC, inferred, seen in 2 method(s)
  unsigned int m_unk_0x304;  // +0x304, inferred, seen in 5 method(s)
  unsigned int m_unk_0x308;  // +0x308, inferred, seen in 3 method(s)
  unsigned int m_unk_0x30C;  // +0x30C, inferred, seen in 5 method(s)
  unsigned int m_unk_0x310;  // +0x310, inferred, seen in 2 method(s)
  unsigned char m_unk_0x314;  // +0x314, inferred, seen in 5 method(s)
  void* m_unk_0x318;  // +0x318, inferred, seen in 1 method(s)
  void* m_unk_0x320;  // +0x320, inferred, seen in 2 method(s)
  void* m_unk_0x328;  // +0x328, inferred, seen in 1 method(s)
  unsigned int m_unk_0x330;  // +0x330, inferred, seen in 1 method(s)
  unsigned int m_unk_0x334;  // +0x334, inferred, seen in 3 method(s)
  unsigned int m_unk_0x338;  // +0x338, inferred, seen in 1 method(s)
  unsigned int m_unk_0x33C;  // +0x33C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x340;  // +0x340, inferred, seen in 1 method(s)
  unsigned int m_unk_0x344;  // +0x344, inferred, seen in 3 method(s)
  unsigned char m_unk_0x34C;  // +0x34C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x350;  // +0x350, inferred, seen in 2 method(s)
  float m_vehicleFov;  // +0x354, corroborated (local type)
  char m_unk_0x358;  // +0x358, inferred, seen in 1 method(s)
  unsigned int m_unk_0x35C;  // +0x35C, inferred, seen in 3 method(s)
  int m_unk_0x360;  // +0x360, inferred, seen in 1 method(s)
  void* m_unk_0x368;  // +0x368, inferred, seen in 1 method(s)
  void* m_unk_0x388;  // +0x388, inferred, seen in 1 method(s)
  float m_unk_0x3A0;  // +0x3A0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3A4;  // +0x3A4, inferred, seen in 3 method(s)
  float m_unk_0x3A8;  // +0x3A8, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3AC;  // +0x3AC, inferred, seen in 3 method(s)
  float m_unk_0x3B0;  // +0x3B0, inferred, seen in 1 method(s)
  unsigned char m_unk_0x3B4;  // +0x3B4, inferred, seen in 3 method(s)
  unsigned char m_unk_0x3B5;  // +0x3B5, inferred, seen in 3 method(s)
  unsigned char m_unk_0x3B6;  // +0x3B6, inferred, seen in 3 method(s)
  int m_unk_0x3B8;  // +0x3B8, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3BC;  // +0x3BC, inferred, seen in 4 method(s)
  float m_unk_0x3C0;  // +0x3C0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3C4;  // +0x3C4, inferred, seen in 3 method(s)
  int m_unk_0x3C8;  // +0x3C8, inferred, seen in 1 method(s)
  unsigned char m_unk_0x3CC;  // +0x3CC, inferred, seen in 5 method(s)
  unsigned char m_unk_0x3CD;  // +0x3CD, inferred, seen in 5 method(s)
  unsigned char m_unk_0x3CE;  // +0x3CE, inferred, seen in 5 method(s)
  unsigned char m_unk_0x3CF;  // +0x3CF, inferred, seen in 2 method(s)
  float m_unk_0x3D0;  // +0x3D0, inferred, seen in 1 method(s)
};
} } }
