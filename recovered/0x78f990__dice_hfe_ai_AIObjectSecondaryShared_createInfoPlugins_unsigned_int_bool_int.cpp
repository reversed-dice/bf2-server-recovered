// FUNCTION: BF2 0x78f990
namespace dice { namespace hfe { namespace ai {
extern long* BFSingletonServer_m_iInformationFactory;

struct Self {
    char _pad[0x30];
    void* m_p30;
    void* m_p38;
    void* m_p40;
    void* m_p48;
    void* m_p50;
    void* m_p58;
    char _pad2[0x10];
    void* m_primary;
};

typedef bool (*FnAdd)(long*, unsigned, unsigned, unsigned);
typedef bool (*FnAddObj)(long*, unsigned, unsigned, unsigned, unsigned);
typedef void* (*FnCheck)(void*);
typedef unsigned (*FnGet)(void*, int);

void createInfoPlugins(Self* self, unsigned param_2, bool param_3, int param_4) {
    long* singleton = BFSingletonServer_m_iInformationFactory;
    if (self->m_p30)
        ((FnAdd)(*(void***)singleton)[0x40/8])(singleton, param_2, 0, param_3);
    if (self->m_p38)
        ((FnAdd)(*(void***)singleton)[0x40/8])(singleton, param_2, 1, param_3);
    if (self->m_p40) {
        ((FnAdd)(*(void***)singleton)[0x40/8])(singleton, param_2, 2, param_3);
    } else {
        if (((FnCheck)(*(void***)self->m_primary)[0x118/8])(self->m_primary))
            ((FnAddObj)(*(void***)singleton)[0x48/8])(singleton, ((FnGet)(*(void***)self->m_primary)[0x170/8])(self->m_primary, param_4), param_2, 2, param_3);
    }
    if (self->m_p48)
        ((FnAdd)(*(void***)singleton)[0x40/8])(singleton, param_2, 3, param_3);
    if (self->m_p50) {
        ((FnAdd)(*(void***)singleton)[0x40/8])(singleton, param_2, 4, param_3);
    } else {
        if (((FnCheck)(*(void***)self->m_primary)[0x128/8])(self->m_primary))
            ((FnAddObj)(*(void***)singleton)[0x48/8])(singleton, ((FnGet)(*(void***)self->m_primary)[0x170/8])(self->m_primary, param_4), param_2, 4, param_3);
    }
    if (self->m_p58)
        ((FnAdd)(*(void***)singleton)[0x40/8])(singleton, param_2, 5, param_3);
}
} } }
