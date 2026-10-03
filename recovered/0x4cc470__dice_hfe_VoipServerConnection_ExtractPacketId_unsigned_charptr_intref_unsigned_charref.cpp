// FUNCTION: BF2 0x4cc470
namespace dice { namespace hfe {
bool ExtractPacketId_0x4cc470(void* unused, const unsigned char* buf, int& count, unsigned char& out) {
    if (count > 0) {
        out = buf[count - 1];
        count--;
        return true;
    }
    return false;
}
} }
