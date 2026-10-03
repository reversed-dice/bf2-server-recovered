// FUNCTION: BF2 0x603e10
namespace dice { namespace hfe { namespace world {
extern void del_0x00608e20(void* p);
extern void base_0x00608e20(void* self);
extern void del_0x004085b8(void* self);
void dtor_61fef0(void* self) {
    *(void**)self = (void*)0xb76610;
    *(void**)((char*)self + 0x20) = (void*)0xb767e8;
    void* m_60 = *(void**)((char*)self + 0x88);
    if (m_60 && --*(int*)m_60 == 0) del_0x00608e20(m_60);
    base_0x00608e20(self);
    del_0x004085b8(self);
}
} } }
