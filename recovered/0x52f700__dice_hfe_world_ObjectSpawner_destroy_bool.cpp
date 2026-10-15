// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x52f700
#include <vector>

extern "C" void fn_589360(void* a, bool b);

struct Spawner {
    unsigned char _pad0[0x280];
    std::vector<int> m_ids;
    int m_298;
};

void destroy_0x52f700(Spawner* self, bool b)
{
    void* gl = *(void**)0x10b8c08;
    ((void (*)(void*, void*))(*(void***)gl)[0x3c8 / 8])(gl, self);

    for (unsigned i = 0; i < self->m_ids.size(); ++i) {
        if (self->m_ids[i] != -1) {
            void* mgr = *(void**)0x112ee48;
            void* obj = ((void* (*)(void*, int))(*(void***)mgr)[0x60 / 8])(mgr, self->m_ids[i]);
            if (obj != 0) {
                void* pc = *(void**)((char*)obj + 0x88);
                if (pc != 0) {
                    ((void (*)(void*))(*(void***)pc)[0x260 / 8])(pc);
                }
            }
        }
    }

    void* mgr = *(void**)0x112ee48;
    void* it = ((void* (*)(void*, int))(*(void***)mgr)[0x60 / 8])(mgr, self->m_298);
    while (it != 0) {
        unsigned iid = *(unsigned*)0xc7ce6c;
        void* q = ((void* (*)(void*, unsigned))(*(void***)it)[0x18 / 8])(it, iid);
        if (q != 0) {
            ((void (*)(void*, int))(*(void***)q)[0x180 / 8])(q, 0);
            break;
        }
        it = *(void**)((char*)it + 0x50);
    }
    fn_589360(self, b);
}
