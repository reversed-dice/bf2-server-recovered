// FUNCTION: BF2 0x82bc80
namespace dice { namespace hfe {
extern void* fn_8383f0(void* a, int b);
void* gpGetTransferData_0x82bc80(void* self, int arg2) {
    void* p = fn_8383f0(self, arg2);
    if (!p)
        return 0;
    return *(void**)((char*)p + 0x58);
}
} }
