// FUNCTION: BF2 0x83f570
namespace dice { namespace hfe {
extern void fn_4083d8(void* a, int b);
int current_time_hires_0x83f570(void) {
    long v[2];
    fn_4083d8(v, 0);
    return (int)(v[0] * 1000000) + *(int*)((char*)v + 8);
}
} }
