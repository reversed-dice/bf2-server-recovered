// FUNCTION: BF2 0x840cc0
namespace dice { namespace hfe {
long long f_840cc0(void* self) {
    return (*(long long*)((char*)self + 0x20) - *(long long*)((char*)self + 0x18)) >> 0x3;
}
} }
