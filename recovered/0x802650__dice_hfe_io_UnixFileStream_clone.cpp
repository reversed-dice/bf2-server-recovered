// FUNCTION: BF2 0x802650
namespace dice { namespace hfe { namespace io {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x802600(void*, void*);
void* fn_0x802650(void* self) {
    void* p = alloc_0x407508(0x30);
    ctor_0x802600(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_UnixFileStream_clone (0x802650)
