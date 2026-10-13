// FUNCTION: BF2 0x4cd6f0
#include <string>
namespace BF2VoipServer {
class CBF2VoipServer {
public:
    void Initialize(bool b);
    void CreateInstance(unsigned int port, std::string name, int& id);
    char _pad[0x38];
};
}

namespace dice { namespace hfe {

class Mutex { char _pad[0x28]; };

class Thread {
public:
    enum Priority { Lowest, Low, Normal, High };
    void start(char const* name, Priority prio);
};

class VoipServerInternalHookThread : public Thread {
public:
    void init(BF2VoipServer::CBF2VoipServer* server, Mutex* mutex);
    char _pad[0x30];
};

class VoipServerInternal {
public:
    void Start(const std::string& name, unsigned int port);
    char _pad[0x38];
    VoipServerInternalHookThread m_thread;
    BF2VoipServer::CBF2VoipServer m_server;
    Mutex m_mutex;
};

void VoipServerInternal::Start(const std::string& name, unsigned int port)
{
    m_server.Initialize(false);
    int id = -1;
    m_server.CreateInstance(port, name, id);
    m_thread.init(&m_server, &m_mutex);
    m_thread.start(0, Thread::High);
}

} }
