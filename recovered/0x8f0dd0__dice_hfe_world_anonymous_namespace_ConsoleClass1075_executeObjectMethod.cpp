// FUNCTION: BF2 0x8f0dd0
namespace dice { namespace hfe { namespace world {
extern void* fn_69de30(int a);
struct EOM_8f0dd0 { unsigned char _pad[0x30]; int m_30; unsigned char _pad2[0x38-0x34]; void* m_38; unsigned char _pad3[0x108 - 0x40]; char m_108; char m_109; char m_10a; };
char* executeObjectMethod_8f0dd0(EOM_8f0dd0* self, void* arg2) {
    if (__builtin_expect(self->m_30 == 0, 1)) {
        self->m_108 = 1;
        void* q = fn_69de30(*(int*)0x00c7ce78);
        char v = *(char*)((char*)q + 0x3b5);
        self->m_10a = v;
        return &self->m_10a;
    }
    if (__builtin_expect(self->m_30 != 1, 0))
        return 0;
    char v = *(char*)self->m_38;
    self->m_108 = 0;
    void* q = fn_69de30(*(int*)0x00c7ce78);
    *(char*)((char*)q + 0x3b5) = v;
    return 0;
}
} } }
