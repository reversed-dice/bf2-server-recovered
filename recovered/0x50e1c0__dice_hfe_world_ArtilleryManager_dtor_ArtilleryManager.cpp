// FUNCTION: BF2 0x50e1c0
namespace dice { namespace hfe { namespace world {

class IRefObject {
public:
    virtual void v0();
    virtual void release();
};

class ArtilleryManager {
public:
    static ArtilleryManager* m_instance;
    ~ArtilleryManager();
    IRefObject* m_0;
    IRefObject* m_8;
};

ArtilleryManager* ArtilleryManager::m_instance;

ArtilleryManager::~ArtilleryManager()
{
    if (m_0 != 0)
        m_0->release();
    if (m_8 != 0)
        m_8->release();
    if (m_instance == this)
        m_instance = 0;
}

} } }
