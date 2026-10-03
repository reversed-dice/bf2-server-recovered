#pragma once
#include <ostream>
#include <string>
#include "IPlayer.h"
namespace dice { namespace hfe {
typedef unsigned int Flag32Bits;
namespace world { class ICameraObject; }
using world::ICameraObject;  // bare 'ICameraObject' resolves to the only class of this name in the binary
using world::IPlayer;  // bare 'IPlayer' resolves to the only class of this name in the binary
class Player {
public:
  // FUNCTION: BF2 0x004944e0
  void getTimeToSpawn() const;
  // FUNCTION: BF2 0x004946b0
  void setIsConnected_bool(bool isConnected);
  // FUNCTION: BF2 0x004946e0
  void reset();
  // FUNCTION: BF2 0x004947a0
  void setSquadInviteMask(int v);
  // FUNCTION: BF2 0x00494820
  void setIsSquadLeader_bool(bool value);
  // FUNCTION: BF2 0x00494820
  void setIsSquadLeader_int(unsigned int value);
  // FUNCTION: BF2 0x00494840
  unsigned int getSatelliteIsReady() const;
  // FUNCTION: BF2 0x00494870
  void setSatelliteIsReady(bool v);
  // FUNCTION: BF2 0x00494880
  void getUAVIsReady() const;
  // FUNCTION: BF2 0x004948b0
  void setUAVIsReady(bool v);
  // FUNCTION: BF2 0x004948c0
  void setVoipSessionId_unsigned_short(unsigned short value);
  // FUNCTION: BF2 0x004948d0
  void setOverheadCameraEnabled(bool enabled);
  // FUNCTION: BF2 0x00494900
  void doAddTouchItem(world::IPlayer*);
  // FUNCTION: BF2 0x00494920
  void setIsTalking_bool(bool talking);
  // FUNCTION: BF2 0x00494950
  bool getIsTalking() const;
  // FUNCTION: BF2 0x00494980
  unsigned int getKitAndUnlockLevelNetworkValueConst() const;
  // FUNCTION: BF2 0x00494980
  virtual unsigned int getCombinedNetworkValue(unsigned int, unsigned int) const;
  // FUNCTION: BF2 0x00494980
  virtual unsigned int getKitNetworkValue() const;
  // FUNCTION: BF2 0x00494980
  virtual unsigned int getUnlockLevelNetworkValue() const;
  // FUNCTION: BF2 0x00494980
  void setIsMuted_bool(bool muted);
  // FUNCTION: BF2 0x004949a0
  void setRadioSpamFlagCount(int v);
  // FUNCTION: BF2 0x004949b0
  void resetSpamFilter();
  // FUNCTION: BF2 0x004949e0
  void setAutoReload(bool v);
  // FUNCTION: BF2 0x00494ad0
  float getNormalizedNightVisionPower() const;
  // FUNCTION: BF2 0x00494c20
  void toggleNightVision();
  // FUNCTION: BF2 0x00494d00
  void disableFlashBangEffect();
  // FUNCTION: BF2 0x00494d90
  void isPlayerInNightMap() const;
  // FUNCTION: BF2 0x00494db0
  float getHitFromDirection_const() const;
  // FUNCTION: BF2 0x00494dc0
  void updateCameraShake(float shake);
  // FUNCTION: BF2 0x00494de0
  float getCameraShake_const() const;
  // FUNCTION: BF2 0x00496050
  void setSquadId_unsigned_int(unsigned int squadId);
  // FUNCTION: BF2 0x00496050
  void setSquadId_unsigned_short(unsigned short squadId);
  // FUNCTION: BF2 0x00496270
  unsigned int updateFlags(Flag32Bits flags, world::IPlayer const& player);
  // FUNCTION: BF2 0x00496280
  unsigned int updateFlags(unsigned int currentFlags, Flag32Bits newFlags);
  // FUNCTION: BF2 0x00496280
  void setFlags(Flag32Bits flags, world::IPlayer const& player);
  // FUNCTION: BF2 0x00496ce0
  void* getFreeCamera() const;
  // FUNCTION: BF2 0x00496d00
  void pickup(std::string name);
  // FUNCTION: BF2 0x00497010
  long getVehicle() const;
  // FUNCTION: BF2 0x004986b0
  void setFreeCameraEnabled(bool);
  // FUNCTION: BF2 0x0049a210
  long getDefaultVehicle();
  // FUNCTION: BF2 0x0049a330
  void setViewDistance(float);
  // FUNCTION: BF2 0x0049a4f0
  float getFov_const() const;
  // FUNCTION: BF2 0x0049ab60
  void setOverheadCameraTopDownView(bool);
  // FUNCTION: BF2 0x0049ab60
  void setOverheadCameraTopDownView_bool(bool arg);
  // FUNCTION: BF2 0x0049e540
  void enableVOHelp_bool();
  // FUNCTION: BF2 0x0049e540
  void setIsCommander(bool flag);
  // FUNCTION: BF2 0x0049e540
  void setIsCommander(unsigned int flag);
  // FUNCTION: BF2 0x004a2180
  unsigned int release();
  // FUNCTION: BF2 0x004a21c0
  void queryInterface(unsigned, int) const;
  // FUNCTION: BF2 0x004a21f0
  unsigned int getClassID() const;
  // FUNCTION: BF2 0x004a2200
  void* getName() const;
  // FUNCTION: BF2 0x004a2210
  void handleUpdate(float, unsigned, int);
  // FUNCTION: BF2 0x004a2220
  int getUpdateFrequencyType() const;
  // FUNCTION: BF2 0x004a2230
  void setUpdateFrequencyType(int v);
  // FUNCTION: BF2 0x004a2240
  void setCamera(world::ICameraObject*);
  // FUNCTION: BF2 0x004a2250
  int getInputId() const;
  // FUNCTION: BF2 0x004a2260
  int getId() const;
  // FUNCTION: BF2 0x004a2270
  float getEndFov() const;
  // FUNCTION: BF2 0x004a2280
  bool getFreeCameraEnabled() const;
  // FUNCTION: BF2 0x004a2290
  void getOverheadCameraTopDownView() const;
  // FUNCTION: BF2 0x004a22c0
  void setCommanderCamOverhead(bool v);
  // FUNCTION: BF2 0x004a22d0
  bool getCommanderCamOverhead() const;
  // FUNCTION: BF2 0x004a22e0
  void toggleFreeCameraEnabled();
  // FUNCTION: BF2 0x004a2300
  void setSpawnAtTick(int v);
  // FUNCTION: BF2 0x004a2310
  int getSpawnAtTick() const;
  // FUNCTION: BF2 0x004a2320
  float getManDownTimeLeft() const;
  // FUNCTION: BF2 0x004a2340
  void getIsManDown();
  // FUNCTION: BF2 0x004a2350
  void getManDownAtTick();
  // FUNCTION: BF2 0x004a2370
  int getTeam() const;
  // FUNCTION: BF2 0x004a2380
  void setKit(int v);
  // FUNCTION: BF2 0x004a2390
  int getKit() const;
  // FUNCTION: BF2 0x004a23a0
  void setKitTimeStamp(double);
  // FUNCTION: BF2 0x004a23b0
  void getKitTimeStamp() const;
  // FUNCTION: BF2 0x004a23c0
  void getIsAIPlayer() const;
  // FUNCTION: BF2 0x004a23d0
  void setIsAlive(bool alive);
  // FUNCTION: BF2 0x004a23f0
  void getIsAlive() const;
  // FUNCTION: BF2 0x004a2400
  void setSuicide(bool v);
  // FUNCTION: BF2 0x004a2410
  void getSuicide() const;
  // FUNCTION: BF2 0x004a2420
  void setPing(unsigned, int);
  // FUNCTION: BF2 0x004a2440
  int getPing() const;
  // FUNCTION: BF2 0x004a2450
  int getInterpolationTime() const;
  // FUNCTION: BF2 0x004a2460
  void setSpawnGroup(int v);
  // FUNCTION: BF2 0x004a2470
  int getSpawnGroup() const;
  // FUNCTION: BF2 0x004a2480
  void* getScoreData() const;
  // FUNCTION: BF2 0x004a2490
  void setFlagHolder(bool v);
  // FUNCTION: BF2 0x004a24a0
  void getFlagHolder() const;
  // FUNCTION: BF2 0x004a24b0
  void setHealRepairedAtTick(unsigned, int, bool, bool);
  // FUNCTION: BF2 0x004a24d0
  int getHealRepairedAtTick() const;
  // FUNCTION: BF2 0x004a24e0
  void setGaveAmmoAtTick(unsigned, int, bool);
  // FUNCTION: BF2 0x004a24f0
  int getGaveAmmoAtTick() const;
  // FUNCTION: BF2 0x004a2500
  void setFailedExitAtTick(int v);
  // FUNCTION: BF2 0x004a2510
  int getFailedExitAtTick() const;
  // FUNCTION: BF2 0x004a2550
  void* getActionBuffer() const;
  // FUNCTION: BF2 0x004a2560
  void* getAIPlayerInput() const;
  // FUNCTION: BF2 0x004a2570
  bool setFiringState(bool state);
  // FUNCTION: BF2 0x004a2590
  unsigned int getFiringState() const;
  // FUNCTION: BF2 0x004a25b0
  bool setAltFiringState_bool(bool state);
  // FUNCTION: BF2 0x004a25d0
  bool setFlareFiringState_bool(bool value);
  // FUNCTION: BF2 0x004a25f0
  bool setSprintState(bool state);
  // FUNCTION: BF2 0x004a2610
  bool setSprintStateLastTick_bool(bool val);
  // FUNCTION: BF2 0x004a2630
  void setReloadState();
  // FUNCTION: BF2 0x004a2640
  unsigned char getAndResetReloadState();
  // FUNCTION: BF2 0x004a2660
  void setIsRemote(bool v);
  // FUNCTION: BF2 0x004a2680
  void setHasSimulatedFrame(bool v);
  // FUNCTION: BF2 0x004a26a0
  int getSquadId() const;
  // FUNCTION: BF2 0x004a26b0
  void setLastTimeCommander(double tm);
  // FUNCTION: BF2 0x004a26c0
  double getLastTimeCommander() const;
  // FUNCTION: BF2 0x004a26d0
  void setCommanderReapplyWaitTime(double val);
  // FUNCTION: BF2 0x004a26e0
  double getCommanderReapplyWaitTime() const;
  // FUNCTION: BF2 0x004a2700
  void setIsInsideCP(bool v);
  // FUNCTION: BF2 0x004a2730
  unsigned int getMinimumBitSize() const;
  // FUNCTION: BF2 0x004a2740
  int getTickCount() const;
  // FUNCTION: BF2 0x004a2750
  void addTick();
  // FUNCTION: BF2 0x004a2760
  void subTick();
  // FUNCTION: BF2 0x004a2770
  void resetTickCounter();
  // FUNCTION: BF2 0x004a2780
  float getTimeOutSideWorld_const() const;
  // FUNCTION: BF2 0x004a27a0
  double getTimeConnected() const;
  // FUNCTION: BF2 0x004a27b0
  void setHitIndicator(bool);
  // FUNCTION: BF2 0x004a27d0
  unsigned int getHitIndicator() const;
  // FUNCTION: BF2 0x004a27f0
  float getCrossHairFadeValue_const() const;
  // FUNCTION: BF2 0x004a2800
  void* getNetworkable() const;
  // FUNCTION: BF2 0x004a2810
  int getSquadInviteMask() const;
  // FUNCTION: BF2 0x004a2820
  bool getIsInvitedToSquad(unsigned int) const;
  // FUNCTION: BF2 0x004a2840
  void setCurrentFiringButton(int v);
  // FUNCTION: BF2 0x004a2850
  int getCurrentFiringButton() const;
  // FUNCTION: BF2 0x004a2860
  void setPersonalDecalTemplate_dice_hfe_world_IObjectTemplate_constptr(void const* value);
  // FUNCTION: BF2 0x004a2870
  void* getPersonalDecalTemplate() const;
  // FUNCTION: BF2 0x004a28b0
  unsigned short getVoipSessionId();
  // FUNCTION: BF2 0x004a28d0
  double getLastTalkTime();
  // FUNCTION: BF2 0x004a28e0
  double getStopTalkingThreshold() const;
  // FUNCTION: BF2 0x004a28f0
  void setVotingStatus(int v);
  // FUNCTION: BF2 0x004a2900
  int getVotingStatus() const;
  // FUNCTION: BF2 0x004a2910
  void setParticipateInVoting(bool v);
  // FUNCTION: BF2 0x004a2920
  bool getParticipateInVoting();
  // FUNCTION: BF2 0x004a2930
  void setTargetOfVote(bool v);
  // FUNCTION: BF2 0x004a2940
  bool getTargetOfVote();
  // FUNCTION: BF2 0x004a2950
  int getProfileId() const;
  // FUNCTION: BF2 0x004a2960
  void setProfileId(int v);
  // FUNCTION: BF2 0x004a2970
  void setTracePlayerId(int v);
  // FUNCTION: BF2 0x004a2980
  int getTracePlayerId() const;
  // FUNCTION: BF2 0x004a2990
  float getBlurValue() const;
  // FUNCTION: BF2 0x004a29a0
  bool getIsNearGasCloud() const;
  // FUNCTION: BF2 0x004a29b0
  void getIsGassed();
  // FUNCTION: BF2 0x004a29d0
  void getIsGasMaskOn() const;
  // FUNCTION: BF2 0x004a29e0
  void getPlayerGasMaskChangeTimer() const;
  // FUNCTION: BF2 0x004a29f0
  void getPlayerNightVisionChangeTimer() const;
  // FUNCTION: BF2 0x004a2a00
  int getRadioSpamFlagCount() const;
  // FUNCTION: BF2 0x004a2a10
  void setRadioSpamBlockedFlagCount(int v);
  // FUNCTION: BF2 0x004a2a20
  int getRadioSpamBlockedFlagCount() const;
  // FUNCTION: BF2 0x004a2a30
  void setRadioSpamFilterFlagTimer(float);
  // FUNCTION: BF2 0x004a2a40
  void getRadioSpamFilterFlagTimer();
  // FUNCTION: BF2 0x004a2a50
  void getPlayerInput();
  // FUNCTION: BF2 0x004a2a80
  void setPeerAddress(std::string const &);
  // FUNCTION: BF2 0x004a2ba0
  int getRef() const;
  // FUNCTION: BF2 0x004a2bf0
  void setInterpolationTime(unsigned, int);

  unsigned int m_unk_0xC;  // +0xC, inferred, seen in 1 method(s)
  unsigned int m_unk_0xD;  // +0xD, inferred, seen in 3 method(s)
  unsigned int m_unk_0xF;  // +0xF, inferred, seen in 2 method(s)
  unsigned char m_unk_0x15;  // +0x15, inferred, seen in 3 method(s)
  unsigned int m_unk_0x16;  // +0x16, inferred, seen in 2 method(s)
  unsigned int m_unk_0x17;  // +0x17, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1A;  // +0x1A, inferred, seen in 4 method(s)
  unsigned int m_unk_0x1B;  // +0x1B, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1C;  // +0x1C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1E;  // +0x1E, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1F;  // +0x1F, inferred, seen in 3 method(s)
  std::ostream os;  // +0x20, corroborated (local type)
  unsigned char m_unk_0x21;  // +0x21, inferred, seen in 3 method(s)
  unsigned int m_unk_0x22;  // +0x22, inferred, seen in 4 method(s)
  unsigned int m_unk_0x23;  // +0x23, inferred, seen in 2 method(s)
  unsigned int m_unk_0x24;  // +0x24, inferred, seen in 2 method(s)
  unsigned int m_unk_0x26;  // +0x26, inferred, seen in 3 method(s)
  bool m_unk_0x27;  // +0x27, inferred, seen in 1 method(s)
  unsigned int m_unk_0x28;  // +0x28, inferred, seen in 1 method(s)
  unsigned char m_unk_0x29;  // +0x29, inferred, seen in 4 method(s)
  unsigned int m_unk_0x2C;  // +0x2C, inferred, seen in 3 method(s)
  unsigned char m_unk_0x2D;  // +0x2D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2E;  // +0x2E, inferred, seen in 2 method(s)
  unsigned char m_unk_0x2F;  // +0x2F, inferred, seen in 3 method(s)
  unsigned int m_unk_0x31;  // +0x31, inferred, seen in 2 method(s)
  unsigned int m_unk_0x34;  // +0x34, inferred, seen in 2 method(s)
  unsigned int m_unk_0x36;  // +0x36, inferred, seen in 2 method(s)
  unsigned int m_unk_0x37;  // +0x37, inferred, seen in 2 method(s)
  unsigned char m_unk_0x3C;  // +0x3C, inferred, seen in 3 method(s)
  unsigned char m_unk_0x3E;  // +0x3E, inferred, seen in 2 method(s)
  unsigned char m_unk_0x40;  // +0x40, inferred, seen in 2 method(s)
  float m_unk_0x42;  // +0x42, inferred, seen in 4 method(s)
  float m_unk_0x43;  // +0x43, inferred, seen in 2 method(s)
  unsigned short m_unk_0x44;  // +0x44, inferred, seen in 2 method(s)
  unsigned int m_unk_0x47;  // +0x47, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4A;  // +0x4A, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4D;  // +0x4D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x50;  // +0x50, inferred, seen in 2 method(s)
  unsigned char m_unk_0x52;  // +0x52, inferred, seen in 2 method(s)
  int m_unk_0x54;  // +0x54, inferred, seen in 3 method(s)
  unsigned short m_unk_0x56;  // +0x56, inferred, seen in 1 method(s)
  unsigned int m_unk_0x59;  // +0x59, inferred, seen in 1 method(s)
  unsigned char m_unk_0x5B;  // +0x5B, inferred, seen in 3 method(s)
  unsigned int m_unk_0x5C;  // +0x5C, inferred, seen in 5 method(s)
  unsigned int m_unk_0x5D;  // +0x5D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5E;  // +0x5E, inferred, seen in 2 method(s)
  unsigned int m_unk_0x5F;  // +0x5F, inferred, seen in 2 method(s)
  unsigned int m_unk_0x60;  // +0x60, inferred, seen in 2 method(s)
  unsigned int m_unk_0x64;  // +0x64, inferred, seen in 3 method(s)
  int m_unk_0x68;  // +0x68, inferred, seen in 2 method(s)
  void* m_unk_0x70;  // +0x70, inferred, seen in 1 method(s)
  unsigned int m_unk_0x78;  // +0x78, inferred, seen in 2 method(s)
  unsigned char m_unk_0x7B;  // +0x7B, inferred, seen in 2 method(s)
  unsigned int m_flags;  // +0x7C, corroborated (local type)
  unsigned char m_unk_0x7D;  // +0x7D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x80;  // +0x80, inferred, seen in 2 method(s)
  unsigned int m_unk_0x81;  // +0x81, inferred, seen in 2 method(s)
  unsigned int m_unk_0x82;  // +0x82, inferred, seen in 2 method(s)
  unsigned int m_unk_0x83;  // +0x83, inferred, seen in 2 method(s)
  unsigned int m_unk_0x84;  // +0x84, inferred, seen in 2 method(s)
  unsigned int m_unk_0x85;  // +0x85, inferred, seen in 2 method(s)
  unsigned int m_unk_0x86;  // +0x86, inferred, seen in 2 method(s)
  unsigned int m_unk_0x87;  // +0x87, inferred, seen in 3 method(s)
  unsigned int m_unk_0x88;  // +0x88, inferred, seen in 4 method(s)
  unsigned int m_unk_0x89;  // +0x89, inferred, seen in 3 method(s)
  unsigned char m_unk_0x8A;  // +0x8A, inferred, seen in 2 method(s)
  unsigned char m_unk_0x8B;  // +0x8B, inferred, seen in 4 method(s)
  unsigned char m_unk_0x8C;  // +0x8C, inferred, seen in 2 method(s)
  unsigned char m_unk_0x8D;  // +0x8D, inferred, seen in 3 method(s)
  void* m_unk_0x90;  // +0x90, inferred, seen in 3 method(s)
  void* m_unk_0x98;  // +0x98, inferred, seen in 1 method(s)
  void* m_game;  // +0xA0, corroborated (local type)
  char m_unk_0xA8;  // +0xA8, inferred, seen in 2 method(s)
  unsigned char m_unk_0xA9;  // +0xA9, inferred, seen in 7 method(s)
  char m_unk_0xAA;  // +0xAA, inferred, seen in 4 method(s)
  unsigned char m_unk_0xAB;  // +0xAB, inferred, seen in 4 method(s)
  unsigned int m_unk_0xAC;  // +0xAC, inferred, seen in 2 method(s)
  unsigned char m_unk_0xB1;  // +0xB1, inferred, seen in 2 method(s)
  unsigned int m_unk_0xB4;  // +0xB4, inferred, seen in 2 method(s)
  unsigned int m_unk_0xD0;  // +0xD0, inferred, seen in 1 method(s)
  unsigned int m_unk_0xD4;  // +0xD4, inferred, seen in 7 method(s)
  unsigned int m_unk_0xD8;  // +0xD8, inferred, seen in 2 method(s)
  unsigned int m_unk_0xDC;  // +0xDC, inferred, seen in 3 method(s)
  unsigned int m_unk_0xE0;  // +0xE0, inferred, seen in 1 method(s)
  unsigned int m_unk_0xE4;  // +0xE4, inferred, seen in 2 method(s)
  void* m_unk_0xE8;  // +0xE8, inferred, seen in 3 method(s)
  char m_unk_0xF4;  // +0xF4, inferred, seen in 9 method(s)
  bool isAlive;  // +0xF5, corroborated (local type)
  unsigned char m_unk_0xF6;  // +0xF6, inferred, seen in 4 method(s)
  unsigned int m_unk_0xF8;  // +0xF8, inferred, seen in 1 method(s)
  unsigned int m_unk_0xFC;  // +0xFC, inferred, seen in 3 method(s)
  unsigned int m_unk_0x104;  // +0x104, inferred, seen in 9 method(s)
  char m_unk_0x108;  // +0x108, inferred, seen in 4 method(s)
  unsigned int m_unk_0x10C;  // +0x10C, inferred, seen in 4 method(s)
  double m_lastTimeCommander;  // +0x110, corroborated (local type)
  unsigned char m_unk_0x114;  // +0x114, inferred, seen in 2 method(s)
  unsigned int m_unk_0x118;  // +0x118, inferred, seen in 2 method(s)
  unsigned int m_unk_0x11C;  // +0x11C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x120;  // +0x120, inferred, seen in 1 method(s)
  unsigned char m_unk_0x124;  // +0x124, inferred, seen in 2 method(s)
  void* m_unk_0x128;  // +0x128, inferred, seen in 2 method(s)
  unsigned int m_unk_0x130;  // +0x130, inferred, seen in 1 method(s)
  unsigned char m_unk_0x134;  // +0x134, inferred, seen in 8 method(s)
  unsigned char m_unk_0x135;  // +0x135, inferred, seen in 6 method(s)
  unsigned char m_unk_0x136;  // +0x136, inferred, seen in 4 method(s)
  unsigned char m_unk_0x137;  // +0x137, inferred, seen in 4 method(s)
  bool m_unk_0x139;  // +0x139, inferred, seen in 2 method(s)
  bool m_unk_0x13A;  // +0x13A, inferred, seen in 2 method(s)
  unsigned int m_unk_0x13C;  // +0x13C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x144;  // +0x144, inferred, seen in 2 method(s)
  unsigned char m_unk_0x148;  // +0x148, inferred, seen in 2 method(s)
  void* m_unk_0x150;  // +0x150, inferred, seen in 1 method(s)
  double m_commanderReapplyWaitTime;  // +0x158, corroborated (local type)
  int field;  // +0x160, corroborated (local type)
  unsigned int m_unk_0x164;  // +0x164, inferred, seen in 2 method(s)
  unsigned char m_unk_0x168;  // +0x168, inferred, seen in 2 method(s)
  unsigned int m_unk_0x16C;  // +0x16C, inferred, seen in 5 method(s)
  unsigned int m_unk_0x170;  // +0x170, inferred, seen in 2 method(s)
  unsigned int m_unk_0x174;  // +0x174, inferred, seen in 4 method(s)
  unsigned char m_unk_0x178;  // +0x178, inferred, seen in 2 method(s)
  unsigned char m_unk_0x179;  // +0x179, inferred, seen in 6 method(s)
  unsigned char m_unk_0x17A;  // +0x17A, inferred, seen in 6 method(s)
  void* m_unk_0x198;  // +0x198, inferred, seen in 1 method(s)
  unsigned int m_unk_0x1B4;  // +0x1B4, inferred, seen in 5 method(s)
  unsigned int m_unk_0x1B8;  // +0x1B8, inferred, seen in 3 method(s)
  unsigned int m_unk_0x1BC;  // +0x1BC, inferred, seen in 4 method(s)
  void* m_unk_0x1C0;  // +0x1C0, inferred, seen in 1 method(s)
  void* m_unk_0x1C8;  // +0x1C8, inferred, seen in 1 method(s)
  void* m_unk_0x1D0;  // +0x1D0, inferred, seen in 2 method(s)
  void* m_unk_0x1D8;  // +0x1D8, inferred, seen in 2 method(s)
  char m_unk_0x1E0;  // +0x1E0, inferred, seen in 2 method(s)
  unsigned char m_unk_0x1E1;  // +0x1E1, inferred, seen in 5 method(s)
  bool m_flareFiringState;  // +0x1E2, corroborated (local type)
  bool m_sprintState;  // +0x1E3, corroborated (local type)
  bool m_sprintStateLastTick;  // +0x1E4, corroborated (local type)
  unsigned char m_unk_0x1E5;  // +0x1E5, inferred, seen in 4 method(s)
  unsigned char m_unk_0x1E6;  // +0x1E6, inferred, seen in 4 method(s)
  unsigned char m_unk_0x1E7;  // +0x1E7, inferred, seen in 4 method(s)
  bool m_isConnected;  // +0x200, corroborated (local type)
  double m_connectedTime;  // +0x208, corroborated (local type)
  unsigned int m_unk_0x210;  // +0x210, inferred, seen in 2 method(s)
  int m_unk_0x214;  // +0x214, inferred, seen in 5 method(s)
  float m_cameraShake;  // +0x218, corroborated (local type)
  int m_unk_0x21C;  // +0x21C, inferred, seen in 4 method(s)
  unsigned char m_unk_0x222;  // +0x222, inferred, seen in 2 method(s)
  void* m_unk_0x224;  // +0x224, inferred, seen in 4 method(s)
  unsigned int m_unk_0x22C;  // +0x22C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x230;  // +0x230, inferred, seen in 2 method(s)
  unsigned int m_unk_0x23C;  // +0x23C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x244;  // +0x244, inferred, seen in 2 method(s)
  unsigned int m_unk_0x248;  // +0x248, inferred, seen in 1 method(s)
  int m_unk_0x254;  // +0x254, inferred, seen in 5 method(s)
  unsigned int m_unk_0x25C;  // +0x25C, inferred, seen in 2 method(s)
  int m_unk_0x260;  // +0x260, inferred, seen in 2 method(s)
  unsigned int m_unk_0x26C;  // +0x26C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x274;  // +0x274, inferred, seen in 2 method(s)
  unsigned int m_unk_0x278;  // +0x278, inferred, seen in 1 method(s)
  unsigned int m_unk_0x284;  // +0x284, inferred, seen in 4 method(s)
  void* m_unk_0x288;  // +0x288, inferred, seen in 2 method(s)
  char m_unk_0x290;  // +0x290, inferred, seen in 1 method(s)
  unsigned int m_unk_0x294;  // +0x294, inferred, seen in 6 method(s)
  unsigned int m_unk_0x298;  // +0x298, inferred, seen in 1 method(s)
  unsigned int m_unk_0x2A0;  // +0x2A0, inferred, seen in 1 method(s)
  void* m_unk_0x2A4;  // +0x2A4, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2AC;  // +0x2AC, inferred, seen in 2 method(s)
  unsigned short m_unk_0x2B0;  // +0x2B0, inferred, seen in 1 method(s)
  unsigned char m_unk_0x2B2;  // +0x2B2, inferred, seen in 2 method(s)
  void* m_unk_0x2B4;  // +0x2B4, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2BC;  // +0x2BC, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2C0;  // +0x2C0, inferred, seen in 1 method(s)
  unsigned int m_unk_0x2C8;  // +0x2C8, inferred, seen in 1 method(s)
  unsigned char m_reloadState;  // +0x2D8, corroborated (local type)
  unsigned int m_unk_0x2DC;  // +0x2DC, inferred, seen in 6 method(s)
  unsigned int m_unk_0x2E0;  // +0x2E0, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2E4;  // +0x2E4, inferred, seen in 3 method(s)
  unsigned int m_unk_0x2EC;  // +0x2EC, inferred, seen in 3 method(s)
  unsigned int m_unk_0x2F0;  // +0x2F0, inferred, seen in 2 method(s)
  unsigned char m_unk_0x2F4;  // +0x2F4, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2FC;  // +0x2FC, inferred, seen in 2 method(s)
  void* m_unk_0x308;  // +0x308, inferred, seen in 1 method(s)
  unsigned char m_unk_0x3E8;  // +0x3E8, inferred, seen in 2 method(s)
  unsigned short m_unk_0x3EA;  // +0x3EA, inferred, seen in 4 method(s)
  unsigned char m_unk_0x3EC;  // +0x3EC, inferred, seen in 4 method(s)
  double m_stopTalkingThreshold;  // +0x3F0, corroborated (local type)
  double m_unk_0x3F8;  // +0x3F8, inferred, seen in 2 method(s)
  unsigned int m_unk_0x400;  // +0x400, inferred, seen in 2 method(s)
  unsigned char m_unk_0x404;  // +0x404, inferred, seen in 4 method(s)
  unsigned char m_unk_0x405;  // +0x405, inferred, seen in 4 method(s)
  unsigned int m_unk_0x408;  // +0x408, inferred, seen in 2 method(s)
  unsigned char m_unk_0x40C;  // +0x40C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x41C;  // +0x41C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x424;  // +0x424, inferred, seen in 2 method(s)
  unsigned int m_unk_0x42C;  // +0x42C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x434;  // +0x434, inferred, seen in 3 method(s)
  unsigned int m_unk_0x438;  // +0x438, inferred, seen in 2 method(s)
  char m_unk_0x43C;  // +0x43C, inferred, seen in 5 method(s)
  unsigned char m_unk_0x43D;  // +0x43D, inferred, seen in 4 method(s)
  unsigned int m_unk_0x440;  // +0x440, inferred, seen in 1 method(s)
  unsigned int m_unk_0x444;  // +0x444, inferred, seen in 5 method(s)
  unsigned int m_unk_0x44C;  // +0x44C, inferred, seen in 7 method(s)
  unsigned char m_unk_0x450;  // +0x450, inferred, seen in 2 method(s)
  unsigned int m_unk_0x454;  // +0x454, inferred, seen in 2 method(s)
  unsigned char nightVisionFlag;  // +0x458, corroborated (local type)
  unsigned char m_unk_0x459;  // +0x459, inferred, seen in 3 method(s)
  unsigned int m_unk_0x45C;  // +0x45C, inferred, seen in 2 method(s)
  unsigned char m_unk_0x461;  // +0x461, inferred, seen in 2 method(s)
  unsigned char m_unk_0x462;  // +0x462, inferred, seen in 3 method(s)
  unsigned char m_unk_0x463;  // +0x463, inferred, seen in 2 method(s)
  unsigned char m_unk_0x464;  // +0x464, inferred, seen in 2 method(s)
  unsigned char m_unk_0x465;  // +0x465, inferred, seen in 2 method(s)
  unsigned char m_unk_0x466;  // +0x466, inferred, seen in 4 method(s)
  unsigned char m_unk_0x467;  // +0x467, inferred, seen in 4 method(s)
  unsigned char m_unk_0x469;  // +0x469, inferred, seen in 3 method(s)
};
} }
