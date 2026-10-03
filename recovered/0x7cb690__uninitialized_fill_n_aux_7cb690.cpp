// FUNCTION: BF2 0x7cb690
namespace dice {
struct P { long a; long b; };
void cb_6985a0(P* p, unsigned long count, P* val) {
    for (unsigned long i = 0; i < count; i++) {
        if (p != 0)
            *p = *val;
        p++;
    }
}
}
// REVERSED_FUNCTION: void_std_uninitialized_fill_n_aux_std_pair_float_double (0x7cb690)
