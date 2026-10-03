#pragma once
#include <string>
#include "IPlayer.h"
namespace dice { namespace hfe {
namespace world { class IArmorGLComp; class IObject; class IObjectTemplate; }
using world::IArmorGLComp;  // bare 'IArmorGLComp' resolves to the only class of this name in the binary
using world::IObject;  // bare 'IObject' resolves to the only class of this name in the binary
using world::IObjectTemplate;  // bare 'IObjectTemplate' resolves to the only class of this name in the binary
using world::IPlayer;  // bare 'IPlayer' resolves to the only class of this name in the binary
class Vec3;
class GameLogic {
public:
  // FUNCTION: BF2 0x00472ff0
  int isVoipClientRunning() const;
  // FUNCTION: BF2 0x00473000
  int isLevelLoadedXP() const;
  // FUNCTION: BF2 0x00473010
  int getStartPreStoredNetID() const;
  // FUNCTION: BF2 0x00473020
  int getEndPreStoredNetID() const;
  // FUNCTION: BF2 0x00473030
  void triggerSpecialGameEvent();
  // FUNCTION: BF2 0x00473040
  int getGameStatus() const;
  // FUNCTION: BF2 0x00473050
  int getBeginRoundState() const;
  // FUNCTION: BF2 0x00473060
  void setBeginRoundState(int v);
  // FUNCTION: BF2 0x00473070
  int getNextStateChangeAtTick() const;
  // FUNCTION: BF2 0x00473080
  void setNextStateChangeAtTick(int v);
  // FUNCTION: BF2 0x00473090
  int getNoVehiclesMode() const;
  // FUNCTION: BF2 0x004730a0
  void setNoVehiclesMode(bool v);
  // FUNCTION: BF2 0x004730b0
  void setDropVehicleDeviationRadius(unsigned int, unsigned int);
  // FUNCTION: BF2 0x004730c0
  int getDropVehicleDeviationRadius() const;
  // FUNCTION: BF2 0x004730d0
  int getDropVehicleDeviationMinRadius() const;
  // FUNCTION: BF2 0x004730f0
  const char* getDefaultLevel() const;
  // FUNCTION: BF2 0x00473100
  float getTimeUntilRestartMap() const;
  // FUNCTION: BF2 0x00473110
  int isLevelLoaded() const;
  // FUNCTION: BF2 0x00473120
  void setExtraUAVVehicleFlightHeight(float);
  // FUNCTION: BF2 0x00473130
  float getExtraUAVVehicleFlightHeight() const;
  // FUNCTION: BF2 0x00473140
  void setSupplyDropHeight(float);
  // FUNCTION: BF2 0x00473150
  float getSupplyDropHeight() const;
  // FUNCTION: BF2 0x00473160
  void setVehicleDropHeight(float height);
  // FUNCTION: BF2 0x00473170
  float getVehicleDropHeight() const;
  // FUNCTION: BF2 0x00473180
  void setSupplyDropNumSecsToLive(float value);
  // FUNCTION: BF2 0x00473190
  float getSupplyDropNumSecsToLive() const;
  // FUNCTION: BF2 0x004731a0
  void setFeslEnvironment(int v);
  // FUNCTION: BF2 0x004731b0
  int getFeslEnvironment() const;
  // FUNCTION: BF2 0x004731f0
  void* getGroundDecalObject() const;
  // FUNCTION: BF2 0x00473200
  void setHitIndicationThreshold();
  // FUNCTION: BF2 0x00473210
  float getHitIndicationThreshold() const;
  // FUNCTION: BF2 0x00473220
  void setDebugMissiles(int value);
  // FUNCTION: BF2 0x00473230
  unsigned int getDebugMissiles();
  // FUNCTION: BF2 0x00473240
  void setDebugReplenish(unsigned int val);
  // FUNCTION: BF2 0x00473250
  unsigned int getDebugReplenish();
  // FUNCTION: BF2 0x00473260
  float getUAVActiveTime() const;
  // FUNCTION: BF2 0x00473270
  float getSatelliteScanActiveTime() const;
  // FUNCTION: BF2 0x00473280
  float getUAVReloadTime() const;
  // FUNCTION: BF2 0x00473290
  float getUAVRadius() const;
  // FUNCTION: BF2 0x004732a0
  float getSatelliteScanReloadTime() const;
  // FUNCTION: BF2 0x004732b0
  float getSatelliteScanVisibleTime() const;
  // FUNCTION: BF2 0x00473420
  void getBeforeSpawnCameraDirection() const;
  // FUNCTION: BF2 0x00473440
  void getBeforeSpawnCameraPosition() const;
  // FUNCTION: BF2 0x00475320
  int isServer() const;
  // FUNCTION: BF2 0x00475330
  unsigned int reSpawnPlayer();
  // FUNCTION: BF2 0x00475340
  unsigned int playEffect() const;
  // FUNCTION: BF2 0x00475350
  void handlePickup();
  // FUNCTION: BF2 0x00475360
  void handleDrop();
  // FUNCTION: BF2 0x00475370
  unsigned int spawnObject() const;
  // FUNCTION: BF2 0x00475380
  void setUseActiveCombatArea(bool v);
  // FUNCTION: BF2 0x00475390
  int getUseActiveCombatArea() const;
  // FUNCTION: BF2 0x004753a0
  void setActiveCombatArea(float param1, float param2, float param3, float param4);
  // FUNCTION: BF2 0x00475440
  void getActiveCombatArea(float* param_2, float* param_3, float* param_4, float* param_5);
  // FUNCTION: BF2 0x00475470
  const char* getKits() const;
  // FUNCTION: BF2 0x00475480
  unsigned int handleGameEventManagerEvent();
  // FUNCTION: BF2 0x00475490
  void checkPlayerTriggers();
  // FUNCTION: BF2 0x004754a0
  void init();
  // FUNCTION: BF2 0x00475510
  unsigned int close();
  // FUNCTION: BF2 0x00475520
  void endLoadStats();
  // FUNCTION: BF2 0x00475560
  void storeVoipServerInfo(bool enabled, unsigned long addr, unsigned short port, unsigned short extra, int param);
  // FUNCTION: BF2 0x00475590
  void getVoipServerInfo(
        bool&, unsigned int&,
        unsigned short&, unsigned short&,
        int&) const;
  // FUNCTION: BF2 0x004755c0
  unsigned int startupVoipClient();
  // FUNCTION: BF2 0x004755d0
  void update();
  // FUNCTION: BF2 0x004755e0
  const char* getControlPointMap() const;
  // FUNCTION: BF2 0x004755f0
  const char* getFlagMap() const;
  // FUNCTION: BF2 0x00475600
  const char* getObjectSpawnerMap() const;
  // FUNCTION: BF2 0x00475610
  const char* getSupplyDepotMap() const;
  // FUNCTION: BF2 0x00475620
  const char* getPcoMap() const;
  // FUNCTION: BF2 0x00475630
  const char* getProjectileMap() const;
  // FUNCTION: BF2 0x00475640
  const char* getStrategicObjectMap();
  // FUNCTION: BF2 0x00475650
  const char* getTargetObjectMap() const;
  // FUNCTION: BF2 0x00475660
  const char* getRemoteControlledObjectMap() const;
  // FUNCTION: BF2 0x00475670
  unsigned int giveDamage();
  // FUNCTION: BF2 0x00475680
  void handleExplosion(Vec3, float, int, float, world::IPlayer*, world::IArmorGLComp*, int, world::IObject*, world::IObject*, float, world::IObject*, world::IObject*, float, bool, bool);
  // FUNCTION: BF2 0x004756e0
  void* getVoiceMessages() const;
  // FUNCTION: BF2 0x004756f0
  int isPrecaching() const;
  // FUNCTION: BF2 0x00475700
  void setEnableVoHelp(bool v);
  // FUNCTION: BF2 0x00475710
  int getEnableVoHelp() const;
  // FUNCTION: BF2 0x00475720
  void setAirMouseInverted(bool v);
  // FUNCTION: BF2 0x00475730
  unsigned char getAirMouseInverted();
  // FUNCTION: BF2 0x00475820
  void setAirMouseSensitivity(float sensitivity);
  // FUNCTION: BF2 0x00475830
  float getAirMouseSensitivity();
  // FUNCTION: BF2 0x00475ae0
  void* getNumberOfControlPointGroups() const;
  // FUNCTION: BF2 0x00475c80
  unsigned int playCollisionEffect() const;
  // FUNCTION: BF2 0x00475c90
  void refreshTriggerables();
  // FUNCTION: BF2 0x004761e0
  void killAllPlayers();
  // FUNCTION: BF2 0x00476420
  void* getRemoteControlledObject(unsigned int id);
  // FUNCTION: BF2 0x004768d0
  void* getObjectSpawner(unsigned int id);
  // FUNCTION: BF2 0x00476910
  void* getTargetObject(unsigned int id);
  // FUNCTION: BF2 0x00476ca0
  void* getControlPoint(unsigned int id);
  // FUNCTION: BF2 0x00476f00
  void addFlag(world::IObject*);
  // FUNCTION: BF2 0x00476f30
  void addObjectSpawner(world::IObject*);
  // FUNCTION: BF2 0x00476f60
  void addSupplyDepot(world::IObject*);
  // FUNCTION: BF2 0x00476f90
  void addPco(world::IObject*);
  // FUNCTION: BF2 0x00476fc0
  void addProjectile(world::IObject*);
  // FUNCTION: BF2 0x00477060
  void spawnMultipleObjects(world::IObjectTemplate const *);
  // FUNCTION: BF2 0x00483b50
  void setTeamLanguage(int team, const std::string& language);
  // FUNCTION: BF2 0x00483b80
  const char** getTeamLanguage(int team) const;
  // FUNCTION: BF2 0x00483ba0
  void setTeamFlag(int id, std::string const& s);
  // FUNCTION: BF2 0x00483bd0
  char* getTeamFlag(int id);
  // FUNCTION: BF2 0x00483c80
  const char** getTeamDropVehicle_int_const(int param) const;
  // FUNCTION: BF2 0x00483ca0
  void setNumDropVehiclesForTeam(int team, int numVehicles);
  // FUNCTION: BF2 0x00483cc0
  unsigned int getNumDropVehiclesForTeam(int team) const;
  // FUNCTION: BF2 0x00485650
  unsigned int getTeamFromName(const std::string& name);
  // FUNCTION: BF2 0x00486a70
  void release();
  // FUNCTION: BF2 0x00486a90
  void* queryInterface(unsigned int iid) const;
  // FUNCTION: BF2 0x004871a0
  int getRef() const;

  unsigned int m_unk_0x2;  // +0x2, inferred, seen in 3 method(s)
  unsigned int m_unk_0x4;  // +0x4, inferred, seen in 2 method(s)
  unsigned int m_unk_0xA;  // +0xA, inferred, seen in 2 method(s)
  unsigned int m_unk_0x10;  // +0x10, inferred, seen in 4 method(s)
  unsigned int m_unk_0x14;  // +0x14, inferred, seen in 3 method(s)
  unsigned int m_unk_0x17;  // +0x17, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1D;  // +0x1D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x23;  // +0x23, inferred, seen in 2 method(s)
  void* m_unk_0x28;  // +0x28, inferred, seen in 1 method(s)
  unsigned int m_unk_0x29;  // +0x29, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2F;  // +0x2F, inferred, seen in 2 method(s)
  unsigned int m_unk_0x35;  // +0x35, inferred, seen in 2 method(s)
  unsigned int m_unk_0x3B;  // +0x3B, inferred, seen in 2 method(s)
  unsigned int m_unk_0x41;  // +0x41, inferred, seen in 2 method(s)
  unsigned int m_unk_0x47;  // +0x47, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4D;  // +0x4D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x53;  // +0x53, inferred, seen in 2 method(s)
  unsigned int m_unk_0x59;  // +0x59, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5F;  // +0x5F, inferred, seen in 2 method(s)
  unsigned int m_unk_0x69;  // +0x69, inferred, seen in 2 method(s)
  unsigned int m_unk_0x6A;  // +0x6A, inferred, seen in 2 method(s)
  unsigned int m_unk_0x6C;  // +0x6C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x71;  // +0x71, inferred, seen in 2 method(s)
  unsigned char m_unk_0x74;  // +0x74, inferred, seen in 3 method(s)
  unsigned int m_unk_0x75;  // +0x75, inferred, seen in 2 method(s)
  unsigned int m_unk_0x78;  // +0x78, inferred, seen in 2 method(s)
  unsigned int m_unk_0x7A;  // +0x7A, inferred, seen in 2 method(s)
  unsigned char m_unk_0x7F;  // +0x7F, inferred, seen in 5 method(s)
  unsigned short m_unk_0x81;  // +0x81, inferred, seen in 5 method(s)
  unsigned int m_unk_0x82;  // +0x82, inferred, seen in 5 method(s)
  unsigned char m_unk_0x84;  // +0x84, inferred, seen in 2 method(s)
  unsigned int m_unk_0x85;  // +0x85, inferred, seen in 2 method(s)
  unsigned int m_unk_0x86;  // +0x86, inferred, seen in 3 method(s)
  unsigned int m_unk_0x87;  // +0x87, inferred, seen in 3 method(s)
  unsigned int m_unk_0x88;  // +0x88, inferred, seen in 3 method(s)
  unsigned char m_unk_0x89;  // +0x89, inferred, seen in 3 method(s)
  unsigned int m_unk_0x8A;  // +0x8A, inferred, seen in 2 method(s)
  unsigned int m_unk_0x8B;  // +0x8B, inferred, seen in 2 method(s)
  unsigned int m_unk_0x8C;  // +0x8C, inferred, seen in 2 method(s)
  unsigned char m_unk_0x8D;  // +0x8D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x8E;  // +0x8E, inferred, seen in 2 method(s)
  unsigned int m_unk_0x8F;  // +0x8F, inferred, seen in 2 method(s)
  unsigned char m_unk_0x91;  // +0x91, inferred, seen in 2 method(s)
  unsigned int m_unk_0xA8;  // +0xA8, inferred, seen in 1 method(s)
  unsigned char m_unk_0xAC;  // +0xAC, inferred, seen in 5 method(s)
  unsigned char m_unk_0xAD;  // +0xAD, inferred, seen in 5 method(s)
  unsigned char m_unk_0xAE;  // +0xAE, inferred, seen in 3 method(s)
  void* m_unk_0x120;  // +0x120, inferred, seen in 1 method(s)
  void* m_unk_0x128;  // +0x128, inferred, seen in 1 method(s)
  void* m_unk_0x138;  // +0x138, inferred, seen in 2 method(s)
  void* m_unk_0x168;  // +0x168, inferred, seen in 1 method(s)
  void* m_unk_0x198;  // +0x198, inferred, seen in 1 method(s)
  void* m_unk_0x1B8;  // +0x1B8, inferred, seen in 1 method(s)
  void* m_unk_0x1C8;  // +0x1C8, inferred, seen in 1 method(s)
  void* m_unk_0x1E8;  // +0x1E8, inferred, seen in 1 method(s)
  void* m_unk_0x1F8;  // +0x1F8, inferred, seen in 1 method(s)
  void* m_unk_0x228;  // +0x228, inferred, seen in 1 method(s)
  void* m_unk_0x258;  // +0x258, inferred, seen in 1 method(s)
  void* m_unk_0x288;  // +0x288, inferred, seen in 1 method(s)
  void* m_unk_0x2B8;  // +0x2B8, inferred, seen in 1 method(s)
  void* m_unk_0x2E8;  // +0x2E8, inferred, seen in 1 method(s)
  void* m_unk_0x2F0;  // +0x2F0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x2F8;  // +0x2F8, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2FC;  // +0x2FC, inferred, seen in 4 method(s)
  void* m_unk_0x300;  // +0x300, inferred, seen in 1 method(s)
  void* m_unk_0x338;  // +0x338, inferred, seen in 1 method(s)
  void* m_unk_0x340;  // +0x340, inferred, seen in 1 method(s)
  unsigned int m_unk_0x34C;  // +0x34C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x350;  // +0x350, inferred, seen in 2 method(s)
  unsigned int m_unk_0x354;  // +0x354, inferred, seen in 4 method(s)
  void* m_unk_0x358;  // +0x358, inferred, seen in 1 method(s)
  unsigned int m_unk_0x374;  // +0x374, inferred, seen in 2 method(s)
  unsigned int m_unk_0x39C;  // +0x39C, inferred, seen in 2 method(s)
  unsigned char m_unk_0x3A0;  // +0x3A0, inferred, seen in 2 method(s)
  unsigned char m_unk_0x3A1;  // +0x3A1, inferred, seen in 4 method(s)
  unsigned int m_unk_0x3A4;  // +0x3A4, inferred, seen in 3 method(s)
  unsigned int m_unk_0x3A8;  // +0x3A8, inferred, seen in 1 method(s)
  float m_vehicleDropHeight;  // +0x3AC, corroborated (local type)
  unsigned int m_unk_0x3C0;  // +0x3C0, inferred, seen in 2 method(s)
  void* m_unk_0x3D8;  // +0x3D8, inferred, seen in 1 method(s)
  void* m_unk_0x3E0;  // +0x3E0, inferred, seen in 1 method(s)
  void* m_unk_0x3E8;  // +0x3E8, inferred, seen in 1 method(s)
  void* m_unk_0x3F0;  // +0x3F0, inferred, seen in 1 method(s)
  unsigned char voipEnabled;  // +0x3F8, corroborated (local type)
  void* m_unk_0x400;  // +0x400, inferred, seen in 2 method(s)
  unsigned short m_unk_0x408;  // +0x408, inferred, seen in 2 method(s)
  unsigned short m_unk_0x40A;  // +0x40A, inferred, seen in 7 method(s)
  bool field;  // +0x40C, corroborated (local type)
  unsigned int m_unk_0x410;  // +0x410, inferred, seen in 2 method(s)
  unsigned char m_unk_0x420;  // +0x420, inferred, seen in 2 method(s)
  unsigned int m_unk_0x424;  // +0x424, inferred, seen in 3 method(s)
  unsigned int m_unk_0x428;  // +0x428, inferred, seen in 2 method(s)
  unsigned int m_unk_0x42C;  // +0x42C, inferred, seen in 5 method(s)
  unsigned int m_unk_0x434;  // +0x434, inferred, seen in 3 method(s)
  unsigned int m_unk_0x43C;  // +0x43C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x444;  // +0x444, inferred, seen in 3 method(s)
  char m_unk_0x448;  // +0x448, inferred, seen in 3 method(s)
  unsigned int m_unk_0x44C;  // +0x44C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x450;  // +0x450, inferred, seen in 1 method(s)
  unsigned int m_unk_0x454;  // +0x454, inferred, seen in 3 method(s)
  float m_extraUAVVehicleFlightHeight;  // +0x458, corroborated (local type)
  float m_satelliteScanActiveTime;  // +0x45C, corroborated (local type)
  unsigned int m_unk_0x460;  // +0x460, inferred, seen in 1 method(s)
  unsigned int m_unk_0x464;  // +0x464, inferred, seen in 3 method(s)
  unsigned char m_unk_0x468;  // +0x468, inferred, seen in 2 method(s)
  unsigned int m_unk_0x46C;  // +0x46C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x470;  // +0x470, inferred, seen in 1 method(s)
  unsigned int m_unk_0x474;  // +0x474, inferred, seen in 3 method(s)
  unsigned int m_unk_0x478;  // +0x478, inferred, seen in 1 method(s)
  unsigned char m_unk_0x488;  // +0x488, inferred, seen in 2 method(s)
};
} }
