// FUNCTION: BF2 0x70f5f0
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_BspV8_BspV8 (0x70f5f0)

struct Sub18 { volatile float f0; volatile float f4; volatile float f8; Sub18() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub24 { float f0; float f4; float f8; Sub24() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub30 { void* f0; void* f8; void* f10; Sub30() : f0(0), f8(0), f10(0) {} };
struct Sub48 { void* f0; void* f8; void* f10; Sub48() : f0(0), f8(0), f10(0) {} };

class Klass_70f5f0 {
public:
    void* m_0x0;
    void* m_0x8;
    void* m_0x10;
    Sub18 m_0x18;
    Sub24 m_0x24;
    Sub30 m_0x30;
    Sub48 m_0x48;
    char _pad0x68[0x8];
    int m_0x68;
    Klass_70f5f0();
};

Klass_70f5f0::Klass_70f5f0() : m_0x0(0), m_0x8(0), m_0x10(0), m_0x18(), m_0x24(), m_0x30(), m_0x48(), m_0x68(0) { }

// REVERSED_FUNCTION: dice_hfe_world_BspV8_BspV8 (0x70f5f0)
