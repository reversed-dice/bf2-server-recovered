// FUNCTION: BF2 0x4711d0
typedef int EventCategory;

class PostRemoteEvent {
public:
  PostRemoteEvent(EventCategory cat, unsigned int a, bool b, void* c, unsigned int d, float e);
  char _pad[88];
};

struct IPlayerStub {
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void v3();
  virtual void v4();
  virtual void v5();
  virtual void v6();
  virtual void v7();
  virtual void v8();
  virtual void v9();
  virtual void v10();
  virtual void v11();
  virtual void v12();
  virtual void v13();
  virtual void v14();
  virtual void v15();
  virtual void v16();
  virtual void v17();
  virtual void v18();
  virtual void v19();
  virtual void v20();
  virtual unsigned int getId() const;
};
struct PlayerManagerStub {
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void v3();
  virtual void v4();
  virtual void v5();
  virtual void v6();
  virtual void v7();
  virtual void v8();
  virtual void v9();
  virtual void v10();
  virtual void v11();
  virtual IPlayerStub* getLocalPlayer();
};
struct GameStub {
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void v3();
  virtual void v4();
  virtual void v5();
  virtual void v6();
  virtual void v7();
  virtual void v8();
  virtual void v9();
  virtual void v10();
  virtual void v11();
  virtual void v12();
  virtual void v13();
  virtual void v14();
  virtual void v15();
  virtual void v16();
  virtual void v17();
  virtual void v18();
  virtual void v19();
  virtual void v20();
  virtual void v21();
  virtual void v22();
  virtual void v23();
  virtual void v24();
  virtual void v25();
  virtual void v26();
  virtual void v27();
  virtual void v28();
  virtual void v29();
  virtual void v30();
  virtual void v31();
  virtual void v32();
  virtual void v33();
  virtual void v34();
  virtual void v35();
  virtual void notify(unsigned int id, PostRemoteEvent* ev);
};

extern PlayerManagerStub* playerManager;
extern GameStub* game;

struct ClientGameLogic { void suicide(); };
void ClientGameLogic::suicide()
{
  IPlayerStub* p = playerManager->getLocalPlayer();
  if (!p) return;
  game->notify(p->getId(), new PostRemoteEvent(6, 12, false, 0, 0, 0.0f));
}
