// FUNCTION: BF2 0x74d3b0
namespace dice { namespace hfe {
extern void* fn_407558(int size);
void* f_0x74d3b0() {
    void* p = fn_407558(0x1010);
    if (p) {
        *(void**)p = 0;
        *(void**)((char*)p + 0x10) = 0;
        *(void**)((char*)p + 0x8) = (void*)0xff0;
    }
    return p;
}
} }
