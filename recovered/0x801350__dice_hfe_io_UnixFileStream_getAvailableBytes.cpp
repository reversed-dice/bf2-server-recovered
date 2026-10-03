// FUNCTION: BF2 0x801350
namespace dice { namespace hfe { namespace io {
typedef int (*vfn_70)(void*);
typedef int (*vfn_68)(void*);
int cb_801350(void* self) {
    return (*(vfn_70*)((char*)*(void**)self + 0x70))(self) - (*(vfn_68*)((char*)*(void**)self + 0x68))(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_UnixFileStream_getAvailableBytes (0x801350)
