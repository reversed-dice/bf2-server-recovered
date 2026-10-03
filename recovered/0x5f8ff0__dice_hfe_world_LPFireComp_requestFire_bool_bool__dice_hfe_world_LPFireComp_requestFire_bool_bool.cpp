// FUNCTION: BF2 0x5f8ff0
namespace dice { namespace hfe { namespace world {

class LPFireComp {
public:
    bool requestFire(unsigned int param_1);
private:
    unsigned char m_pad0[0x94];
    unsigned char m_unknown;
};

bool LPFireComp::requestFire(unsigned int param_1) {
    m_unknown = (unsigned char)(param_1 ^ 1);
    return true;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_LPFireComp_requestFire_bool_bool (0x5f8ff0)