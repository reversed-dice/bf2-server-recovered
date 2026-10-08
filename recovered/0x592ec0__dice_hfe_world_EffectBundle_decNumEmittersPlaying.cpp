// FUNCTION: BF2 0x592ec0
namespace dice { namespace hfe { namespace world {
extern unsigned int CID_EffectBundleTemplate;
struct Vt {
    unsigned char _p[0x20];
    unsigned int (*getCid)(void*);
    unsigned char _p2[0xc0 - 0x28];
    void (*stop)(void*, unsigned, unsigned);
    unsigned char _p3[0x318 - 0xc8];
    void (*finish)(void*);
};
struct Inner { unsigned char _p[0x28]; void* m_h; };
struct EffectBundle {
    Vt* vt;
    unsigned char _pad[0x50 - 8];
    void* m_obj;
    unsigned char _pad2[0x249 - 0x58];
    unsigned char m_done;
    int m_num;
    void decNumEmittersPlaying();
};
void EffectBundle::decNumEmittersPlaying() {
    if (!m_done) {
        m_num = m_num - 1;
        if (m_num <= 0) {
            m_num = 0;
            vt->stop(this, 1, 0);
        }
        if (m_obj != 0) {
            Inner* in = (Inner*)m_obj;
            void* sub = in->m_h;
            unsigned int cid = ((Vt*)*(void**)sub)->getCid(sub);
            if (cid == CID_EffectBundleTemplate) {
                ((Vt*)*(void**)m_obj)->finish(m_obj);
            }
        }
    }
}
} } }
