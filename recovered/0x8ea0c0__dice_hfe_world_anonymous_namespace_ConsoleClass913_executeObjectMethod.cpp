// FUNCTION: BF2 0x8ea0c0
namespace dice { namespace hfe { namespace world {
extern void* fn_69de30(int a);
struct EOM { unsigned char _pad[0x30]; int m_30; void* m_38; unsigned char _pad2[0x108 - 0x40]; char m_108; };
int executeObjectMethod_0x8ea0c0(EOM* self, void* arg2) {
    if (self->m_30 != 1)
        return 0;
    void* p = self->m_38;
    int v = *(int*)p;
    self->m_108 = 0;
    void* q = fn_69de30(*(int*)0xc7ce4c);
    *(int*)((char*)q + 0x200) = v;
    return 0;
}
} } }
