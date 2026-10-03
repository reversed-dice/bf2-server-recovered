// FUNCTION: BF2 0x5bbb40
namespace dice { namespace hfe { namespace world {
struct GC { unsigned char _pad[0x10]; void* m_10; };
void* getClose_0x5bbb40(GC* self, int arg2, int arg3) {
    if (arg3 == 0)
        return (char*)self->m_10 + 56;
    if (arg3 == arg2)
        return (char*)self->m_10 + 64;
    return (char*)self->m_10 + 72;
}
} } }
