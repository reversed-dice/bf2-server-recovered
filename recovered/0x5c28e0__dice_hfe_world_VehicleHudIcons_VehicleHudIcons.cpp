// FUNCTION: BF2 0x5c28e0
namespace dice { namespace hfe {
void eom_5c28e0(char* self) {
    char* p0 = self + 0x18;
    *(long* volatile*)(self + 0x8) = 0;
    *(long* volatile*)(self + 0x10) = 0;
    *(long* volatile*)(self) = 0;
    *(long* volatile*)(self + 0x18) = 0;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(long* volatile*)(p0 + 0x10) = 0;
    char* p1 = self + 0x48;
    *(long* volatile*)(self + 0x30) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x38) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x40) = (long*)0xf6c6e8;
    *(long* volatile*)(p1 + 0x8) = 0;
    *(long* volatile*)(p1 + 0x10) = 0;
    char* p2 = self + 0x60;
    *(long* volatile*)(self + 0x48) = 0;
    *(long* volatile*)(self + 0x60) = 0;
    *(long* volatile*)(p2 + 0x8) = 0;
    *(long* volatile*)(p2 + 0x10) = 0;
}
} }
// REVERSED_FUNCTION: 0x5c28e0