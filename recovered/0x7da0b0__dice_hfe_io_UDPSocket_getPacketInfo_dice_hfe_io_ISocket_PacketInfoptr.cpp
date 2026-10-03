// FUNCTION: BF2 0x7da0b0
namespace dice { namespace hfe { namespace io {
bool fn_0x7da0b0(void* self, void* out) {
    *(int*)((char*)out+4) = 0x5a8;
    *(int*)out = 1;
    *(int*)((char*)out+8) = 0x428;
    return true;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_UDPSocket_getPacketInfo_dice_hfe_io_ISocket_PacketInfoptr (0x7da0b0)
