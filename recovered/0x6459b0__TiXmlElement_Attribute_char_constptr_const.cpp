// FUNCTION: BF2 0x6459b0
namespace dice { namespace hfe {
extern void* fn_645850(void* a, void* b);
char* Attribute_0x6459b0(void* self, void* arg2) {
    void* p = fn_645850((char*)self + 0x58, arg2);
    char* v = 0;
    if (p) {
        v = (char*)0xbb25f1;
        if (*(int*)((char*)p + 0x38) != 0)
            v = *(char**)((char*)p + 0x30);
    }
    return v;
}
} }
