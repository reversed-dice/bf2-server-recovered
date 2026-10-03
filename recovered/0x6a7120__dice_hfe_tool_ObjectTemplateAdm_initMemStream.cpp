// FUNCTION: BF2 0x6a7120
namespace dice { namespace hfe { namespace tool {
extern "C" void* dice_hfe_SmartItf_dice_hfe_io_IMemStream_refdice_hfe_io_IID_IMemStream_create_unsigned_int(void*, unsigned);
typedef void* (*vfn0r)(void*);
void* fn_0x6a7120(void* self) {
    void* slot = (char*)self+0x808;
    void* p = *(void**)slot;
    if (p) {
        void** vt = *(void***)p;
        return ((vfn0r)vt[0x88/8])(p);
    }
    return dice_hfe_SmartItf_dice_hfe_io_IMemStream_refdice_hfe_io_IID_IMemStream_create_unsigned_int(slot, *(unsigned*)0xbc193c);
}
} } }
// REVERSED_FUNCTION: dice_hfe_tool_ObjectTemplateAdm_initMemStream (0x6a7120)
