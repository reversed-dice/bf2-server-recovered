// FUNCTION: BF2 0x69de70
namespace dice { namespace hfe { namespace world {
extern void fn_407358(void* a, void* b);
extern void* fn_407628(void* a, void* b);
void* operator_0x69de70(void* out, void* p) {
    void* v = *(void**)p;
    if (v) {
        void* s = ((void* (*)(void*))(*(void***)v)[0xb])(v);
        fn_407358(out, s);
    } else {
        fn_407628(out, (void*)0xb8eef8);
    }
    return out;
}
} } }
