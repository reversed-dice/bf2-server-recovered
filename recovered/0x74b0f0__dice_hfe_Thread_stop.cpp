// FUNCTION: BF2 0x74b0f0
#include <pthread.h>

namespace dice { namespace hfe {

namespace {
struct ThreadBlock {
    pthread_t m_handle;
    bool m_running;
};
}

class Thread {
public:
    char _pad8[0x8];
    ThreadBlock* m_8;
    bool stop();
};

bool Thread::stop()
{
    void* ret;
    if (pthread_join(m_8->m_handle, &ret) != 0)
        return false;
    m_8->m_running = false;
    return true;
}

} }
