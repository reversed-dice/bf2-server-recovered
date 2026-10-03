// FUNCTION: BF2 0x5ea510
namespace dice { namespace hfe { namespace world {

class AmmoTemplate {
private:
    unsigned char pad00[0x3c];
public:
    unsigned int m_maxNrOfMags; // offset 0x3c
};

class AmmoComp {
public:
    unsigned int getMaxNrOfMags() const;

private:
    unsigned char pad_vtable[0x08]; // vtable ptr at offset 0x00
    unsigned char pad_body[0x78];
    AmmoTemplate* m_ammoTemplate; // offset 0x80
};

} } }

unsigned int
dice::hfe::world::AmmoComp::getMaxNrOfMags() const
{
    return m_ammoTemplate->m_maxNrOfMags;
}
// REVERSED_FUNCTION: dice_hfe_world_AmmoComp_getMaxNrOfMags_const (0x5ea510)