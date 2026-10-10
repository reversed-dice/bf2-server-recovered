// FUNCTION: BF2 0x74b0b0
#include <pthread.h>

namespace dice { namespace hfe {

namespace {
struct ThreadBlock {
    pthread_t m_handle;
    bool m_running;
};
void* pthreads_thread_trampoline(void*);
}

class Thread {
public:
    virtual ~Thread();
    enum Priority { PRIORITY_LOW, PRIORITY_NORMAL, PRIORITY_HIGH };
    bool start(char const* name, Priority priority);
    ThreadBlock* m_8;
};

bool Thread::start(char const* name, Priority priority)
{
    if (pthread_create((pthread_t*)m_8, 0, pthreads_thread_trampoline, this) == 0) {
        m_8->m_running = true;
        return true;
    }
    m_8->m_running = false;
    return false;
}

} }
