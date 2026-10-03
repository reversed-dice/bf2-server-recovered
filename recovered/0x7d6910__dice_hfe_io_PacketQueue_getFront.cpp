// FUNCTION: BF2 0x7d6910
namespace dice { namespace hfe { namespace io {

void* fn_0x7d6910(void* self) {
    if (*(int*)self == 0) return 0;
    long idx = *(unsigned*)((char*)self+8);
    return (void*)(*(long*)((char*)self+0x10) + (idx<<5));
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_PacketQueue_getFront (0x7d6910)
