// FUNCTION: BF2 0x645ab0
namespace dice { namespace hfe {
extern void* fn_645850(void* a, const char* b);
extern void fn_644ae0(void* a, void* b);
void RemoveAttribute_0x645ab0(void* self, const char* name) {
    void* set = (char*)self + 0x58;
    void* v = fn_645850(set, name);
    if (v) {
        fn_644ae0(set, v);
        ((void (*)(void*))(*(void***)v)[0x1])(v);
    }
}
} }
