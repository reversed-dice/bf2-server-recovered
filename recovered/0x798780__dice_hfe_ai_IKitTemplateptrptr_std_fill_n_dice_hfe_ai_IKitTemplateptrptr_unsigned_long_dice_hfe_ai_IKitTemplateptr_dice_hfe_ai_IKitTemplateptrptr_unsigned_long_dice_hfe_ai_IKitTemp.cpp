// FUNCTION: BF2 0x798780
namespace dice { namespace hfe { namespace world {

class IObject;

class IObjectptrptr {
public:
    static IObject** std_fill_n(IObject** first, unsigned long count, IObject* const& value);
};

IObject** IObjectptrptr::std_fill_n(IObject** first, unsigned long count, IObject* const& value) {
    IObject* v = value;
    if (count != 0) {
        unsigned long i = 0;
        do {
            ++i;
            *first = v;
            ++first;
        } while (i != count);
    }
    return first;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_IObjectptrptr::std_fill_n_dice_hfe_world_IObjectptrptr_unsigned_long_dice_hfe_world_IObjectptr_dice_hfe_world_IObjectptrptr_unsigned_long_dice_hfe_world_IObjectptr_constref (0x4aed40)