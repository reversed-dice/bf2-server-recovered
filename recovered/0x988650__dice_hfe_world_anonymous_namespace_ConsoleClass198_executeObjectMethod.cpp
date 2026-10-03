// FUNCTION: BF2 0x988650
namespace dice { namespace hfe { namespace world {
extern void* fn_69de30(int a);
struct EOM_988650 { unsigned char _pad[0x30]; int m_30; unsigned char _pad2[0x38-0x34]; void* m_38; unsigned char _pad3[0x108 - 0x40]; char m_108; char m_109; char m_10a; };
char* executeObjectMethod_988650(EOM_988650* self, void* arg2) {
    if (__builtin_expect(self->m_30 == 0, 1)) {
        self->m_108 = 1;
        void* q = fn_69de30(*(int*)0x00c7d0a4);
        char v = *(char*)((char*)q + 0x1f1);
        self->m_10a = v;
        return &self->m_10a;
    }
    if (__builtin_expect(self->m_30 != 1, 0))
        return 0;
    char v = *(char*)self->m_38;
    self->m_108 = 0;
    void* q = fn_69de30(*(int*)0x00c7d0a4);
    *(char*)((char*)q + 0x1f1) = v;
    return 0;
}
} } }
