// FUNCTION: BF2 0x616370
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    void setLocalPredict(bool flag);
    // ...
private:
    unsigned char _pad0[0x369];
    unsigned char m_localPredict; // offset 0x369
};

void GenericProjectile::setLocalPredict(bool flag) {
    m_localPredict = flag;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_setLocalPredict_bool (0x616370)