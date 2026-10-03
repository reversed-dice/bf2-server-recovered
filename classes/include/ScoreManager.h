#pragma once
namespace dice { namespace hfe { namespace world {
class IBase;
class ScoreManager {
public:
  // FUNCTION: BF2 0x004af600
  void removeAll();
  // FUNCTION: BF2 0x004af610
  ~ScoreManager();
  // FUNCTION: BF2 0x004af740
  void setVictoryType(unsigned, char);
  // FUNCTION: BF2 0x004af750
  unsigned int init(void* ptr);
  // FUNCTION: BF2 0x004b4eb0
  void release();
  // FUNCTION: BF2 0x004b4f10
  bool getWinner();
  // FUNCTION: BF2 0x004b4f20
  void forceSetWinner(unsigned, char);
  // FUNCTION: BF2 0x004b4f30
  bool getVictoryType();
  // FUNCTION: BF2 0x004b4f50
  unsigned int getMinimumBitSize() const;
  // FUNCTION: BF2 0x004b4f60
  void setDeath(int);
  // FUNCTION: BF2 0x004b4f70
  unsigned int getDeath();
  // FUNCTION: BF2 0x004b4f80
  void setKill(int);
  // FUNCTION: BF2 0x004b4f90
  unsigned int getKill();
  // FUNCTION: BF2 0x004b4fa0
  void setAssistKill(int);
  // FUNCTION: BF2 0x004b4fb0
  unsigned int getAssistKill();
  // FUNCTION: BF2 0x004b4fc0
  void setInDirectKill(int);
  // FUNCTION: BF2 0x004b4fd0
  unsigned int getInDirectKill();
  // FUNCTION: BF2 0x004b4fe0
  void setTK(int);
  // FUNCTION: BF2 0x004b4ff0
  unsigned int getTK();
  // FUNCTION: BF2 0x004b5000
  void setHeal(int);
  // FUNCTION: BF2 0x004b5010
  unsigned int getHeal();
  // FUNCTION: BF2 0x004b5020
  void setSoldierRevive(int);
  // FUNCTION: BF2 0x004b5030
  unsigned int getSoldierRevive();
  // FUNCTION: BF2 0x004b5040
  void setRepair(int);
  // FUNCTION: BF2 0x004b5050
  unsigned int getRepair();
  // FUNCTION: BF2 0x004b5060
  void setAmmo(int);
  // FUNCTION: BF2 0x004b5070
  unsigned int getAmmo();
  // FUNCTION: BF2 0x004b5080
  void setVehicleRevive(int);
  // FUNCTION: BF2 0x004b5090
  unsigned int getVehicleRevive();
  // FUNCTION: BF2 0x004b50a0
  void setFlagCapture(int);
  // FUNCTION: BF2 0x004b50b0
  unsigned int getFlagCapture();
  // FUNCTION: BF2 0x004b50c0
  void setFlagReturn(int);
  // FUNCTION: BF2 0x004b50d0
  unsigned int getFlagReturn();
  // FUNCTION: BF2 0x004b50e0
  void setControlPointCapture(int);
  // FUNCTION: BF2 0x004b50f0
  unsigned int getControlPointCapture();
  // FUNCTION: BF2 0x004b5100
  void setObjective(int);
  // FUNCTION: BF2 0x004b5110
  unsigned int getObjective();
  // FUNCTION: BF2 0x004b5120
  void setDriverPassenger(int);
  // FUNCTION: BF2 0x004b5130
  unsigned int getDriverPassenger();
  // FUNCTION: BF2 0x004b5140
  void setTeamDamage(int);
  // FUNCTION: BF2 0x004b5150
  unsigned int getTeamDamage();
  // FUNCTION: BF2 0x004b5160
  void setTeamVehicleDamage(int);
  // FUNCTION: BF2 0x004b5170
  unsigned int getTeamVehicleDamage();
  // FUNCTION: BF2 0x004b5180
  void setHealScoreLimit(float);
  // FUNCTION: BF2 0x004b5190
  float getHealScoreLimit();
  // FUNCTION: BF2 0x004b51a0
  void setRepairScoreLimit(float);
  // FUNCTION: BF2 0x004b51b0
  float getRepairScoreLimit();
  // FUNCTION: BF2 0x004b51c0
  void setAmmoScoreLimit(float);
  // FUNCTION: BF2 0x004b51d0
  float getAmmoScoreLimit();
  // FUNCTION: BF2 0x004b51e0
  void setTeamDamageLimit(float);
  // FUNCTION: BF2 0x004b51f0
  float getTeamDamageLimit();
  // FUNCTION: BF2 0x004b5200
  void setTeamVehicleDamageLimit(float);
  // FUNCTION: BF2 0x004b5210
  float getTeamVehicleDamageLimit();
  // FUNCTION: BF2 0x004b5270
  int getRef();
  // FUNCTION: BF2 0x0089b110
  void* create(unsigned, int, IBase*);

  unsigned int m_unk_0xB;  // +0xB, inferred, seen in 3 method(s)
  unsigned int m_unk_0xC;  // +0xC, inferred, seen in 2 method(s)
  unsigned int m_unk_0xD;  // +0xD, inferred, seen in 2 method(s)
  unsigned int m_unk_0xE;  // +0xE, inferred, seen in 2 method(s)
  unsigned int m_unk_0xF;  // +0xF, inferred, seen in 2 method(s)
  unsigned int m_unk_0x10;  // +0x10, inferred, seen in 2 method(s)
  unsigned int m_unk_0x11;  // +0x11, inferred, seen in 2 method(s)
  unsigned int m_unk_0x12;  // +0x12, inferred, seen in 2 method(s)
  unsigned int m_unk_0x13;  // +0x13, inferred, seen in 2 method(s)
  unsigned int m_unk_0x14;  // +0x14, inferred, seen in 2 method(s)
  unsigned int m_unk_0x15;  // +0x15, inferred, seen in 2 method(s)
  unsigned int m_unk_0x16;  // +0x16, inferred, seen in 2 method(s)
  unsigned int m_unk_0x17;  // +0x17, inferred, seen in 2 method(s)
  char m_unk_0x38;  // +0x38, inferred, seen in 1 method(s)
  unsigned int m_unk_0x40;  // +0x40, inferred, seen in 1 method(s)
  int m_unk_0x44;  // +0x44, inferred, seen in 3 method(s)
  unsigned int m_unk_0x48;  // +0x48, inferred, seen in 1 method(s)
  unsigned int m_unk_0x4C;  // +0x4C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x50;  // +0x50, inferred, seen in 2 method(s)
  unsigned int m_unk_0x54;  // +0x54, inferred, seen in 3 method(s)
  int m_unk_0x58;  // +0x58, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5C;  // +0x5C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x60;  // +0x60, inferred, seen in 2 method(s)
  unsigned int m_unk_0x64;  // +0x64, inferred, seen in 4 method(s)
  unsigned int m_unk_0x68;  // +0x68, inferred, seen in 2 method(s)
  unsigned int m_unk_0x6C;  // +0x6C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x70;  // +0x70, inferred, seen in 2 method(s)
  unsigned int m_unk_0x74;  // +0x74, inferred, seen in 4 method(s)
  unsigned int m_unk_0x78;  // +0x78, inferred, seen in 2 method(s)
  unsigned int m_unk_0x7C;  // +0x7C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x80;  // +0x80, inferred, seen in 2 method(s)
  unsigned int m_unk_0x84;  // +0x84, inferred, seen in 4 method(s)
  unsigned int m_unk_0x88;  // +0x88, inferred, seen in 2 method(s)
  unsigned int m_unk_0x8C;  // +0x8C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x90;  // +0x90, inferred, seen in 2 method(s)
  unsigned int m_unk_0x94;  // +0x94, inferred, seen in 4 method(s)
  unsigned int m_unk_0x98;  // +0x98, inferred, seen in 2 method(s)
  unsigned int m_unk_0x9C;  // +0x9C, inferred, seen in 4 method(s)
  unsigned int m_unk_0xA0;  // +0xA0, inferred, seen in 1 method(s)
  unsigned int m_unk_0xA4;  // +0xA4, inferred, seen in 3 method(s)
  unsigned int m_unk_0xA8;  // +0xA8, inferred, seen in 1 method(s)
  unsigned int m_unk_0xAC;  // +0xAC, inferred, seen in 3 method(s)
  unsigned int m_unk_0xB0;  // +0xB0, inferred, seen in 1 method(s)
  unsigned char m_unk_0xB4;  // +0xB4, inferred, seen in 8 method(s)
  unsigned char m_unk_0xB5;  // +0xB5, inferred, seen in 7 method(s)
  unsigned int m_unk_0xBC;  // +0xBC, inferred, seen in 3 method(s)
  unsigned int m_unk_0xC0;  // +0xC0, inferred, seen in 3 method(s)
  unsigned int m_unk_0xC4;  // +0xC4, inferred, seen in 3 method(s)
  unsigned int m_unk_0xC8;  // +0xC8, inferred, seen in 2 method(s)
  unsigned int m_unk_0xCC;  // +0xCC, inferred, seen in 2 method(s)
  unsigned int m_unk_0xD0;  // +0xD0, inferred, seen in 3 method(s)
  unsigned int m_unk_0xD4;  // +0xD4, inferred, seen in 1 method(s)
  unsigned int m_unk_0xD8;  // +0xD8, inferred, seen in 3 method(s)
  unsigned int m_unk_0xDC;  // +0xDC, inferred, seen in 3 method(s)
  unsigned int m_unk_0xE0;  // +0xE0, inferred, seen in 3 method(s)
  unsigned int m_unk_0xE4;  // +0xE4, inferred, seen in 3 method(s)
  unsigned int m_unk_0xE8;  // +0xE8, inferred, seen in 3 method(s)
  unsigned int m_unk_0xEC;  // +0xEC, inferred, seen in 3 method(s)
  unsigned int m_unk_0xF0;  // +0xF0, inferred, seen in 2 method(s)
  unsigned int m_unk_0xF4;  // +0xF4, inferred, seen in 2 method(s)
  unsigned int m_unk_0xF8;  // +0xF8, inferred, seen in 2 method(s)
  unsigned int m_unk_0x13C;  // +0x13C, inferred, seen in 1 method(s)
  unsigned int m_unk_0x140;  // +0x140, inferred, seen in 2 method(s)
  unsigned int m_unk_0x144;  // +0x144, inferred, seen in 1 method(s)
  unsigned char m_unk_0x148;  // +0x148, inferred, seen in 1 method(s)
  unsigned int m_unk_0x14C;  // +0x14C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x150;  // +0x150, inferred, seen in 3 method(s)
  unsigned int m_unk_0x154;  // +0x154, inferred, seen in 3 method(s)
  unsigned int m_unk_0x158;  // +0x158, inferred, seen in 3 method(s)
  unsigned int m_unk_0x15C;  // +0x15C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x160;  // +0x160, inferred, seen in 2 method(s)
  unsigned int m_unk_0x164;  // +0x164, inferred, seen in 3 method(s)
  unsigned int m_unk_0x168;  // +0x168, inferred, seen in 1 method(s)
  unsigned int m_unk_0x16C;  // +0x16C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x170;  // +0x170, inferred, seen in 3 method(s)
  unsigned int m_unk_0x174;  // +0x174, inferred, seen in 3 method(s)
  unsigned int m_unk_0x178;  // +0x178, inferred, seen in 3 method(s)
  unsigned int m_unk_0x17C;  // +0x17C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x180;  // +0x180, inferred, seen in 3 method(s)
  unsigned int m_unk_0x184;  // +0x184, inferred, seen in 2 method(s)
  unsigned int m_unk_0x188;  // +0x188, inferred, seen in 2 method(s)
  unsigned int m_unk_0x18C;  // +0x18C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1D0;  // +0x1D0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x1D4;  // +0x1D4, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1D8;  // +0x1D8, inferred, seen in 1 method(s)
  unsigned char m_unk_0x1DC;  // +0x1DC, inferred, seen in 1 method(s)
  void* m_unk_0x1E0;  // +0x1E0, inferred, seen in 4 method(s)
};
} } }
