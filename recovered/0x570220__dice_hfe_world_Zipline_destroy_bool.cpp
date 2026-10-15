// FUNCTION: BF2 0x570220
#include <list>

extern "C" void fn_589360(void* a, bool b);
extern "C" bool fn_56e810(void* a, void* b);

struct ZiplineSelf {
    unsigned char _pad0[0x78];
    void* m_78;                                        // 0x78
    unsigned char _pad1[0x230 - 0x80];
    std::list<void*> m_soldiers;                       // 0x230
    std::list<void*>::iterator m_it;                   // 0x240
    unsigned char _pad2[0x250 - 0x248];
    void* m_250;                                       // 0x250
};

void destroy_0x570220(ZiplineSelf* self)
{
    void* p78 = self->m_78;
    if (p78 != 0) {
        ((void (*)(void*))(*(void***)p78)[0x47])(p78);
    }
    void* p250 = self->m_250;
    if (p250 != 0) {
        void* mgr = *(void**)0x0112ee48;
        ((void (*)(void*, void*))(*(void***)mgr)[5])(mgr, p250);
        self->m_250 = 0;
    }
    self->m_it = self->m_soldiers.begin();
    while (self->m_it != self->m_soldiers.end()) {
        if (fn_56e810(self, *self->m_it))
            self->m_it = self->m_soldiers.begin();
        else
            ++self->m_it;
    }
    unsigned iid = *(unsigned*)0x00c75dac;
    while (((void* (*)(void*))(*(void***)self)[0x3c])(self) != 0) {
        void* c = ((void* (*)(void*))(*(void***)self)[0x3c])(self);
        void* q = ((void* (*)(void*, unsigned, unsigned))(*(void***)c)[0x17])(c, iid, iid);
        ((void (*)(void*, unsigned))(*(void***)q)[9])(q, 0);
    }
    fn_589360(self, true);
}
