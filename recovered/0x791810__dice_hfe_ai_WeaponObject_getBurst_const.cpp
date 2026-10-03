// FUNCTION: BF2 0x791810
namespace dice { namespace hfe { namespace ai {
struct WO2 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual int v28();
};
struct WO {
    unsigned char _pad[0x10];
    WO2* m_obj;
    bool getBurst_0x791810() const;
};
bool WO::getBurst_0x791810() const {
    return m_obj->v28() == 2;
}
} } }
