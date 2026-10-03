// FUNCTION: BF2 0x83cb90
namespace dice { namespace hfe {
extern void fn_408298(int id);
extern int g_id_10b3120;
extern int g_flag_10b3100;
void f_0x83cb90() {
    if (g_id_10b3120 != -1) {
        fn_408298(g_id_10b3120);
        g_id_10b3120 = -1;
        g_flag_10b3100 = 0;
    }
}
} }
