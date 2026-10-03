// FUNCTION: BF2 0x69deb0
namespace dice { namespace hfe { namespace world {
extern void fn_407358(void* a, void* b);
extern void* fn_407628(void* a, void* b);
void* operator_0x69deb0(void* out, void* p) {
    if (p) {
        void* s = ((void* (*)(void*))(*(void***)p)[0x9])(p);
        fn_407358(out, s);
    } else {
        fn_407628(out, (void*)0xb8ef09);
    }
    return out;
}
} } }
