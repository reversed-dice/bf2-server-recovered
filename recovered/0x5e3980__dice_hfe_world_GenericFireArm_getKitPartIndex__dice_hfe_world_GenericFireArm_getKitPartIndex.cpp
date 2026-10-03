// FUNCTION: BF2 0x5e3980
namespace dice { namespace hfe { namespace world {

struct KitPartData;

class GenericFireArm {
public:
    unsigned int getKitPartIndex() const;
private:
    unsigned char __pad_000[0x330]; // offset 0x000-0x32F
    KitPartData* m_kitPart;          // offset 0x330
};

struct KitPartData {
    unsigned char __pad_000[0x248]; // offset 0x000-0x247
    unsigned int m_kitPartIndex;     // offset 0x248
};

unsigned int GenericFireArm::getKitPartIndex() const {
    return m_kitPart->m_kitPartIndex;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getKitPartIndex (0x5e3980)