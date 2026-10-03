// FUNCTION: BF2 0x56ac90
// dice_hfe_world_Zipline_getCollisionStartRadius_const (0x56ac90)
// ASM:
//   MOV RAX, [RDI + 0x248]
//   MOVSS XMM0, [RAX + 0x1e0]
//   RET

namespace dice { namespace hfe { namespace world {

class ZiplineContainer {
public:
    // padding: vtable, bases, other members 0x000-0x1df
    unsigned char _pad[0x1e0];
    float m_collisionStartRadius; // offset 0x1e0
};

class Zipline {
public:
    float getCollisionStartRadius() const;

private:
    // padding: vtable, bases, other members 0x000-0x247
    unsigned char _pad[0x248];
    ZiplineContainer* m_container; // offset 0x248
};

float Zipline::getCollisionStartRadius() const {
    return m_container->m_collisionStartRadius;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Zipline_getCollisionStartRadius_const (0x56ac90)