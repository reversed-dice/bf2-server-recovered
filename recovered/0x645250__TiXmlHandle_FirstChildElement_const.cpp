// FUNCTION: BF2 0x645250
namespace dice { namespace hfe {
extern void* fn_645170(void* a);
void* f_0x645250(void* self, void** arg2) {
    if (__builtin_expect(*arg2 != 0, 1)) {
        void* p = fn_645170(*arg2);
        if (p) {
            *(void**)self = p;
            return self;
        }
    }
    *(void**)self = 0;
    return self;
}
} }
