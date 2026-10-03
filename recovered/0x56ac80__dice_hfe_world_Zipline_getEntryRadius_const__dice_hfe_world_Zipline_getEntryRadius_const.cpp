// FUNCTION: BF2 0x56ac80
namespace dice { namespace hfe { namespace world {

class ZiplineContainer {
    unsigned char m_pad0[0x1dc]; // vptr + members 0x00..0x1db
public:
    float m_entryRadius; // offset 0x1dc
};

class Zipline {
    unsigned char m_pad0[0x248]; // vptr + members 0x00..0x247
public:
    ZiplineContainer* m_container; // offset 0x248
    float getEntryRadius() const;
};

float Zipline::getEntryRadius() const {
    return m_container->m_entryRadius;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Zipline_getEntryRadius_const (0x56ac80)