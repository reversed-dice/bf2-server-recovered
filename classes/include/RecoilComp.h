#pragma once
namespace dice { namespace hfe { namespace world {
class FireRate;
class IObject;
class RecoilComp;
class ReloadState;
class WeaponFireEvent;
class WeaponInitEvent;
class RecoilComp {
public:
  // FUNCTION: BF2 0x0060bb20
  ~RecoilComp();
  // FUNCTION: BF2 0x0060bf80
  void release();
  // FUNCTION: BF2 0x0060bfb0
  void queryInterface(unsigned, int) const;
  // FUNCTION: BF2 0x0060bff0
  unsigned int getInterfaceID() const;
  // FUNCTION: BF2 0x0060c010
  void initComponent(class WeaponInitEvent &);
  // FUNCTION: BF2 0x0060c030
  unsigned int preUpdate();
  // FUNCTION: BF2 0x0060c050
  void updateComponent(float, unsigned int);
  // FUNCTION: BF2 0x0060c070
  bool isSelectable() const;
  // FUNCTION: BF2 0x0060c090
  void fireStop();
  // FUNCTION: BF2 0x0060c0b0
  bool requestFire(bool, bool) const;
  // FUNCTION: BF2 0x0060c0d0
  void postFire(WeaponFireEvent &event);
  // FUNCTION: BF2 0x0060c0f0
  unsigned int fireComplete();
  // FUNCTION: BF2 0x0060c110
  void postSwitchFireRate(world::FireRate);
  // FUNCTION: BF2 0x0060c130
  bool requestReload() const;
  // FUNCTION: BF2 0x0060c150
  void reload(ReloadState&);
  // FUNCTION: BF2 0x0060c170
  void postReload();
  // FUNCTION: BF2 0x0060c190
  bool outOfAmmo();
  // FUNCTION: BF2 0x0060c1b0
  void stoppedTracking();
  // FUNCTION: BF2 0x0060c1d0
  void postChangeTarget(IObject*);
  // FUNCTION: BF2 0x0060c1f0
  void projectileWasReset(IObject*);
  // FUNCTION: BF2 0x0060c210
  void enable();
  // FUNCTION: BF2 0x0060c230
  void disable();
  // FUNCTION: BF2 0x0060c250
  void stop();
  // FUNCTION: BF2 0x0060c270
  bool busy() const;
  // FUNCTION: BF2 0x0060c290
  void exit();
  // FUNCTION: BF2 0x0060c2b0
  void destroy();
  // FUNCTION: BF2 0x0060c2d0
  void pickup();
  // FUNCTION: BF2 0x0060c2f0
  void reset();
  // FUNCTION: BF2 0x0060c310
  void setZoom(int);
  // FUNCTION: BF2 0x0060c330
  float getPitchRecoil() const;
  // FUNCTION: BF2 0x0060c350
  void getYawRecoil();
  // FUNCTION: BF2 0x0060c370
  bool getGoBackOnRecoil() const;
  // FUNCTION: BF2 0x0060c390
  const char* getRandomRecoilForceUp() const;
  // FUNCTION: BF2 0x0060c3b0
  const char* getRandomRecoilForceLeftRight() const;
  // FUNCTION: BF2 0x0060c3d0
  bool getHasRandomRecoilForce() const;
  // FUNCTION: BF2 0x0060c3f0
  float getRecoilForceModifier() const;
  // FUNCTION: BF2 0x0060c410
  unsigned int getRecoilVector() const;
  // FUNCTION: BF2 0x0060c4d0
  int getRef() const;

  unsigned int m_unk_0x1;  // +0x1, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5;  // +0x5, inferred, seen in 3 method(s)
  unsigned int m_unk_0x6;  // +0x6, inferred, seen in 2 method(s)
  unsigned int m_unk_0x7;  // +0x7, inferred, seen in 2 method(s)
  int m_unk_0x28;  // +0x28, inferred, seen in 2 method(s)
  unsigned int m_unk_0x34;  // +0x34, inferred, seen in 2 method(s)
  unsigned char m_unk_0x3C;  // +0x3C, inferred, seen in 2 method(s)
};
} } }
