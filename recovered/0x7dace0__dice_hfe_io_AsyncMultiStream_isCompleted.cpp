// FUNCTION: BF2 0x7dace0
namespace dice { namespace hfe { namespace io {

bool fn_0x7dace0(void* self) {
    if (*(unsigned char*)((char*)self+0x30) != 0) {
        return *(int*)((char*)self+0x34) == -1;
    }
    return false;
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_AsyncMultiStream_isCompleted (0x7dace0)
