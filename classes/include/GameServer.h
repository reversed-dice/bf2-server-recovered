#pragma once
#include <string>
#include "IPlayer.h"
#include "ServerConnection.h"
namespace dice { namespace hfe {
namespace io { class ConnectionStatus; }
namespace world { class IObject; }
using io::ConnectionStatus;  // bare 'ConnectionStatus' resolves to the only class of this name in the binary
class Game;
class GameEvent;
class IBase;
using world::IObject;  // bare 'IObject' resolves to the only class of this name in the binary
using world::IPlayer;  // bare 'IPlayer' resolves to the only class of this name in the binary
class ServerConnection;
class GameServer {
public:
  // FUNCTION: BF2 0x004536f0
  void getClient(unsigned int) const;
  // FUNCTION: BF2 0x00453750
  void getPlayer(int) const;
  // FUNCTION: BF2 0x00453890
  unsigned char say(std::string const&);
  // FUNCTION: BF2 0x004538c0
  bool sayAll(const std::string& text);
  // FUNCTION: BF2 0x004538f0
  unsigned char sayTeam(int, const std::string&);
  // FUNCTION: BF2 0x00453940
  void destroyObject(int);
  // FUNCTION: BF2 0x00453990
  bool destroyObject(world::IObject*);
  // FUNCTION: BF2 0x004539b0
  void confirmGhost(int, unsigned, int);
  // FUNCTION: BF2 0x00453a10
  void handleUnloadLevel();
  // FUNCTION: BF2 0x00453a50
  void clientSendPlayerDatabase();
  // FUNCTION: BF2 0x00453a50
  void* getClient() const;
  // FUNCTION: BF2 0x00453a70
  void getConnectionStatus(int, io::ConnectionStatus&);
  // FUNCTION: BF2 0x00453b20
  void simulatePlayerCollisions(world::IPlayer*, float);
  // FUNCTION: BF2 0x00453bb0
  void toggleFreeCamera(world::IPlayer* player);
  // FUNCTION: BF2 0x00453bc0
  unsigned int isPlayingDemo();
  // FUNCTION: BF2 0x00453bd0
  void setSimulationRate();
  // FUNCTION: BF2 0x00453be0
  void getSimulationRate() const;
  // FUNCTION: BF2 0x00453c00
  void debugShowGhostPriorities();
  // FUNCTION: BF2 0x00453c10
  unsigned int isRecordingDemo() const;
  // FUNCTION: BF2 0x00453d00
  int getNumDroppedFrames() const;
  // FUNCTION: BF2 0x00453d10
  int getNumOvershotFrames() const;
  // FUNCTION: BF2 0x00453d20
  void sendUDPPacket(const char* data, unsigned short len, void* addr, int param);
  // FUNCTION: BF2 0x00453d40
  void* getNetServer() const;
  // FUNCTION: BF2 0x00453d50
  unsigned int isPythonValid();
  // FUNCTION: BF2 0x00453d80
  void setPythonValid(int, bool);
  // FUNCTION: BF2 0x00453da0
  int isClientReady(int);
  // FUNCTION: BF2 0x00453da0
  long* getClient(int) const;
  // FUNCTION: BF2 0x00453dc0
  unsigned int getConnectionState(int) const;
  // FUNCTION: BF2 0x00453e70
  void clientSendDatabase(int);
  // FUNCTION: BF2 0x004546b0
  std::string getName() const;
  // FUNCTION: BF2 0x004549a0
  unsigned long long getConnection(unsigned int) const;
  // FUNCTION: BF2 0x004558e0
  void authDrm(int);
  // FUNCTION: BF2 0x00455920
  void authXPack(int);
  // FUNCTION: BF2 0x00455af0
  void clientLoadLevel_int(int arg);
  // FUNCTION: BF2 0x0045b7e0
  bool getConnectionIpAndPort(int playerId, std::string& out);
  // FUNCTION: BF2 0x0045b7e0
  bool getPlayerConnectionIpAndPort(world::IPlayer* player, std::string& out);
  // FUNCTION: BF2 0x0045e450
  void confirmReset(int);
  // FUNCTION: BF2 0x0045e470
  void clientAckedEndOfRoundGuard(int);
  // FUNCTION: BF2 0x00464c20
  void addRef();
  // FUNCTION: BF2 0x00464c40
  void release();
  // FUNCTION: BF2 0x00464c80
  void queryInterface(unsigned, int) const;
  // FUNCTION: BF2 0x00464cb0
  unsigned int load();
  // FUNCTION: BF2 0x00464cc0
  void* getStatsMonitor() const;
  // FUNCTION: BF2 0x00464cd0
  int getCurrentInputIndex() const;
  // FUNCTION: BF2 0x00464ce0
  void* getNetworkStats() const;
  // FUNCTION: BF2 0x00464d00
  void* getStatsManager() const;
  // FUNCTION: BF2 0x00464d20
  int getInitComplete() const;
  // FUNCTION: BF2 0x00464d40
  int getIsInternetServer() const;
  // FUNCTION: BF2 0x00464d60
  void setCurrentPersistenceObject(IBase* obj);
  // FUNCTION: BF2 0x00464d80
  void* getCurrentPersistenceObject() const;
  // FUNCTION: BF2 0x00464da0
  void* getAutoRecorder() const;
  // FUNCTION: BF2 0x00464dc0
  int useContentChecking() const;
  // FUNCTION: BF2 0x00464dd0
  int isPunkBusterEnabled() const;
  // FUNCTION: BF2 0x00465150
  void sendGameEvent(unsigned int, GameEvent*, bool, bool);
  // FUNCTION: BF2 0x00465150
  void sendGameEventIfConnected(unsigned int, GameEvent*);
  // FUNCTION: BF2 0x00465160
  void sendGameEvent(unsigned int eventId, GameEvent* event);
  // FUNCTION: BF2 0x004653e0
  int getRef() const;
  // FUNCTION: BF2 0x00466360
  void sendGameEventToAllConnected(GameEvent*);
  // FUNCTION: BF2 0x00466370
  void sendGameEventToAll(GameEvent* ev);
  // FUNCTION: BF2 0x00466370
  void sendGameEventToAll(GameEvent* ev, bool broadcast, bool save);
  // FUNCTION: BF2 0x00466380
  void sendGameEventToAllPlaying(GameEvent* event);
  // FUNCTION: BF2 0x008adc60
  void* create(unsigned, int, IBase*);

  unsigned int m_unk_0x12;  // +0x12, inferred, seen in 3 method(s)
  unsigned int m_unk_0x15;  // +0x15, inferred, seen in 2 method(s)
  unsigned int m_unk_0x18;  // +0x18, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1E;  // +0x1E, inferred, seen in 2 method(s)
  unsigned int m_unk_0x22;  // +0x22, inferred, seen in 1 method(s)
  unsigned int m_unk_0x23;  // +0x23, inferred, seen in 4 method(s)
  unsigned int m_unk_0x24;  // +0x24, inferred, seen in 2 method(s)
  unsigned int m_unk_0x25;  // +0x25, inferred, seen in 2 method(s)
  unsigned int m_unk_0x27;  // +0x27, inferred, seen in 4 method(s)
  unsigned int m_unk_0x29;  // +0x29, inferred, seen in 3 method(s)
  unsigned int m_unk_0x2A;  // +0x2A, inferred, seen in 3 method(s)
  unsigned char m_unk_0x2B;  // +0x2B, inferred, seen in 3 method(s)
  unsigned int m_unk_0x2D;  // +0x2D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x2E;  // +0x2E, inferred, seen in 2 method(s)
  unsigned int m_unk_0x33;  // +0x33, inferred, seen in 2 method(s)
  unsigned int m_unk_0x3B;  // +0x3B, inferred, seen in 2 method(s)
  unsigned char m_unk_0x3C;  // +0x3C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x3E;  // +0x3E, inferred, seen in 2 method(s)
  unsigned char m_unk_0x3F;  // +0x3F, inferred, seen in 3 method(s)
  unsigned int m_unk_0x43;  // +0x43, inferred, seen in 2 method(s)
  unsigned int m_unk_0x49;  // +0x49, inferred, seen in 2 method(s)
  unsigned int m_unk_0x4F;  // +0x4F, inferred, seen in 2 method(s)
  void* m_unk_0x50;  // +0x50, inferred, seen in 2 method(s)
  unsigned int m_unk_0x55;  // +0x55, inferred, seen in 2 method(s)
  void* m_unk_0x58;  // +0x58, inferred, seen in 1 method(s)
  unsigned int m_unk_0x5B;  // +0x5B, inferred, seen in 2 method(s)
  unsigned char m_unk_0x60;  // +0x60, inferred, seen in 3 method(s)
  unsigned int m_unk_0x63;  // +0x63, inferred, seen in 2 method(s)
  unsigned int m_unk_0x64;  // +0x64, inferred, seen in 3 method(s)
  unsigned char m_unk_0x66;  // +0x66, inferred, seen in 2 method(s)
  unsigned int m_unk_0x6C;  // +0x6C, inferred, seen in 1 method(s)
  char m_unk_0x74;  // +0x74, inferred, seen in 2 method(s)
  volatile int refCount;  // +0x90, corroborated (local type)
  unsigned int m_unk_0xA8;  // +0xA8, inferred, seen in 1 method(s)
  void* udpSocket;  // +0xB0, corroborated (local type)
  void* m_unk_0xF8;  // +0xF8, inferred, seen in 1 method(s)
  void* m_unk_0x100;  // +0x100, inferred, seen in 24 method(s)
  void* m_unk_0x108;  // +0x108, inferred, seen in 1 method(s)
  int m_unk_0x110;  // +0x110, inferred, seen in 3 method(s)
  int m_unk_0x118;  // +0x118, inferred, seen in 1 method(s)
  unsigned int m_unk_0x11C;  // +0x11C, inferred, seen in 4 method(s)
  unsigned int m_unk_0x120;  // +0x120, inferred, seen in 1 method(s)
  unsigned int m_unk_0x124;  // +0x124, inferred, seen in 1 method(s)
  unsigned int m_unk_0x128;  // +0x128, inferred, seen in 1 method(s)
  unsigned int m_unk_0x12C;  // +0x12C, inferred, seen in 1 method(s)
  void* m_unk_0x140;  // +0x140, inferred, seen in 1 method(s)
  float m_unk_0x14C;  // +0x14C, inferred, seen in 3 method(s)
  unsigned int m_unk_0x154;  // +0x154, inferred, seen in 3 method(s)
  char m_unk_0x158;  // +0x158, inferred, seen in 1 method(s)
  void* m_unk_0x160;  // +0x160, inferred, seen in 2 method(s)
  unsigned int m_unk_0x16C;  // +0x16C, inferred, seen in 2 method(s)
  unsigned int m_unk_0x174;  // +0x174, inferred, seen in 2 method(s)
  void* m_unk_0x178;  // +0x178, inferred, seen in 5 method(s)
  void* m_unk_0x180;  // +0x180, inferred, seen in 2 method(s)
  void* m_unk_0x188;  // +0x188, inferred, seen in 1 method(s)
  unsigned int m_unk_0x1B8;  // +0x1B8, inferred, seen in 1 method(s)
  void* m_unk_0x1D0;  // +0x1D0, inferred, seen in 3 method(s)
  unsigned int m_unk_0x1DC;  // +0x1DC, inferred, seen in 2 method(s)
  void* m_unk_0x1E8;  // +0x1E8, inferred, seen in 1 method(s)
  int field;  // +0x1F0, corroborated (local type)
  unsigned int m_unk_0x1F4;  // +0x1F4, inferred, seen in 3 method(s)
  unsigned char m_unk_0x1F8;  // +0x1F8, inferred, seen in 1 method(s)
  unsigned char m_unk_0x1F9;  // +0x1F9, inferred, seen in 4 method(s)
  void* m_unk_0x200;  // +0x200, inferred, seen in 1 method(s)
  unsigned char m_unk_0x300;  // +0x300, inferred, seen in 1 method(s)
  unsigned char m_unk_0x301;  // +0x301, inferred, seen in 4 method(s)
  void* m_unk_0x308;  // +0x308, inferred, seen in 2 method(s)
  void* m_unk_0x310;  // +0x310, inferred, seen in 1 method(s)
  int m_unk_0x318;  // +0x318, inferred, seen in 1 method(s)
  unsigned char m_unk_0x31C;  // +0x31C, inferred, seen in 3 method(s)
  unsigned char m_unk_0x31D;  // +0x31D, inferred, seen in 4 method(s)
  int m_unk_0x320;  // +0x320, inferred, seen in 1 method(s)
  void* m_unk_0x328;  // +0x328, inferred, seen in 1 method(s)
  char m_unk_0x330;  // +0x330, inferred, seen in 1 method(s)
  unsigned char m_unk_0x331;  // +0x331, inferred, seen in 3 method(s)
};
} }
