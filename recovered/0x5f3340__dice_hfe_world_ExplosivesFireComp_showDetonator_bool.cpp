// FUNCTION: BF2 0x5f3340
namespace dice { namespace hfe { namespace world {
extern "C" void fn_5e2620(void* a, void* b, int c);
void eom_5f3340(char* self, char show) {
    void* p = *(void**)(self + 0x1c8);
    if (p == 0) {
        return;
    }
    if (show) {
        fn_5e2620(*(void**)(self + 0x18), p, 0);
    } else {
        fn_5e2620(*(void**)(self + 0x18), *(void**)(self + 0x18), 0);
    }
}
} } }
// REVERSED_FUNCTION: test (0x5f3340)
