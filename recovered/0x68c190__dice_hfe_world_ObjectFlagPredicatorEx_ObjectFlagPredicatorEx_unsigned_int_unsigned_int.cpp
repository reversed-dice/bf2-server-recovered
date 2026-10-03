// FUNCTION: BF2 0x68c190
// ObjectFlagPredicatorEx ctor 0x68c190 — vptr + 2 dwords
namespace dice { namespace hfe { namespace world {

void ofpe_ctor(void* p, unsigned int a, unsigned int b) {
    *(void**)p = (void*)0xb8e0f0;
    *(unsigned int*)((char*)p + 8) = a;
    *(unsigned int*)((char*)p + 0xc) = b;
}

}}}
