// FUNCTION: BF2 0x5f3420
namespace dice { namespace hfe { namespace world {
extern "C" int fn_74aaa0(void* p);
void eom_5f3420(char* self) {
    char* t = *(char**)(self + 0x1d8);
    int n = *(int*)(t + 0x9c);
    int r = fn_74aaa0(self);
    *(char*)(self + 0x1b8) = 1;
    *(int*)(self + 0x1b4) = n + r;
}
} } }
// REVERSED_FUNCTION: test (0x5f3420)
