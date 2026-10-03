// FUNCTION: BF2 0x7ebdb0
namespace dice { namespace hfe { namespace io {
extern void* fn_7f0430(void* a, void* b);
struct IAVA3 { unsigned char _pad[0x20]; char m_20; char m_28; };
int isAxisValueAnalogue_0x7ebdb0(IAVA3* self, int arg2) {
    void* p = fn_7f0430((char*)self + 0x20, &arg2);
    if (p != (char*)self + 0x28)
        return *(unsigned char*)((char*)*(void**)((char*)p + 0x28) + 0xb0);
    return 0;
}
} } }
