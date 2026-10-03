// FUNCTION: BF2 0x84da40
namespace dice { namespace hfe { namespace io {
extern void fn_407628(void* s, const char* lit);
void* cb_84da40(void* dst, int v) {
    switch (v) {
    case 0: fn_407628(dst, (const char*)0xbb9c97); break;  // PROk
    case 1: fn_407628(dst, (const char*)0xbb9c9c); break;  // PRNewConnection
    case 2: fn_407628(dst, (const char*)0xbb9cac); break;  // PRServerIsFull
    case 4: fn_407628(dst, (const char*)0xbb9cbb); break;  // PRConnectFailed
    case 5: fn_407628(dst, (const char*)0xbb9ccb); break;  // PRInvalidParam
    case 6: fn_407628(dst, (const char*)0xbb9cda); break;  // PRSocketFailed
    case 7: fn_407628(dst, (const char*)0xbb9ce9); break;  // PRAllocFailed
    case 8: fn_407628(dst, (const char*)0xbb9cf7); break;  // PRNoPacket
    case 9: fn_407628(dst, (const char*)0xbb9d02); break;  // PRFailed
    case 10: fn_407628(dst, (const char*)0xbb9d0b); break;  // PRTimeOut
    case 11: fn_407628(dst, (const char*)0xbb9d15); break;  // PRIgnored
    case 12: fn_407628(dst, (const char*)0xbb9d1f); break;  // PRSystem
    case 13: fn_407628(dst, (const char*)0xbb9d28); break;  // PRDisconnect
    case 14: fn_407628(dst, (const char*)0xbb9d35); break;  // PRRecvBufferOverflow
    case 15: fn_407628(dst, (const char*)0xbb9d4a); break;  // PRSendBufferOverflow
    case 16: fn_407628(dst, (const char*)0xbb9d5f); break;  // PRPacketTooBig
    case 17: fn_407628(dst, (const char*)0xbb9d6e); break;  // PRInvalidPassword
    case 18: fn_407628(dst, (const char*)0xbb9d9a); break;  // PRConnecting
    case 30: fn_407628(dst, (const char*)0xbb9d80); break;  // PRInvalidReservedPassword
    default: fn_407628(dst, (const char*)0xbade17); break;  // Unknown
    }
    return dst;
}
}}}
// REVERSED_FUNCTION: dice_hfe_io_operator_std_ostreamref_dice_hfe_io_PResult (0x84da40)
