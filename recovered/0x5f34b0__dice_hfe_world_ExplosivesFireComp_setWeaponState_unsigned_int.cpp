// FUNCTION: BF2 0x5f34b0
namespace dice { namespace hfe { namespace world {
extern "C" void fn_5f3340(void* p, int v);
void eom_5f34b0(char* self, int st) {
    int ns = (st == 1) + 1;
    if (ns == *(int*)(self + 0x170)) {
        return;
    }
    *(int*)(self + 0x170) = ns;
    *(int*)(self + 0x1a8) = 0;
    if (ns == 2) {
        fn_5f3340(self, 1);
    } else {
        fn_5f3340(self, 0);
    }
}
} } }
// REVERSED_FUNCTION: test (0x5f34b0)
