// FUNCTION: BF2 0x734760
namespace dice { namespace hfe {
extern void* fn_4878a0(void* a, void* b);
struct GDC { unsigned char _pad[0x40]; char m_40; unsigned char _pad2[0x48 - 0x41]; void* m_48; };
bool getDefaultClass_0x734760(GDC* self, unsigned int arg2, int* out) {
    void* p = fn_4878a0((char*)self + 0x40, &arg2);
    if (p != (char*)self + 0x48) {
        *out = *(int*)((char*)p + 0x24);
        return 1;
    }
    return 0;
}
} }
