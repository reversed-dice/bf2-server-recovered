// FUNCTION: BF2 0x608e90
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* p);
void dtor_608e90(void* self) {
    *(void**)self = (void*)0xb77810;
    *(void**)((char*)self + 0x20) = (void*)0xb779e8;
    void* m_58 = *(void**)((char*)self + 0x58);
    if (m_58 && --*(int*)m_58 == 0) del_0x004085b8(m_58);
    void* m_48 = *(void**)((char*)self + 0x48);
    if (m_48 && --*(int*)m_48 == 0) del_0x004085b8(m_48);
    *(void**)((char*)self + 0x20) = (void*)0xb77c50;
    *(void**)self = (void*)0xb70110;
}
} } }
