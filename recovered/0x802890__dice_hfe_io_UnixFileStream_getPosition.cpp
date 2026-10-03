// FUNCTION: BF2 0x802890
extern "C" long lseek(int, long, int);

namespace dice { namespace hfe { namespace io {

int fn_0x802890(void* self) {
    return (int)lseek(*(int*)((char*)self+0xc), 0, 1);
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_UnixFileStream_getPosition (0x802890)
