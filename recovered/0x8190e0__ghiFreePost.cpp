// FUNCTION: BF2 0x8190e0
namespace dice { namespace hfe {

extern "C" void ArrayFree(void*);
extern "C" void gsifree(void*);
void fn_0x8190e0(void* self) {
    void* p = *(void**)self;
    ArrayFree(p);
    gsifree(self);
}

} }
// REVERSED_FUNCTION: ghiFreePost (0x8190e0)
