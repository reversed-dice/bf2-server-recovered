// FUNCTION: BF2 0x84add0
#include <string>
namespace dice { namespace hfe {

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase* queryInterface(unsigned int iid) const;
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
    virtual void dropClient(unsigned int id, int reason, const std::string& name);
};
extern IBase* game;
extern const unsigned int IID_IGameServer;

} }

extern "C" void PB_DropClient(unsigned int id, const char* name)
{
    using namespace dice::hfe;
    if (!game)
        return;
    IGameServer* gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
    if (gs)
        gs->dropClient(id, 0x22, std::string(name));
}
