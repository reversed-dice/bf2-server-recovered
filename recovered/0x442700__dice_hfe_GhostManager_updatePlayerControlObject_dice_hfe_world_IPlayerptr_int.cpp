// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x442700
namespace dice { namespace hfe {

extern unsigned int CID_ParachuteTemplate;
extern unsigned int IID_IPlayerControlObject;

class GhostManager {
public:
    char _pad0[0x2108];
    unsigned char m_2108;
    char _pad1[0x4218 - 0x2109];
    unsigned short m_4218;
    unsigned short m_421a;
    int m_421c;
    int m_4220;
    int m_4224;
    char _pad2[0x422c - 0x4228];
    int m_422c;

    bool updatePlayerControlObject(void* player, int arg);
};

bool GhostManager::updatePlayerControlObject(void* player, int arg) {
    m_421c = arg;
    m_2108 = 1;

    void* s = ((void* (*)(void*))(*(void***)player)[0x130 / 8])(player);
    unsigned int prev = *(unsigned int*)&m_4218;
    m_4220 = *(int*)((char*)s + 0x14);

    void* q = ((void* (*)(void*))(*(void***)player)[0x90 / 8])(player);
    void* r = ((void* (*)(void*))(*(void***)q)[0x1b0 / 8])(q);
    if (*(unsigned short*)((char*)r + 0x8) != (unsigned short)prev)
        m_422c = -1;

    q = ((void* (*)(void*))(*(void***)player)[0x90 / 8])(player);
    r = ((void* (*)(void*))(*(void***)q)[0x1b0 / 8])(q);
    unsigned short val = *(unsigned short*)((char*)r + 0x8);
    m_421a = 0;
    m_4218 = val;

    q = ((void* (*)(void*))(*(void***)player)[0x90 / 8])(player);
    while (q) {
        void* found = ((void* (*)(void*, unsigned int))(*(void***)q)[0x18 / 8])(q, IID_IPlayerControlObject);
        if (found) {
            void* c = ((void* (*)(void*))(*(void***)player)[0x90 / 8])(player);
            void* tmpl = *(void**)((char*)c + 0x28);
            int cid = ((int (*)(void*))(*(void***)tmpl)[0x20 / 8])(tmpl);
            if (cid == CID_ParachuteTemplate) {
                void* pc = ((void* (*)(void*))(*(void***)player)[0x148 / 8])(player);
                void* rr = ((void* (*)(void*))(*(void***)pc)[0x1b0 / 8])(pc);
                m_421a = *(unsigned short*)((char*)rr + 0x8);
            }
            break;
        }
        q = *(void**)((char*)q + 0x50);
    }

    if (m_4224 != -1 && m_4224 == m_4220)
        m_4220 = -1;
    return 1;
}

} }
