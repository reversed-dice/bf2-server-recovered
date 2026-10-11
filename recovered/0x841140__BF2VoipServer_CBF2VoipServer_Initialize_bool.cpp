// FUNCTION: BF2 0x841140
// BF2_FLAGS: -fno-strict-aliasing
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

namespace io
{
class SocketManager
{
public:
    SocketManager();
    virtual void v1();
};
}
}
}

namespace BF2VoipServer
{
class CDebugStandard
{
public:
    static CDebugStandard* GetInstance();
    void Output(int type, const char* message);
};

class CBF2VoipServer
{
public:
    char m_initialized;
    char pad[7];
    dice::hfe::io::SocketManager* m_socketManager;
    dice::hfe::Mutex m_mutex;

    int Initialize(bool b);
};
}

int BF2VoipServer::CBF2VoipServer::Initialize(bool b)
{
    int result = 1;
    m_mutex.lock();
    if (m_initialized == 0)
    {
        m_initialized = 1;
        if (b)
        {
            dice::hfe::io::SocketManager* sm = new dice::hfe::io::SocketManager();
            m_socketManager = sm;
            sm->v1();
        }
    }
    else
    {
        BF2VoipServer::CDebugStandard::GetInstance()->Output(3, "Attempted to start running server");
        result = -4;
    }
    m_mutex.unlock();
    return result;
}
