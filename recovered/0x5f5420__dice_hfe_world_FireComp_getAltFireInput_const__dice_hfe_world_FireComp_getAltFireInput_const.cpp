// FUNCTION: BF2 0x5f5420
namespace dice { namespace hfe { namespace world {

class FireInputData {
public:
    unsigned char _pad[0x68];
    unsigned int m_altFireInput;
};

class FireComp {
public:
    unsigned int getAltFireInput() const;
    unsigned char _pad[0xC0];
    FireInputData* m_input;
};

unsigned int FireComp::getAltFireInput() const
{
    return m_input->m_altFireInput;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getAltFireInput_const (0x5f5420)