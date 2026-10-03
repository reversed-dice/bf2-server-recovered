// FUNCTION: BF2 0x61fef0
namespace dice { namespace hfe { namespace world {
extern void del_0x0061ce10(void* p);
extern void base_0x0061ce10(void* self);
extern void del_0x004085b8(void* self);
void dtor_61fef0(void* self) {
    *(void**)self = (void*)0xb7d970;
    *(void**)((char*)self + 0x20) = (void*)0xb7db78;
    void* m_60 = *(void**)((char*)self + 0x60);
    if (m_60 && --*(int*)m_60 == 0) del_0x0061ce10(m_60);
    base_0x0061ce10(self);
    del_0x004085b8(self);
}
} } }
