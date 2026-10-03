// FUNCTION: BF2 0x7c2930
namespace dice { namespace hfe { namespace console {
struct V7 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual unsigned int v0x38();
};
struct W {
    unsigned char _pad[0x8];
    V7* m_8;
    bool hasReturnValue_0x7c2930() const;
};
bool W::hasReturnValue_0x7c2930() const {
    return ((m_8->v0x38() >> 5) ^ 1) & 1;
}
} } }
