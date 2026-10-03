#pragma once
#include <string>
namespace dice { namespace hfe { namespace world {
class IObject;
class IObjectTemplate;
class Vec2;
class VehicleHudCompTemplate_getHudName;
class VehicleHudCompTemplate_getHudSid;
class VehicleHudCompTemplate_getInjurySound;
class VehicleHudCompTemplate_getMiniMapIcon;
class VehicleHudCompTemplate_getMiniMapIconLeaderSize;
class VehicleHudCompTemplate_getPantingSound;
class VehicleHudCompTemplate_getSpottedIcon;
class VehicleHudCompTemplate_getTypeIcon;
class VehicleHudCompTemplate {
public:
  // FUNCTION: BF2 0x005bf9f0
  void* createComponent();
  // FUNCTION: BF2 0x005bff90
  void setTypeIcon(std::string name);
  // FUNCTION: BF2 0x005c0010
  void setMiniMapIcon(std::string name);
  // FUNCTION: BF2 0x005c0230
  void setSpottedIcon(std::string name);
  // FUNCTION: BF2 0x005c2340
  void release();
  // FUNCTION: BF2 0x005c2370
  void queryInterface(unsigned, int) const;
  // FUNCTION: BF2 0x005c23b0
  unsigned int getClassID() const;
  // FUNCTION: BF2 0x005c23c0
  unsigned int getInterfaceID();
  // FUNCTION: BF2 0x005c23d0
  void objectCreated(world::IObject*);
  // FUNCTION: BF2 0x005c23e0
  void objectDestroyed(world::IObject*);
  // FUNCTION: BF2 0x005c23f0
  void setTemplate(world::IObjectTemplate*);
  // FUNCTION: BF2 0x005c2400
  void* queryImplementation(unsigned, int);
  // FUNCTION: BF2 0x005c2440
  void setGuiIndex(int);
  // FUNCTION: BF2 0x005c2450
  unsigned int getGuiIndex();
  // FUNCTION: BF2 0x005c2460
  std::string VehicleHudCompTemplate_getHudName() const;
  // FUNCTION: BF2 0x005c2460
  void getHudName();
  // FUNCTION: BF2 0x005c2480
  std::string VehicleHudCompTemplate_getHudSid() const;
  // FUNCTION: BF2 0x005c2480
  void getHudSid();
  // FUNCTION: BF2 0x005c24a0
  void setShowCrossHair(bool);
  // FUNCTION: BF2 0x005c24b0
  bool getShowCrossHair();
  // FUNCTION: BF2 0x005c24c0
  void setUsePlayerIcon(bool);
  // FUNCTION: BF2 0x005c24d0
  bool getUsePlayerIcon();
  // FUNCTION: BF2 0x005c24e0
  void setUseChildHud(bool);
  // FUNCTION: BF2 0x005c24f0
  bool getUseChildHud();
  // FUNCTION: BF2 0x005c2500
  void setStandardHelpEnabled(bool);
  // FUNCTION: BF2 0x005c2510
  bool getStandardHelpEnabled();
  // FUNCTION: BF2 0x005c2520
  void setHasTurretIcon(bool);
  // FUNCTION: BF2 0x005c2530
  bool getHasTurretIcon();
  // FUNCTION: BF2 0x005c2540
  void setShowInfo(bool);
  // FUNCTION: BF2 0x005c2550
  bool getShowInfo();
  // FUNCTION: BF2 0x005c2560
  void setDisableOnSprint(bool);
  // FUNCTION: BF2 0x005c2570
  bool getDisableOnSprint();
  // FUNCTION: BF2 0x005c2580
  void setIsCoDriver(bool);
  // FUNCTION: BF2 0x005c2590
  bool getIsCoDriver();
  // FUNCTION: BF2 0x005c25a0
  std::string VehicleHudCompTemplate_getTypeIcon() const;
  // FUNCTION: BF2 0x005c25a0
  void getTypeIcon();
  // FUNCTION: BF2 0x005c25c0
  std::string VehicleHudCompTemplate_getMiniMapIcon() const;
  // FUNCTION: BF2 0x005c25c0
  void getMiniMapIcon();
  // FUNCTION: BF2 0x005c25e0
  void setMiniMapIconSize(int);
  // FUNCTION: BF2 0x005c25f0
  unsigned int getMiniMapIconSize();
  // FUNCTION: BF2 0x005c2600
  std::string VehicleHudCompTemplate_getMiniMapIconLeaderSize() const;
  // FUNCTION: BF2 0x005c2600
  void getMiniMapIconLeaderSize();
  // FUNCTION: BF2 0x005c2620
  std::string VehicleHudCompTemplate_getSpottedIcon() const;
  // FUNCTION: BF2 0x005c2620
  void getSpottedIcon();
  // FUNCTION: BF2 0x005c2640
  void setSpottedIconSize(int);
  // FUNCTION: BF2 0x005c2650
  unsigned int getSpottedIconSize();
  // FUNCTION: BF2 0x005c2660
  void setMaxClimbSpeed(int);
  // FUNCTION: BF2 0x005c2670
  unsigned int getMaxClimbSpeed();
  // FUNCTION: BF2 0x005c2680
  void setEnablePostProcessingOnGuiIndex(int);
  // FUNCTION: BF2 0x005c2690
  unsigned int getEnablePostProcessingOnGuiIndex();
  // FUNCTION: BF2 0x005c26a0
  void setVehicleType(int);
  // FUNCTION: BF2 0x005c26b0
  unsigned int getVehicleType();
  // FUNCTION: BF2 0x005c26c0
  void setUseSelectionIcons(bool);
  // FUNCTION: BF2 0x005c26d0
  bool getUseSelectionIcons();
  // FUNCTION: BF2 0x005c26e0
  void setDisplaySelectionOnEnter(bool);
  // FUNCTION: BF2 0x005c26f0
  bool getDisplaySelectionOnEnter();
  // FUNCTION: BF2 0x005c2700
  void setUseVehicleCommRose(bool);
  // FUNCTION: BF2 0x005c2710
  bool getUseVehicleCommRose();
  // FUNCTION: BF2 0x005c2720
  std::string VehicleHudCompTemplate_getPantingSound() const;
  // FUNCTION: BF2 0x005c2720
  void getPantingSound();
  // FUNCTION: BF2 0x005c2740
  std::string VehicleHudCompTemplate_getInjurySound() const;
  // FUNCTION: BF2 0x005c2740
  void getInjurySound();
  // FUNCTION: BF2 0x005c2760
  void setInjurySound(std::string);
  // FUNCTION: BF2 0x005c2770
  void setHudSid(std::string);
  // FUNCTION: BF2 0x005c27f0
  void getVehicleIconPos();
  // FUNCTION: BF2 0x005c2810
  void setVehicleIconPos(Vec2 const &);
  // FUNCTION: BF2 0x005c2860
  int getRef();
  // FUNCTION: BF2 0x005c2870
  void setHudName(std::string);
  // FUNCTION: BF2 0x005c28b0
  void setPantingSound(std::string);

  unsigned int m_unk_0x2;  // +0x2, inferred, seen in 3 method(s)
  unsigned int m_unk_0x5;  // +0x5, inferred, seen in 2 method(s)
  unsigned char m_unk_0xB;  // +0xB, inferred, seen in 2 method(s)
  unsigned char m_unk_0xC;  // +0xC, inferred, seen in 2 method(s)
  unsigned int m_unk_0x10;  // +0x10, inferred, seen in 4 method(s)
  unsigned int m_unk_0x11;  // +0x11, inferred, seen in 2 method(s)
  unsigned int m_unk_0x12;  // +0x12, inferred, seen in 2 method(s)
  unsigned int m_unk_0x13;  // +0x13, inferred, seen in 2 method(s)
  char m_14;  // +0x14, corroborated (local type)
  unsigned int m_unk_0x23;  // +0x23, inferred, seen in 2 method(s)
  unsigned int m_unk_0x24;  // +0x24, inferred, seen in 2 method(s)
  unsigned int m_unk_0x28;  // +0x28, inferred, seen in 1 method(s)
  void* m_unk_0x30;  // +0x30, inferred, seen in 1 method(s)
  void* m_unk_0x38;  // +0x38, inferred, seen in 1 method(s)
  void* m_unk_0x48;  // +0x48, inferred, seen in 1 method(s)
  void* m_unk_0x50;  // +0x50, inferred, seen in 1 method(s)
  unsigned char m_unk_0x58;  // +0x58, inferred, seen in 3 method(s)
  unsigned char m_unk_0x59;  // +0x59, inferred, seen in 5 method(s)
  unsigned char m_unk_0x5A;  // +0x5A, inferred, seen in 5 method(s)
  unsigned char m_unk_0x5B;  // +0x5B, inferred, seen in 5 method(s)
  unsigned char m_unk_0x5C;  // +0x5C, inferred, seen in 5 method(s)
  unsigned char m_unk_0x5D;  // +0x5D, inferred, seen in 5 method(s)
  unsigned char m_unk_0x5E;  // +0x5E, inferred, seen in 5 method(s)
  unsigned char m_unk_0x5F;  // +0x5F, inferred, seen in 5 method(s)
  unsigned char m_unk_0x60;  // +0x60, inferred, seen in 3 method(s)
  unsigned char m_unk_0x61;  // +0x61, inferred, seen in 5 method(s)
  unsigned char m_unk_0x62;  // +0x62, inferred, seen in 5 method(s)
  void* m_unk_0x68;  // +0x68, inferred, seen in 3 method(s)
  void* m_unk_0x70;  // +0x70, inferred, seen in 4 method(s)
  void* m_unk_0x78;  // +0x78, inferred, seen in 2 method(s)
  unsigned int m_unk_0x80;  // +0x80, inferred, seen in 3 method(s)
  unsigned int m_unk_0x84;  // +0x84, inferred, seen in 5 method(s)
  unsigned int m_unk_0x88;  // +0x88, inferred, seen in 3 method(s)
  unsigned int m_unk_0x8C;  // +0x8C, inferred, seen in 5 method(s)
  unsigned int m_unk_0x90;  // +0x90, inferred, seen in 3 method(s)
  unsigned int m_unk_0x94;  // +0x94, inferred, seen in 5 method(s)
  float m_unk_0x98;  // +0x98, inferred, seen in 2 method(s)
  unsigned int m_unk_0x9C;  // +0x9C, inferred, seen in 4 method(s)
  void* m_unk_0xA0;  // +0xA0, inferred, seen in 3 method(s)
  void* m_unk_0xA8;  // +0xA8, inferred, seen in 4 method(s)
  void* m_unk_0xB0;  // +0xB0, inferred, seen in 2 method(s)
  void* m_unk_0xB8;  // +0xB8, inferred, seen in 3 method(s)
  void* m_unk_0xC0;  // +0xC0, inferred, seen in 4 method(s)
  void* m_unk_0xC8;  // +0xC8, inferred, seen in 2 method(s)
  std::string m_str;  // +0xD0, corroborated (local type)
  std::string m_icon;  // +0xD8, corroborated (local type)
  unsigned char _pad1[0x38];  // +0xE0, corroborated (local type)
  void* m_unk_0xE8;  // +0xE8, inferred, seen in 1 method(s)
  void* m_unk_0xF0;  // +0xF0, inferred, seen in 2 method(s)
  void* m_unk_0xF8;  // +0xF8, inferred, seen in 2 method(s)
  void* m_unk_0x100;  // +0x100, inferred, seen in 1 method(s)
  void* m_unk_0x108;  // +0x108, inferred, seen in 2 method(s)
  void* m_unk_0x110;  // +0x110, inferred, seen in 2 method(s)
  unsigned int m_unk_0x118;  // +0x118, inferred, seen in 1 method(s)
  int m_flag;  // +0x11C, corroborated (local type)
  unsigned int m_unk_0x120;  // +0x120, inferred, seen in 1 method(s)
};
} } }
