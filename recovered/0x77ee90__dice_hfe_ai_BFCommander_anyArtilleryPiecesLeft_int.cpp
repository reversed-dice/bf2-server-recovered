// FUNCTION: BF2 0x77ee90
namespace dice { namespace hfe {
extern bool fn_50e280(void* obj);
extern void** g_arr_108dda0;
bool f_0x77ee90(void* unused, int i) {
    return fn_50e280(g_arr_108dda0[i - 1]);
}
} }
