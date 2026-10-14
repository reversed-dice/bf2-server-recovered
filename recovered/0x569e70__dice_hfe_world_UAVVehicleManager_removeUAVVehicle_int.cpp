// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x569e70
typedef void* (*FnGet)(void*);
typedef void (*FnEv)(void*, void*);
namespace dice { namespace hfe {
class PostRemoteEvent {
public:
  PostRemoteEvent(int cat, unsigned int a, bool b, void* c, unsigned int d, float e);
  char _pad[0x58];
};
class GameLogic {
public:
  char _pad[0x118];
  void (*postEvent)(void*, void*);
};
extern GameLogic* game;
namespace world {
class ObjectManager {
public:
  char _pad[0x28];
  void (*destroy)(void*, void*);
};
extern ObjectManager* objectManager;
struct ManagedObject {
  virtual void v0();
  char _pad[0x8];
};
struct Payload { unsigned int id; int idx; };
class UAVVehicleManager {
public:
  unsigned char _pad0[0x8];
  ManagedObject* m_vehicles[2];
  char m_used[8];
  void removeUAVVehicle(int idx);
};

void UAVVehicleManager::removeUAVVehicle(int idx) {
    int i = idx - 1;
    ManagedObject* p = m_vehicles[i];
    void* v = ((FnGet)(*(void***)p)[0x1b0 / 8])(p);
    unsigned int id = 0xffffffff;
    if (v != 0) id = *(unsigned short*)((char*)v + 8);
    Payload pl;
    pl.idx = idx;
    pl.id = id;
    FnEv f = (FnEv)(*(void***)game)[0x118 / 8];
    PostRemoteEvent* ev = new PostRemoteEvent(0, 0x14, false, &pl, 8, 0.0f);
    f(game, ev);
    ((void (*)(void*, void*))(*(void***)objectManager)[0x28 / 8])(objectManager, m_vehicles[i]);
    m_vehicles[i] = 0;
    m_used[i] = 0;
}
} } }
