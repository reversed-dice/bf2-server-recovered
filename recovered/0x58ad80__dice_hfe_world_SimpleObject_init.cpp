// FUNCTION: BF2 0x58ad80
namespace dice { namespace hfe {

namespace ai {

class AIInstanceServer
{
public:
    static AIInstanceServer* m_iAI;
};

} // namespace ai

namespace world {

class IObject
{
};

class Object : public IObject
{
public:
    void init();
};

class PortalManager
{
public:
    void v40(IObject*);
    void v41(IObject*);
    void v42(IObject*);
    void v43(IObject*);
    void v44(IObject*);
    void v45(IObject*);
    void v46(IObject*);
    void v47(IObject*);
    void v48(IObject*);
};

class SimpleObject : public Object
{
public:
    void init();
    void aiObjectCreate();

private:
    char _pad0[0x50];
    void* m_50;
    char _pad1[0x68 - 0x58];
    void* m_68;
};

IObject* getPortalMesh(IObject*, IObject**);

extern PortalManager* portalManager;

} // namespace world

void dice::hfe::world::SimpleObject::init()
{
    Object::init();

    if (dice::hfe::ai::AIInstanceServer::m_iAI != 0 &&
        ((bool (*)(void*))(*(void***)dice::hfe::ai::AIInstanceServer::m_iAI)[0x38 / 8])(dice::hfe::ai::AIInstanceServer::m_iAI))
    {
        if (m_68 == 0)
        {
            aiObjectCreate();

            if (m_68 != 0)
                ((void (*)(void*))(*(void***)m_68)[0x90 / 8])(m_68);
        }

        if (m_50 == 0)
        {
            IObject* portal = getPortalMesh(this, 0);

            if (portal != 0 && ((int (*)(void*))(*(void***)portal)[0x20 / 8])(portal) != 0)
                ((void (*)(void*, IObject*))(*(void***)portalManager)[0x40 / 8])(portalManager, this);
        }
    }
}

} } // namespace dice::hfe
