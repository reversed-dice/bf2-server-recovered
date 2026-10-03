// FUNCTION: BF2 0x779140
namespace dice { namespace hfe { namespace ai {
struct VS {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual int v20();
};
struct Pred {
    unsigned char _pad[0x28];
    VS* m_vs;
};
bool pred_0x779140(void* a, Pred* p) {
    return p->m_vs->v20() == *(int*)0xc7cf68;
}
} } }
