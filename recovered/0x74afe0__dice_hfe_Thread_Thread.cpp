// FUNCTION: BF2 0x74afe0
// Thread ctor 0x74afe0 — vptr + alloc + init byte + store
namespace dice { namespace hfe {

extern void* alloc_size(int size);

void thread_ctor(void* p) {
    *(void**)p = (void*)0xb9a550;
    void* m = alloc_size(0x10);
    *(unsigned char*)((char*)m + 8) = 0;
    *(void**)((char*)p + 8) = m;
}

}}
