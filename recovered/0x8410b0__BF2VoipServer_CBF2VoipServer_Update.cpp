// FUNCTION: BF2 0x8410b0
#include <vector>

namespace dice { namespace hfe {
class Mutex {
    char _m[8];
public:
    void lock();
    void unlock();
};
} }

struct Iface {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
};

extern void* fn_846eb0(void);
extern void fn_846ef0(void*, int, char const*);

struct Server {
    bool m_running;
    char _pad[0xf];
    dice::hfe::Mutex m_mutex;
    std::vector<Iface*> m_objs;
};

int fn_8410b0(Server* self)
{
    self->m_mutex.lock();
    int r = 0;
    if (self->m_running) {
        for (unsigned int i = 0; i < self->m_objs.size(); i++)
            self->m_objs[i]->m12();
        r = 1;
    } else {
        fn_846ef0(fn_846eb0(), 3, "Attempted to update server all without starting");
        r = -4;
    }
    self->m_mutex.unlock();
    return r;
}
