// FUNCTION: BF2 0x559ac0
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
extern void del_0x0058b170(void* self);
void dtor_559ac0(void* self) {
    *(void**)self = (void*)0xb50130;
    *(void**)((char*)self + 0x100) = (void*)0xb50440;
    void* m_2a8 = *(void**)((char*)self + 0x2a8);
    if (m_2a8) del_0x004085b8(m_2a8);
    void* m_290 = *(void**)((char*)self + 0x290);
    if (m_290) del_0x004085b8(m_290);
    void* m_270 = *(void**)((char*)self + 0x270);
    if (m_270) del_0x004085b8(m_270);
    void* m_258 = *(void**)((char*)self + 0x258);
    if (m_258) del_0x004085b8(m_258);
    void* m_240 = *(void**)((char*)self + 0x240);
    if (m_240) del_0x004085b8(m_240);
    del_0x0058b170(self);
}
} } }
