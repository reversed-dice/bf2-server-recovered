// FUNCTION: BF2 0x550a40
namespace dice { namespace hfe { namespace world {
class Soldier {
public:
    long getWeapons(int index) const;
};
long Soldier::getWeapons(int index) const {
    long i = index;
    long i8 = i * 8;
    return (i * 32 - i8 + 0x2b0) + reinterpret_cast<long>(this);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getWeapons_int (0x550a40)