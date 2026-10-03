// FUNCTION: BF2 0x988f20
namespace dice { namespace hfe { namespace world {
extern void* fn_69de30(int a);
struct EOM_988f20 { unsigned char _pad[0x30]; int m_30; unsigned char _pad2[0x38-0x34]; void* m_38; unsigned char _pad3[0x108 - 0x40]; char m_108; char m_109; char m_10a; };
char* executeObjectMethod_988f20(EOM_988f20* self, void* arg2) {
    if (__builtin_expect(self->m_30 == 0, 1)) {
        self->m_108 = 1;
        void* q = fn_69de30(*(int*)0x00c7d07c);
        char v = *(char*)((char*)q + 0x260);
        self->m_10a = v;
        return &self->m_10a;
    }
    if (__builtin_expect(self->m_30 != 1, 0))
        return 0;
    char v = *(char*)self->m_38;
    self->m_108 = 0;
    void* q = fn_69de30(*(int*)0x00c7d07c);
    *(char*)((char*)q + 0x260) = v;
    return 0;
}
} } }
