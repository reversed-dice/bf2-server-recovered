// FUNCTION: BF2 0x645e90
namespace dice { namespace hfe {
extern void* fn_645ec0(void* a, void* b);
void* FirstChildElement_0x645f90(void* self, void* arg2, void* arg3) {
    void* p = *(void**)arg2;
    if (p) {
        p = fn_645ec0(p, arg3);
        if (p) {
            *(void**)self = p;
            return self;
        }
    }
    *(void**)self = 0;
    return self;
}
} }
