// FUNCTION: BF2 0x67e9a0
namespace dice { namespace hfe {
void eom_67e9a0(char* self) {
    char* p0 = self + 0x48;
    *(long* volatile*)(self) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x8) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x10) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x18) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x20) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x28) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x30) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x38) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x40) = (long*)0xf6c6e8;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(long* volatile*)(p0 + 0x10) = 0;
    char* p1 = self + 0x60;
    *(long* volatile*)(self + 0x48) = 0;
    *(long* volatile*)(self + 0x60) = 0;
    *(long* volatile*)(p1 + 0x8) = 0;
    *(long* volatile*)(p1 + 0x10) = 0;
    *(long* volatile*)(self + 0x78) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x80) = (long*)0xf6c6e8;
}
} }
// REVERSED_FUNCTION: 0x67e9a0