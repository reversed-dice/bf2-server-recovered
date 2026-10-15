// BF2_FLAGS: -fno-strict-aliasing -fno-tree-ter
// FUNCTION: BF2 0x4c5840
typedef void (*Fn128)(void*, void*);
typedef void (*FnEvt)(void*, int, int, int*, float);
namespace dice { namespace hfe {
class PostRemoteEvent {
public:
  PostRemoteEvent(int cat, unsigned int a, bool b, void* c, unsigned int d, float e);
  char _pad[0x58];
};
class Team {
public:
  int getCommander();
  int getTeamId() const;
  char _pad[0x44];
  float m_44;
};
class GameLogic { public: char _pad[0x128]; };
class EventManager { public: char _pad[0x28]; };
class SquadManager { public: char _pad[0x44]; float m_44; };
extern GameLogic* game;
extern EventManager* eventManager;
extern SquadManager* squadManager;
class CommanderManager {
public:
  unsigned char _pad[0x38];
  void* m_holder;
  void resignCommander(Team* team);
  void setCommander(int id, Team* team);
};
void CommanderManager::resignCommander(Team* team) {
    int cid = team->getCommander();
    int tid = team->getTeamId();
    setCommander(-1, team);
    Fn128 send = *(Fn128*)(*(char**)game + 0x128);
    PostRemoteEvent* ev = new PostRemoteEvent(2, 0x25, true, &cid, 4, 0.0f);
    send(game, ev);
    int* p = new int[1];
    p[0] = tid;
    if (m_holder != 0) {
        ((FnEvt)(*(void***)eventManager)[0x28 / 8])(eventManager, 0, 7, p, squadManager->m_44);
    }
}
} }
