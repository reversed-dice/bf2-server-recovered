// FUNCTION: BF2 0x64a4a0
namespace dice { namespace hfe {
extern void fn_64b6f0(void* a, void* b);
extern int g_109299c;
void onGetFailure_0x64a4a0(void* self, void* arg2) {
    fn_64b6f0((char*)self + 8, arg2);
    int n = g_109299c - 1;
    g_109299c = n < 0 ? 0 : n;
}
} }
