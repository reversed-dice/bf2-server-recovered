// FUNCTION: BF2 0x81d7c0
namespace dice { namespace hfe {

extern "C" void ArrayFree(void*);
void fn_0x81d7c0() {
    void* g = *(void**)0x10b0a40;
    if (g) {
        ArrayFree(g);
        *(void**)0x10b0a40 = 0;
    }
}

} }
// REVERSED_FUNCTION: NNFreeNegotiateList (0x81d7c0)
