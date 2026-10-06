// FUNCTION: BF2 0x433540
namespace dice { namespace hfe {

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase* queryInterface(unsigned int iid) const;
};
class IObject : public IBase {
public:
    virtual void v4();
    virtual void v5();
    virtual IBase* getFreeCamera();
};
class IGameServer : public IBase {
public:
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
    virtual IObject* getPlayer(int client);
    virtual void v16();
    virtual void v17();
    virtual void toggleFreeCamera(IBase* camera);
};
extern IBase* game;
extern const unsigned int IID_IGameServer;

class ToggleFreeCameraEvent {
public:
    virtual ~ToggleFreeCameraEvent();
    bool executeServer(int client);
};

bool ToggleFreeCameraEvent::executeServer(int client)
{
    IGameServer* gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
    if (gs) {
        IObject* p = gs->getPlayer(client);
        if (p) {
            IBase* cam = p->getFreeCamera();
            if (cam) {
                gs->toggleFreeCamera(cam);
                return true;
            }
        }
    }
    return false;
}

} }
