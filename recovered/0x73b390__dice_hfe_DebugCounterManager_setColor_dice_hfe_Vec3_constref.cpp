// FUNCTION: BF2 0x73b390
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
class ColorTarget {
public:
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
    virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
    virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15();
    virtual void s16();
    virtual void setColor(int, int, int);
};
class DebugCounterManager {
public:
    virtual void addRef();
    unsigned char pad_0x08[0x10];
    unsigned int m_0x18;
    unsigned char pad_0x1c[0x14];
    ColorTarget* m_0x30;
    void setColor(Vec3 const&);
};
void DebugCounterManager::setColor(Vec3 const& c) {
    unsigned int packed = ((unsigned int)c.x << 16) + ((unsigned int)c.y << 8) + (unsigned int)c.z;
    m_0x18 = packed;
    if (m_0x30 != 0) {
        int col = (int)(packed - 0x1000000);
        m_0x30->setColor(col, col, col);
    }
}
} }
