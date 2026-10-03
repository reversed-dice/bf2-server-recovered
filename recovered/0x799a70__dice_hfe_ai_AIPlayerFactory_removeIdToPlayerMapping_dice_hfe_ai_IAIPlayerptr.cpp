// FUNCTION: BF2 0x799a70
namespace dice { namespace hfe { namespace ai {
struct V7f {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual int v0x38();
};
struct APF {
    unsigned char _pad[0x8];
    void** m_8;
    void removeIdToPlayerMap_0x799a70(V7f* other);
};
void APF::removeIdToPlayerMap_0x799a70(V7f* other) {
    m_8[other->v0x38()] = 0;
}
} } }
