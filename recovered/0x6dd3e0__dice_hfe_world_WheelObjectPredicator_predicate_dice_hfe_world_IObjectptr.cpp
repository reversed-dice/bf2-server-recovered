// FUNCTION: BF2 0x6dd3e0
namespace dice { namespace hfe { namespace world {
struct VS {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual int v20();
};
struct Pred {
    unsigned char _pad[0x28];
    VS* m_vs;
};
bool predicate_0x6dd3e0(void* a, Pred* p) {
    return p->m_vs->v20() == *(int*)0xc7d068;
}
} } }
