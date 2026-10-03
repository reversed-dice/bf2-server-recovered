// FUNCTION: BF2 0x5bbae0
namespace dice { namespace hfe { namespace world {
struct GICA { unsigned char _pad[0x10]; void* m_10; };
int getIsCloseToActive_0x5bbae0(GICA* self, int arg2, int arg3) {
    if (arg3 == 0)
        return *(unsigned char*)((char*)self->m_10 + 0x8c);
    if (arg3 == arg2)
        return *(unsigned char*)((char*)self->m_10 + 0x8d);
    return *(unsigned char*)((char*)self->m_10 + 0x8e);
}
} } }
