// FUNCTION: BF2 0x616370
namespace dice { namespace hfe {
class GenericProjectile {
public:
    char _pad[0x369];
    bool field;
    void setLocalPredict(bool v);
};
void GenericProjectile::setLocalPredict(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericProjectile_setLocalPredict (0x616370)
