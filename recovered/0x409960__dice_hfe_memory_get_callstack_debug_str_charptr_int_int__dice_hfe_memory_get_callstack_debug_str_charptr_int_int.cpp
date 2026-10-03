// FUNCTION: BF2 0x409960
namespace dice { namespace hfe { namespace memory {
void getCallstackDebugStr(char *buf, unsigned int, unsigned int);
void getCallstackDebugStr(char *buf, unsigned int, unsigned int) {
    *reinterpret_cast<unsigned long long*>(buf) = 0x61766120796c6e4fULL;
    *reinterpret_cast<unsigned long long*>(buf + 8) = 0x6920656c62616c69ULL;
    *reinterpret_cast<unsigned long long*>(buf + 16) = 0x204755424544206eULL;
    *reinterpret_cast<unsigned int*>(buf + 24) = 0x6c697562;
    *reinterpret_cast<unsigned short*>(buf + 28) = 0x7364;
    *reinterpret_cast<unsigned char*>(buf + 30) = 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_memory_get_callstack_debug_str_charptr_int_int (0x409960)