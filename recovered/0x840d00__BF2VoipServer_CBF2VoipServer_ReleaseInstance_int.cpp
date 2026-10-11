// FUNCTION: BF2 0x840d00
#include <vector>

namespace dice
{
namespace hfe
{
class Mutex
{
public:
    void lock();
    void unlock();
};
}
}

namespace BF2VoipServer
{
class CBF2VoipServerInstance
{
public:
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
    char pad[0xa98 - 0x8];
    int m_id;
};

class CBF2VoipServer
{
public:
    char pad0[0x10];
    dice::hfe::Mutex m_mutex;
    std::vector<BF2VoipServer::CBF2VoipServerInstance*> m_instances;

    int ReleaseInstance(int id);
};
}

int BF2VoipServer::CBF2VoipServer::ReleaseInstance(int id)
{
    int result = -1;
    std::vector<BF2VoipServer::CBF2VoipServerInstance*>::iterator it;
    m_mutex.lock();
    for (it = m_instances.begin(); it != m_instances.end(); ++it)
    {
        BF2VoipServer::CBF2VoipServerInstance* instance = *it;
        if (instance->m_id == id)
        {
            instance->v14();
            result = 1;
            instance->v6();
            m_instances.erase(it);
            break;
        }
    }
    m_mutex.unlock();
    return result;
}
