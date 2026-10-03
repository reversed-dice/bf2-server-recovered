#pragma once
#include <string>
namespace dice { namespace hfe { namespace world {
class Vec2;
class Vec3;
class ControlPointTemplate {
public:
  // FUNCTION: BF2 0x005133c0
  unsigned int release();
  // FUNCTION: BF2 0x005133c0
  virtual void slot00();
  // FUNCTION: BF2 0x005133c0
  virtual void slot01();
  // FUNCTION: BF2 0x005133c0
  virtual void slot02();
  // FUNCTION: BF2 0x005133c0
  virtual void slot03();
  // FUNCTION: BF2 0x005133c0
  virtual void slot04();
  // FUNCTION: BF2 0x005133c0
  virtual void slot05();
  // FUNCTION: BF2 0x005133c0
  virtual void slot30();
  // FUNCTION: BF2 0x00513430
  void queryInterface(unsigned, int) const;
  // FUNCTION: BF2 0x00513490
  unsigned int getClassID() const;
  // FUNCTION: BF2 0x005134d0
  void mapMaterial();
  // FUNCTION: BF2 0x005134f0
  void setStartTeam(unsigned int);
  // FUNCTION: BF2 0x00513510
  int getStartTeam() const;
  // FUNCTION: BF2 0x00513530
  void setRadius(float);
  // FUNCTION: BF2 0x00513550
  float getRadius() const;
  // FUNCTION: BF2 0x00513570
  const char* getControlPointName();
  // FUNCTION: BF2 0x00513590
  void setControlPointId(unsigned int);
  // FUNCTION: BF2 0x005135b0
  int getControlPointId();
  // FUNCTION: BF2 0x005135d0
  void setDisableIfEnemyInsideRadius(bool b);
  // FUNCTION: BF2 0x005135d0
  void setDisableWhenLosingControl(bool b);
  // FUNCTION: BF2 0x005135d0
  void setLoseControlWhenEnemyClose(bool b);
  // FUNCTION: BF2 0x005135d0
  void setLoseControlWhenNotClose(bool b);
  // FUNCTION: BF2 0x005135d0
  void setOnlyTakeableByTeam(unsigned int t);
  // FUNCTION: BF2 0x005135f0
  unsigned char getDisableIfEnemyInsideRadius();
  // FUNCTION: BF2 0x00513630
  unsigned char getDisableWhenLosingControl();
  // FUNCTION: BF2 0x00513670
  unsigned char getLoseControlWhenEnemyClose();
  // FUNCTION: BF2 0x005136b0
  unsigned char getLoseControlWhenNotClose();
  // FUNCTION: BF2 0x005136d0
  void setTimeToGetControl(float time);
  // FUNCTION: BF2 0x005136f0
  float getTimeToGetControl() const;
  // FUNCTION: BF2 0x00513710
  void setTimeToLoseControl(float);
  // FUNCTION: BF2 0x00513730
  float getTimeToLoseControl() const;
  // FUNCTION: BF2 0x00513750
  void setUnableToChangeTeam(unsigned char);
  // FUNCTION: BF2 0x00513770
  unsigned char getUnableToChangeTeam() const;
  // FUNCTION: BF2 0x005137b0
  int getOnlyTakeableByTeam();
  // FUNCTION: BF2 0x005137d0
  void setMinNrToTakeControl(unsigned, int);
  // FUNCTION: BF2 0x005137f0
  int getMinNrToTakeControl();
  // FUNCTION: BF2 0x00513810
  void setIsUnstrategicControlPoint(bool);
  // FUNCTION: BF2 0x00513830
  unsigned char getIsUnstrategicControlPoint();
  // FUNCTION: BF2 0x00513850
  void setAreaValueTeam1(unsigned, int);
  // FUNCTION: BF2 0x00513870
  int getAreaValueTeam1();
  // FUNCTION: BF2 0x00513890
  void setAreaValueTeam2(unsigned, int);
  // FUNCTION: BF2 0x005138b0
  int getAreaValueTeam2();
  // FUNCTION: BF2 0x005138d0
  void setEnemyTicketLossWhenCaptured(int);
  // FUNCTION: BF2 0x005138f0
  int getEnemyTicketLossWhenCaptured();
  // FUNCTION: BF2 0x00513910
  void setShowOnMinimap(unsigned char);
  // FUNCTION: BF2 0x00513930
  unsigned char getShowOnMinimap();
  // FUNCTION: BF2 0x00513950
  void setSignalTriggerId(unsigned int);
  // FUNCTION: BF2 0x00513970
  int getSignalTriggerId() const;
  // FUNCTION: BF2 0x00513990
  void setGroupId(unsigned int);
  // FUNCTION: BF2 0x005139b0
  int getGroupId();
  // FUNCTION: BF2 0x00513a30
  void setHoistFlag(unsigned char);
  // FUNCTION: BF2 0x00513a50
  unsigned char getHoistFlag();
  // FUNCTION: BF2 0x00513a70
  const char* getFlagTemplateTeam0();
  // FUNCTION: BF2 0x00513a90
  const char* getFlagTemplateTeam1();
  // FUNCTION: BF2 0x00513ab0
  const char* getFlagTemplateTeam2();
  // FUNCTION: BF2 0x00513ad0
  void setIsHemisphere(unsigned char);
  // FUNCTION: BF2 0x00513af0
  unsigned char getIsHemisphere();
  // FUNCTION: BF2 0x00513b10
  void setForSoldierOnly(unsigned char);
  // FUNCTION: BF2 0x00513b30
  unsigned char getForSoldierOnly();
  // FUNCTION: BF2 0x00513b50
  void setHasGreyCapturingState(bool);
  // FUNCTION: BF2 0x00513b70
  unsigned char getHasGreyCapturingState();
  // FUNCTION: BF2 0x00513c00
  void setFlagTemplateTeam2(std::string);
  // FUNCTION: BF2 0x00513c50
  void getMinimapNameOffset();
  // FUNCTION: BF2 0x00513ce0
  int getRef();
  // FUNCTION: BF2 0x00513d00
  void setRadiusOffset(Vec3 const &);
  // FUNCTION: BF2 0x00513d40
  void setMinimapNameOffset(Vec2);
  // FUNCTION: BF2 0x00513d80
  void getHoistMinMax();
  // FUNCTION: BF2 0x00513db0
  void setHoistMinMax(Vec2);
  // FUNCTION: BF2 0x00513e20
  void* createObject() const;
  // FUNCTION: BF2 0x005141d0
  void setControlPointName(std::string);
  // FUNCTION: BF2 0x005141f0
  void setFlagTemplateTeam0(std::string);
  // FUNCTION: BF2 0x00514210
  void setFlagTemplateTeam1(std::string);

  void* m_unk_0x8;  // +0x8, inferred, seen in 3 method(s)
  void* m_unk_0x10;  // +0x10, inferred, seen in 1 method(s)
  void* m_unk_0x18;  // +0x18, inferred, seen in 1 method(s)
  unsigned int m_unk_0x40;  // +0x40, inferred, seen in 3 method(s)
  unsigned int m_unk_0x41;  // +0x41, inferred, seen in 2 method(s)
  unsigned int m_unk_0x43;  // +0x43, inferred, seen in 2 method(s)
  unsigned int m_unk_0x44;  // +0x44, inferred, seen in 2 method(s)
  unsigned char m_unk_0x45;  // +0x45, inferred, seen in 2 method(s)
  unsigned char m_unk_0x46;  // +0x46, inferred, seen in 2 method(s)
  unsigned int m_unk_0x47;  // +0x47, inferred, seen in 2 method(s)
  unsigned int m_unk_0x48;  // +0x48, inferred, seen in 2 method(s)
  unsigned int m_unk_0x49;  // +0x49, inferred, seen in 2 method(s)
  unsigned char m_unk_0x52;  // +0x52, inferred, seen in 2 method(s)
  unsigned int m_unk_0x56;  // +0x56, inferred, seen in 2 method(s)
  unsigned int m_unk_0x57;  // +0x57, inferred, seen in 2 method(s)
  unsigned int m_unk_0x58;  // +0x58, inferred, seen in 2 method(s)
  unsigned char m_unk_0x59;  // +0x59, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5A;  // +0x5A, inferred, seen in 2 method(s)
  int m_unk_0x200;  // +0x200, inferred, seen in 2 method(s)
  unsigned int m_unk_0x204;  // +0x204, inferred, seen in 4 method(s)
  unsigned int m_unk_0x208;  // +0x208, inferred, seen in 3 method(s)
  unsigned int m_unk_0x218;  // +0x218, inferred, seen in 3 method(s)
  float m_timeToGetControl;  // +0x21C, corroborated (local type)
  float m_timeToLoseControl;  // +0x220, corroborated (local type)
  bool m_disableIfEnemyInsideRadius;  // +0x224, corroborated (local type)
  unsigned char m_unk_0x225;  // +0x225, inferred, seen in 5 method(s)
  unsigned char m_unk_0x226;  // +0x226, inferred, seen in 5 method(s)
  unsigned char m_unk_0x227;  // +0x227, inferred, seen in 5 method(s)
  unsigned char m_unk_0x228;  // +0x228, inferred, seen in 3 method(s)
  unsigned int m_unk_0x22C;  // +0x22C, inferred, seen in 5 method(s)
  unsigned char m_unk_0x230;  // +0x230, inferred, seen in 3 method(s)
  unsigned char m_unk_0x231;  // +0x231, inferred, seen in 5 method(s)
  unsigned int m_unk_0x234;  // +0x234, inferred, seen in 4 method(s)
  unsigned int m_unk_0x238;  // +0x238, inferred, seen in 3 method(s)
  unsigned int m_unk_0x23C;  // +0x23C, inferred, seen in 5 method(s)
  int m_unk_0x240;  // +0x240, inferred, seen in 3 method(s)
  unsigned char m_unk_0x244;  // +0x244, inferred, seen in 5 method(s)
  unsigned int m_unk_0x248;  // +0x248, inferred, seen in 3 method(s)
  unsigned char m_unk_0x290;  // +0x290, inferred, seen in 3 method(s)
  float m_unk_0x2B0;  // +0x2B0, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2B4;  // +0x2B4, inferred, seen in 4 method(s)
  unsigned int m_unk_0x2B8;  // +0x2B8, inferred, seen in 3 method(s)
  unsigned int m_unk_0x2BC;  // +0x2BC, inferred, seen in 4 method(s)
  unsigned int m_unk_0x2C0;  // +0x2C0, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2C4;  // +0x2C4, inferred, seen in 4 method(s)
  unsigned char m_unk_0x2C8;  // +0x2C8, inferred, seen in 3 method(s)
  unsigned char m_unk_0x2C9;  // +0x2C9, inferred, seen in 5 method(s)
  unsigned int m_unk_0x2CC;  // +0x2CC, inferred, seen in 4 method(s)
  unsigned int m_unk_0x2D0;  // +0x2D0, inferred, seen in 2 method(s)
};
} } }
