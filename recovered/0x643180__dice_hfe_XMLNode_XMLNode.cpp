// FUNCTION: BF2 0x643180
namespace dice { namespace hfe {
void eom_643180(char* self) {
    char* p0 = self + 0x18;
    *(long* volatile*)(self) = (long*)0xb87f90;
    *(long* volatile*)(self + 0x8) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x10) = (long*)0xf6c6e8;
    *(long* volatile*)(self + 0x18) = 0;
    *(long* volatile*)(p0 + 0x8) = 0;
    *(long* volatile*)(p0 + 0x10) = 0;
    char* p1 = self + 0x30;
    *(long* volatile*)(self + 0x30) = 0;
    *(long* volatile*)(p1 + 0x8) = 0;
    *(long* volatile*)(p1 + 0x10) = 0;
}
} }
// REVERSED_FUNCTION: 0x643180