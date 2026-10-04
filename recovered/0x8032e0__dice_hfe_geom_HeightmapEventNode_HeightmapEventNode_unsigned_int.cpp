// FUNCTION: BF2 0x8032e0
// dice_hfe_geom_HeightmapEventNode_HeightmapEventNode_unsigned_int (0x8032e0)

struct Sub2c { float f0; float f4; float f8; float fc; Sub2c() : f0(0.0f), f4(0.0f), f8(0.0f), fc(0.0f) {} };

struct B0 { virtual void fb(); char _pad0x20[0x18]; void* m_0x20; int m_0x28; B0(long a0) : m_0x20(0), m_0x28(a0) {} };

class Klass_8032e0 : public B0 {
public:
    Sub2c m_0x2c;
    Klass_8032e0(long a0);
};

Klass_8032e0::Klass_8032e0(long a0) : B0(a0), m_0x2c() { }

// REVERSED_FUNCTION: dice_hfe_geom_HeightmapEventNode_HeightmapEventNode_unsigned_int (0x8032e0)
