// FUNCTION: BF2 0x5365b0
namespace dice { namespace hfe { namespace world {
extern void del_0x00539710(void* p);
extern void base_0x00539710(void* self);
extern void del_0x004085b8(void* self);
void dtor_5365b0(void* self) {
    *(void**)self = (void*)0xb494d0;
    *(void**)((char*)self + 0x100) = (void*)0xb49a98;
    *(void**)((char*)self + 0x238) = (void*)0xb49ad0;
    *(void**)((char*)self + 0x240) = (void*)0xb49da0;
    void* m_610 = *(void**)((char*)self + 0x610);
    if (m_610 && --*(int*)m_610 == 0) del_0x00539710(m_610);
    base_0x00539710(self);
    del_0x004085b8(self);
}
} } }
