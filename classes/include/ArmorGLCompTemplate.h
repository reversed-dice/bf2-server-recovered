#pragma once
namespace dice { namespace hfe { namespace world {
class IObject;
class IObjectTemplate;
class ArmorGLCompTemplate {
public:
  // FUNCTION: BF2 0x005b5360
  void objectCreated(world::IObject*);
  // FUNCTION: BF2 0x005b5370
  void objectDestroyed(world::IObject*);
  // FUNCTION: BF2 0x005b85b0
  void release();
  // FUNCTION: BF2 0x005b85e0
  void queryInterface(unsigned, int) const;
  // FUNCTION: BF2 0x005b8620
  unsigned int getClassID() const;
  // FUNCTION: BF2 0x005b8630
  unsigned int getInterfaceID();
  // FUNCTION: BF2 0x005b8640
  void setTemplate(world::IObjectTemplate*);
  // FUNCTION: BF2 0x005b8650
  void* queryImplementation(unsigned, int);
  // FUNCTION: BF2 0x005b8690
  void setWreckHitPoints(float);
  // FUNCTION: BF2 0x005b86b0
  float getWreckHitPoints();
  // FUNCTION: BF2 0x005b86c0
  void setHitPoints(float);
  // FUNCTION: BF2 0x005b86d0
  float getHitPoints();
  // FUNCTION: BF2 0x005b86e0
  void setMaxHitPoints(float);
  // FUNCTION: BF2 0x005b86f0
  float getMaxHitPoints();
  // FUNCTION: BF2 0x005b8700
  void setAttackDamage(float);
  // FUNCTION: BF2 0x005b8710
  float getAttackDamage();
  // FUNCTION: BF2 0x005b8720
  void setAngleMod(float);
  // FUNCTION: BF2 0x005b8730
  float getAngleMod();
  // FUNCTION: BF2 0x005b8740
  void setSpeedMod(float);
  // FUNCTION: BF2 0x005b8750
  float getSpeedMod();
  // FUNCTION: BF2 0x005b8760
  void setDefaultMaterial(int);
  // FUNCTION: BF2 0x005b8770
  unsigned int getDefaultMaterial() const;
  // FUNCTION: BF2 0x005b8780
  void setExplosionRadius(float);
  // FUNCTION: BF2 0x005b8790
  float getExplosionRadius();
  // FUNCTION: BF2 0x005b87a0
  void setExplosionDamage(float);
  // FUNCTION: BF2 0x005b87b0
  float getExplosionDamage();
  // FUNCTION: BF2 0x005b87c0
  void setExplosionMaterial(int);
  // FUNCTION: BF2 0x005b87d0
  unsigned int getExplosionMaterial();
  // FUNCTION: BF2 0x005b87e0
  void setExplosionForce(float);
  // FUNCTION: BF2 0x005b87f0
  float getExplosionForce();
  // FUNCTION: BF2 0x005b8800
  void setExplosionForceMax(float);
  // FUNCTION: BF2 0x005b8810
  float getExplosionForceMax();
  // FUNCTION: BF2 0x005b8820
  void setExplosionForceMod(float);
  // FUNCTION: BF2 0x005b8830
  float getExplosionForceMod();
  // FUNCTION: BF2 0x005b8840
  void setWreckExplosionRadius(float);
  // FUNCTION: BF2 0x005b8850
  float getWreckExplosionRadius();
  // FUNCTION: BF2 0x005b8860
  void setWreckExplosionDamage(float);
  // FUNCTION: BF2 0x005b8870
  float getWreckExplosionDamage();
  // FUNCTION: BF2 0x005b8880
  void setWreckExplosionMaterial(int);
  // FUNCTION: BF2 0x005b8890
  unsigned int getWreckExplosionMaterial();
  // FUNCTION: BF2 0x005b88a0
  void setWreckExplosionForce(float);
  // FUNCTION: BF2 0x005b88b0
  float getWreckExplosionForce();
  // FUNCTION: BF2 0x005b88c0
  void setWreckExplosionForceMax(float);
  // FUNCTION: BF2 0x005b88d0
  float getWreckExplosionForceMax();
  // FUNCTION: BF2 0x005b88e0
  void setWreckExplosionForceMod(float);
  // FUNCTION: BF2 0x005b88f0
  float getWreckExplosionForceMod();
  // FUNCTION: BF2 0x005b8900
  void setHpLostWhileCriticalDamage(float);
  // FUNCTION: BF2 0x005b8910
  float getHpLostWhileCriticalDamage();
  // FUNCTION: BF2 0x005b8920
  void setHpLostWhileUpSideDown(float);
  // FUNCTION: BF2 0x005b8930
  float getHpLostWhileUpSideDown();
  // FUNCTION: BF2 0x005b8940
  void setHpLostWhileInWater(float);
  // FUNCTION: BF2 0x005b8950
  float getHpLostWhileInWater();
  // FUNCTION: BF2 0x005b8960
  void setHpLostWhileInDeepWater(float);
  // FUNCTION: BF2 0x005b8970
  float getHpLostWhileInDeepWater();
  // FUNCTION: BF2 0x005b8980
  void setWaterDamageDelay(float);
  // FUNCTION: BF2 0x005b8990
  float getWaterDamageDelay();
  // FUNCTION: BF2 0x005b89a0
  void setDeepWaterDamageDelay(float);
  // FUNCTION: BF2 0x005b89b0
  float getDeepWaterDamageDelay();
  // FUNCTION: BF2 0x005b89c0
  void setWaterLevel(float);
  // FUNCTION: BF2 0x005b89d0
  float getWaterLevel();
  // FUNCTION: BF2 0x005b89e0
  void setDeepWaterLevel(float);
  // FUNCTION: BF2 0x005b89f0
  float getDeepWaterLevel();
  // FUNCTION: BF2 0x005b8a00
  void setCanBeRepairedWhenWreck(bool);
  // FUNCTION: BF2 0x005b8a10
  bool getCanBeRepairedWhenWreck();
  // FUNCTION: BF2 0x005b8a20
  void setCriticalDamage(float);
  // FUNCTION: BF2 0x005b8a30
  float getCriticalDamage();
  // FUNCTION: BF2 0x005b8a40
  void setTimeToStayAsWreck(float);
  // FUNCTION: BF2 0x005b8a50
  float getTimeToStayAsWreck();
  // FUNCTION: BF2 0x005b8a60
  void setTimeToStayAfterDestroyed(float);
  // FUNCTION: BF2 0x005b8a70
  float getTimeToStayAfterDestroyed();
  // FUNCTION: BF2 0x005b8a80
  void setAlignLastEffectToHitDirection(bool);
  // FUNCTION: BF2 0x005b8a90
  bool getAlignLastEffectToHitDirection();
  // FUNCTION: BF2 0x005b8aa0
  void setWreckDelay(float);
  // FUNCTION: BF2 0x005b8ab0
  float getWreckDelay();
  // FUNCTION: BF2 0x005b8ac0
  void setHideChildrenOnSpectacularDeath(bool);
  // FUNCTION: BF2 0x005b8ad0
  bool getHideChildrenOnSpectacularDeath();
  // FUNCTION: BF2 0x005b8ae0
  void setDestroyOnSpectacularDeath(bool);
  // FUNCTION: BF2 0x005b8af0
  bool getDestroyOnSpectacularDeath();
  // FUNCTION: BF2 0x005b8b00
  void setCanBeDestroyed(bool);
  // FUNCTION: BF2 0x005b8b10
  bool getCanBeDestroyed();
  // FUNCTION: BF2 0x005b8b20
  void setShowDamageAsDirt(float);
  // FUNCTION: BF2 0x005b8b30
  float getShowDamageAsDirt() const;
  // FUNCTION: BF2 0x005b8b40
  void setUseMMOnDeath(bool);
  // FUNCTION: BF2 0x005b8b50
  bool getUseMMOnDeath();
  // FUNCTION: BF2 0x005b8c20
  int getRef();

  unsigned int m_unk_0x2;  // +0x2, inferred, seen in 3 method(s)
  unsigned int m_unk_0x4;  // +0x4, inferred, seen in 2 method(s)
  unsigned int m_unk_0xA;  // +0xA, inferred, seen in 2 method(s)
  int m_unk_0x10;  // +0x10, inferred, seen in 2 method(s)
  unsigned int m_unk_0x13;  // +0x13, inferred, seen in 2 method(s)
  unsigned char m_unk_0x14;  // +0x14, inferred, seen in 3 method(s)
  unsigned char m_unk_0x15;  // +0x15, inferred, seen in 5 method(s)
  unsigned int m_unk_0x2C;  // +0x2C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2D;  // +0x2D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2E;  // +0x2E, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2F;  // +0x2F, inferred, seen in 2 method(s)
  unsigned int m_unk_0x30;  // +0x30, inferred, seen in 3 method(s)
  unsigned int m_unk_0x31;  // +0x31, inferred, seen in 2 method(s)
  unsigned int m_unk_0x32;  // +0x32, inferred, seen in 2 method(s)
  unsigned int m_unk_0x33;  // +0x33, inferred, seen in 2 method(s)
  unsigned int m_unk_0x34;  // +0x34, inferred, seen in 2 method(s)
  unsigned int m_unk_0x35;  // +0x35, inferred, seen in 2 method(s)
  unsigned int m_unk_0x36;  // +0x36, inferred, seen in 2 method(s)
  unsigned int m_unk_0x37;  // +0x37, inferred, seen in 2 method(s)
  unsigned int m_unk_0x38;  // +0x38, inferred, seen in 2 method(s)
  unsigned int m_unk_0x39;  // +0x39, inferred, seen in 2 method(s)
  unsigned int m_unk_0x3A;  // +0x3A, inferred, seen in 2 method(s)
  unsigned int m_unk_0x3B;  // +0x3B, inferred, seen in 2 method(s)
  unsigned int m_unk_0x3C;  // +0x3C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x3D;  // +0x3D, inferred, seen in 2 method(s)
  void* m_unk_0x60;  // +0x60, inferred, seen in 1 method(s)
  void* m_unk_0x78;  // +0x78, inferred, seen in 2 method(s)
  void* m_unk_0x80;  // +0x80, inferred, seen in 4 method(s)
  void* m_unk_0x88;  // +0x88, inferred, seen in 2 method(s)
  void* m_unk_0x90;  // +0x90, inferred, seen in 2 method(s)
  unsigned int m_unk_0x98;  // +0x98, inferred, seen in 2 method(s)
  void* m_unk_0xB8;  // +0xB8, inferred, seen in 2 method(s)
  void* m_unk_0xC0;  // +0xC0, inferred, seen in 2 method(s)
  void* m_unk_0xC8;  // +0xC8, inferred, seen in 2 method(s)
  void* m_unk_0xD0;  // +0xD0, inferred, seen in 2 method(s)
  void* m_unk_0xD8;  // +0xD8, inferred, seen in 2 method(s)
  void* m_unk_0xE0;  // +0xE0, inferred, seen in 2 method(s)
  void* m_unk_0xE8;  // +0xE8, inferred, seen in 2 method(s)
  void* m_unk_0xF0;  // +0xF0, inferred, seen in 2 method(s)
  void* m_unk_0xF8;  // +0xF8, inferred, seen in 2 method(s)
  void* m_unk_0x100;  // +0x100, inferred, seen in 2 method(s)
  void* m_unk_0x108;  // +0x108, inferred, seen in 3 method(s)
  void* m_unk_0x110;  // +0x110, inferred, seen in 1 method(s)
  void* m_unk_0x118;  // +0x118, inferred, seen in 2 method(s)
  void* m_unk_0x120;  // +0x120, inferred, seen in 1 method(s)
  void* m_unk_0x128;  // +0x128, inferred, seen in 1 method(s)
  void* m_unk_0x130;  // +0x130, inferred, seen in 1 method(s)
  void* m_unk_0x138;  // +0x138, inferred, seen in 1 method(s)
  void* m_unk_0x140;  // +0x140, inferred, seen in 1 method(s)
  void* m_unk_0x148;  // +0x148, inferred, seen in 2 method(s)
  void* m_unk_0x150;  // +0x150, inferred, seen in 1 method(s)
  void* m_unk_0x158;  // +0x158, inferred, seen in 1 method(s)
  float m_unk_0x160;  // +0x160, inferred, seen in 2 method(s)
  float m_unk_0x164;  // +0x164, inferred, seen in 5 method(s)
  float m_unk_0x168;  // +0x168, inferred, seen in 3 method(s)
  unsigned int m_unk_0x16C;  // +0x16C, inferred, seen in 5 method(s)
  float m_unk_0x170;  // +0x170, inferred, seen in 1 method(s)
  unsigned int m_unk_0x174;  // +0x174, inferred, seen in 4 method(s)
  float m_unk_0x178;  // +0x178, inferred, seen in 2 method(s)
  unsigned int m_unk_0x17C;  // +0x17C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x180;  // +0x180, inferred, seen in 3 method(s)
  unsigned int m_unk_0x184;  // +0x184, inferred, seen in 4 method(s)
  float m_unk_0x188;  // +0x188, inferred, seen in 2 method(s)
  unsigned int m_unk_0x18C;  // +0x18C, inferred, seen in 5 method(s)
  float m_unk_0x190;  // +0x190, inferred, seen in 2 method(s)
  unsigned int m_unk_0x194;  // +0x194, inferred, seen in 4 method(s)
  float m_unk_0x198;  // +0x198, inferred, seen in 2 method(s)
  unsigned int m_unk_0x19C;  // +0x19C, inferred, seen in 4 method(s)
  float m_unk_0x1A0;  // +0x1A0, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1A4;  // +0x1A4, inferred, seen in 5 method(s)
  float m_unk_0x1A8;  // +0x1A8, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1AC;  // +0x1AC, inferred, seen in 4 method(s)
  float m_unk_0x1B0;  // +0x1B0, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1B4;  // +0x1B4, inferred, seen in 4 method(s)
  float m_unk_0x1B8;  // +0x1B8, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1BC;  // +0x1BC, inferred, seen in 4 method(s)
  float m_unk_0x1C0;  // +0x1C0, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1C4;  // +0x1C4, inferred, seen in 4 method(s)
  float m_unk_0x1C8;  // +0x1C8, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1CC;  // +0x1CC, inferred, seen in 4 method(s)
  float m_unk_0x1D0;  // +0x1D0, inferred, seen in 2 method(s)
  unsigned char m_unk_0x1D4;  // +0x1D4, inferred, seen in 5 method(s)
  float m_unk_0x1D8;  // +0x1D8, inferred, seen in 2 method(s)
  float m_unk_0x1E0;  // +0x1E0, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1E4;  // +0x1E4, inferred, seen in 4 method(s)
  float m_unk_0x1E8;  // +0x1E8, inferred, seen in 2 method(s)
  unsigned char m_unk_0x1EC;  // +0x1EC, inferred, seen in 5 method(s)
  unsigned char m_unk_0x1ED;  // +0x1ED, inferred, seen in 5 method(s)
  unsigned char m_unk_0x1EE;  // +0x1EE, inferred, seen in 5 method(s)
  unsigned char m_unk_0x1EF;  // +0x1EF, inferred, seen in 5 method(s)
};
} } }
