// FUNCTION: BF2 0x547100
namespace dice { namespace hfe { namespace world {
extern void fn_439a20(void* a, int b);
void handleManDownActions_0x547100(void* self, int a, void* b) {
    if (a == 6) {
        int r = ((int (*)(void*))(*(void***)b)[0x82])(b);
        if (r == 0x1f) {
            fn_439a20((char*)self + 0x4fc, 6);
        }
    }
}
} } }
