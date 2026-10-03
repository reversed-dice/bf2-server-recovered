// FUNCTION: BF2 0x521e70
namespace dice { namespace hfe { namespace world {

class RopeLinkptrptr {
public:
    static unsigned long long* std_fill_n(unsigned long long* first, unsigned long long n, const unsigned long long& value);
};

unsigned long long* RopeLinkptrptr::std_fill_n(unsigned long long* first, unsigned long long n, const unsigned long long& value) {
    unsigned long long v = value;
    if (n != 0) {
        unsigned long long i = 0;
        do {
            i = i + 1;
            *first = v;
            first = first + 1;
        } while (i != n);
    }
    return first;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_RopeLinkptrptr::std_fill_n_dice_hfe_world_RopeLinkptrptr_unsigned_long_dice_hfe_world_RopeLinkptr_dice_hfe_world_RopeLinkptrptr_unsigned_long_dice_hfe_world_RopeLinkptr_constref (0x521e70)