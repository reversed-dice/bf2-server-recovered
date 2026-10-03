// FUNCTION: BF2 0x583820
namespace dice { namespace hfe { namespace world {
extern void fn_589360(void* a, bool b);
void destroy_0x583820(void* self, bool a) {
    if (!((bool (*)(void*))(*(void***)self)[0xf])(self)) {
        fn_589360(self, a);
    }
}
} } }
