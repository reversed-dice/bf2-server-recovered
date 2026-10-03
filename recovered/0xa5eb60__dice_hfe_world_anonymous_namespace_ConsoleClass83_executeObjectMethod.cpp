// FUNCTION: BF2 0xa5eb60
namespace dice { namespace hfe { namespace world {
extern void* fn_69de30(int a);
struct EOM_a5eb60 { unsigned char _pad[0x30]; int m_30; unsigned char _pad2[0x38-0x34]; void* m_38; unsigned char _pad3[0x108 - 0x40]; char m_108; int m_10c; };
int* executeObjectMethod_a5eb60(EOM_a5eb60* self, void* arg2) {
    if (__builtin_expect(self->m_30 == 0, 1)) {
        self->m_108 = 1;
        void* q = fn_69de30(*(int*)0x00c7d090);
        int v = *(int*)((char*)q + 0x650);
        self->m_10c = v;
        return &self->m_10c;
    }
    if (__builtin_expect(self->m_30 != 1, 0))
        return 0;
    int v = *(int*)self->m_38;
    self->m_108 = 0;
    void* q = fn_69de30(*(int*)0x00c7d090);
    *(int*)((char*)q + 0x650) = v;
    return 0;
}
} } }
