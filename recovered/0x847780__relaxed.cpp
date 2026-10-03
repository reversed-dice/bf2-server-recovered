// FUNCTION: BF2 0x847780
namespace dice { namespace hfe {

void fn_0x8455f0(void* self) {
    void* p = (char*)self + 0x8;
    *(void**)self = (void*)0xbb8450;
    void* tail = (char*)self + 0x10;
    *(long*)((char*)p+8) = 0;
    *(long*)((char*)p+0x28) = 0;
    *(int*)((char*)p+8) = 0;
    *(long*)((char*)p+0x10) = 0;
    *(void**)((char*)p+0x18) = tail;
    *(void**)((char*)p+0x20) = tail;
}

} }
// REVERSED_FUNCTION: VOIP_CClients_CClients (0x8455f0)
