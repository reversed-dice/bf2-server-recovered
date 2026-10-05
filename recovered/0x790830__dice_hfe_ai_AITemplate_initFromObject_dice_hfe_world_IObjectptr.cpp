// FUNCTION: BF2 0x790830
namespace dice { namespace hfe {

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase* queryInterface(unsigned int iid) const;
};

namespace world {
class IObject : public IBase {
};
}

class IGameServer {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();
    virtual bool isClientOnly();
};

extern IGameServer* g_gameServer;
extern unsigned int IID_IAIObject;

namespace ai {

class AITemplate {
public:
    void initFromObject(world::IObject* o);
    unsigned char _pad0[0xc];
    unsigned int m_flags;
    unsigned char _pad1[0x1e - 0x10];
    bool m_initialized;
};

void AITemplate::initFromObject(world::IObject* o)
{
    if (m_initialized)
        return;
    if (g_gameServer->isClientOnly())
        return;
    if (o->queryInterface(IID_IAIObject))
        m_flags |= 0x200000;
    else
        m_flags &= ~0x200000;
    m_initialized = true;
}

} } }
