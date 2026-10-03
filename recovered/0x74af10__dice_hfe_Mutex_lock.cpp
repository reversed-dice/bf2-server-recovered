// FUNCTION: BF2 0x74af10
// Mutex::lock 0x74af10 — variante séparée
namespace dice { namespace hfe {

extern void pm_lock(void* m);

class Mutex {
public:
    void* m_mutex;   // 0x00
    void lock();
};

void Mutex::lock() {
    pm_lock(m_mutex);
}

}}

// re-trigger validate 2026-08-06 17:11:09

// re-trigger validate 2026-08-06 17:16:39
