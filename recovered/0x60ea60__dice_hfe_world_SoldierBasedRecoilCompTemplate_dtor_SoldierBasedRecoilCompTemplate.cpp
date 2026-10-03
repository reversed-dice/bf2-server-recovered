// FUNCTION: BF2 0x60ea60
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
void dtor_60ea60(void* self) {
    *(void**)self = (void*)0xb79a30;
    *(void**)((char*)self + 0x8) = (void*)0xb79ab8;
    void* m_78 = *(void**)((char*)self + 0x78);
    if (m_78) del_0x004085b8(m_78);
    void* m_60 = *(void**)((char*)self + 0x60);
    if (m_60) del_0x004085b8(m_60);
    *(void**)self = (void*)0xb79430;
    *(void**)((char*)self + 0x8) = (void*)0xb794b8;
}
} } }
