// FUNCTION: BF2 0x7e6760
namespace dice { namespace hfe { namespace io {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x7e6730(void*, void*);
void* fn_0x7e6760(void* self) {
    void* p = alloc_0x407508(0x38);
    ctor_0x7e6730(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_ZipReadStream_clone (0x7e6760)
