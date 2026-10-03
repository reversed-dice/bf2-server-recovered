#pragma once
#include "GameLogic.h"
#include "IPlayer.h"
namespace dice { namespace hfe {
namespace world { class IArmorGLComp; class IObject; class IObjectTemplate; }
class GameLogic;
using world::IArmorGLComp;  // bare 'IArmorGLComp' resolves to the only class of this name in the binary
class IBase;
using world::IObject;  // bare 'IObject' resolves to the only class of this name in the binary
using world::IObjectTemplate;  // bare 'IObjectTemplate' resolves to the only class of this name in the binary
using world::IPlayer;  // bare 'IPlayer' resolves to the only class of this name in the binary
class NetworkManager;
class TicketHistory;
class Vec3;
class WorldPref;
class ClientGameLogic {
public:
  // FUNCTION: BF2 0x00470e40
  void killPlayer(world::IPlayer*, bool, bool);
  // FUNCTION: BF2 0x00470eb0
  unsigned int reSpawnPlayer();
  // FUNCTION: BF2 0x00470ec0
  unsigned int playEffect() const;
  // FUNCTION: BF2 0x00470ed0
  unsigned int giveDamage();
  // FUNCTION: BF2 0x00470ee0
  void handleExplosion(Vec3, float, int, float, world::IPlayer*, world::IArmorGLComp*, int, world::IObject*, world::IObject*, float, world::IObject*, world::IObject*, float, bool, bool);
  // FUNCTION: BF2 0x00470f40
  void handleDrop(IObject* obj, IPlayer* player, IObject* containerObj, bool);
  // FUNCTION: BF2 0x00470f90
  void handleCollision();
  // FUNCTION: BF2 0x00470fa0
  unsigned int spawnObject() const;
  // FUNCTION: BF2 0x00470fc0
  unsigned int init();
  // FUNCTION: BF2 0x00470fe0
  void reset();
  // FUNCTION: BF2 0x00471020
  virtual void __pad0();
  // FUNCTION: BF2 0x00471020
  virtual void __pad1();
  // FUNCTION: BF2 0x00471020
  virtual void __pad2();
  // FUNCTION: BF2 0x00471020
  virtual void __pad3();
  // FUNCTION: BF2 0x00471020
  virtual void __pad4();
  // FUNCTION: BF2 0x00471020
  virtual void __pad5();
  // FUNCTION: BF2 0x00471020
  virtual void __pad6();
  // FUNCTION: BF2 0x00471020
  virtual void __pad7();
  // FUNCTION: BF2 0x00471020
  virtual void __pad8();
  // FUNCTION: BF2 0x00471020
  virtual void __pad9();
  // FUNCTION: BF2 0x00471020
  void restartDemoPlayback();
  // FUNCTION: BF2 0x00471050
  unsigned int close();
  // FUNCTION: BF2 0x004710c0
  void getHasPendingExit();
  // FUNCTION: BF2 0x004710e0
  void clearPendingExit();
  // FUNCTION: BF2 0x00471100
  void createObject();
  // FUNCTION: BF2 0x00471370
  const char* getTicketHistory();
  // FUNCTION: BF2 0x00471400
  void spawnMultipleObjects(world::IObjectTemplate const *, int);
  // FUNCTION: BF2 0x004726f0
  void setTicketHistory(const TicketHistory& th);
  // FUNCTION: BF2 0x004732d0
  void release();
  // FUNCTION: BF2 0x00473300
  void queryInterface(unsigned, int) const;
  // FUNCTION: BF2 0x00473320
  void runNextLevel();
  // FUNCTION: BF2 0x00473330
  void setNextLevel();
  // FUNCTION: BF2 0x00473340
  void setTicketState();
  // FUNCTION: BF2 0x00473350
  unsigned int getTicketState();
  // FUNCTION: BF2 0x00473360
  void setDefaultNumberOfTickets();
  // FUNCTION: BF2 0x00473370
  unsigned int getDefaultNumberOfTickets();
  // FUNCTION: BF2 0x00473380
  void setDefaultNumberOfTicketsEx();
  // FUNCTION: BF2 0x00473390
  unsigned int getDefaultNumberOfTicketsEx();
  // FUNCTION: BF2 0x004733a0
  void setDefaultTimeToNextAIWave();
  // FUNCTION: BF2 0x004733b0
  float getDefaultTimeToNextAIWave() const;
  // FUNCTION: BF2 0x004733c0
  void setTicketLossAtEndPerMin();
  // FUNCTION: BF2 0x004733d0
  float getTicketLossAtEndPerMin() const;
  // FUNCTION: BF2 0x004733e0
  void setTicketLossPerMin();
  // FUNCTION: BF2 0x004733f0
  float getTicketLossPerMin() const;
  // FUNCTION: BF2 0x00473460
  int getRef() const;
  // FUNCTION: BF2 0x00878d10
  void* create(unsigned, int, IBase*);

  unsigned int m_unk_0x15;  // +0x15, inferred, seen in 1 method(s)
  unsigned int m_unk_0x92;  // +0x92, inferred, seen in 2 method(s)
  unsigned int m_unk_0x93;  // +0x93, inferred, seen in 2 method(s)
  unsigned int m_unk_0x94;  // +0x94, inferred, seen in 2 method(s)
  unsigned int m_unk_0x98;  // +0x98, inferred, seen in 2 method(s)
  unsigned int m_unk_0x99;  // +0x99, inferred, seen in 2 method(s)
  unsigned int resetState;  // +0xA8, corroborated (local type)
  unsigned char m_unk_0xAE;  // +0xAE, inferred, seen in 2 method(s)
  int field;  // +0x48C, corroborated (local type)
  unsigned int m_unk_0x494;  // +0x494, inferred, seen in 2 method(s)
  unsigned int m_unk_0x49C;  // +0x49C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4A4;  // +0x4A4, inferred, seen in 2 method(s)
  int m_pendingExit;  // +0x4C0, corroborated (local type)
  unsigned int m_unk_0x4C4;  // +0x4C4, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4C8;  // +0x4C8, inferred, seen in 1 method(s)
};
} }
