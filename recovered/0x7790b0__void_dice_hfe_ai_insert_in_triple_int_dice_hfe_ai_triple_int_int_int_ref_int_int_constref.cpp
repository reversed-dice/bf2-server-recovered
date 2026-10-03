// FUNCTION: BF2 0x7790b0
// insert_in_triple (0x7790b0)
namespace dice { namespace ai {

struct Triple {
    int a, b, c;
};

void insert_in_triple(Triple& t, int index, const int& value) {
    if (__builtin_expect(index != 1, 1)) {
        if (__builtin_expect(index != 2, 1)) {
            if (__builtin_expect(index == 0, 0)) {
                t.a = value;
            }
        } else {
            t.c = value;
        }
    } else {
        t.b = value;
    }
}

} }
// REVERSED_FUNCTION: void_dice_hfe_ai_insert_in_triple_int_dice_hfe_ai_triple_int_int_int_ref_int_int_constref (0x7790b0)
