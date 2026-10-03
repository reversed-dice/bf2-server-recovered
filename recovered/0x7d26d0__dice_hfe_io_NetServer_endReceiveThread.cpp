// FUNCTION: BF2 0x7d26d0
namespace dice { namespace hfe {

class Mutex { public: void lock(); void unlock(); char _pad[0x30]; };
class Thread { public: virtual ~Thread(); void stop(); };

namespace io {

class NetServer {
public:
    void endReceiveThread();
    char _pad0[0x4f9];
    bool m_stopping;
    char _pad4fa[0x76];
    Thread* m_receiveThread;
    char _pad578[0x8];
    Mutex m_mutex;
    bool m_quit;
};

void NetServer::endReceiveThread()
{
    if (!m_receiveThread)
        return;
    m_stopping = true;
    m_mutex.lock();
    m_quit = true;
    m_mutex.unlock();
    m_receiveThread->stop();
    delete m_receiveThread;
    m_receiveThread = 0;
}

} } }
