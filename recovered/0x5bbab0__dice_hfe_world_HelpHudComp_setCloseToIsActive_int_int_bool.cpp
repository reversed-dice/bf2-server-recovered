// FUNCTION: BF2 0x5bbab0
namespace dice { namespace hfe { namespace world {
struct SCTA { unsigned char _pad[0x10]; void* m_10; };
void setCloseToIsActive_0x5bbab0(SCTA* self, int arg2, int arg3, bool arg4) {
    if (arg3 == 0)
        *(char*)((char*)self->m_10 + 0x8c) = (char)arg4;
    else if (arg3 == arg2)
        *(char*)((char*)self->m_10 + 0x8d) = (char)arg4;
    else
        *(char*)((char*)self->m_10 + 0x8e) = (char)arg4;
}
} } }
