// FUNCTION: BF2 0x62a950
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void del_0x004085b8(void* self);
void dtor_62a950(void* self) {
    *(void**)self = (void*)0xb7fdd0;
    *(void**)((char*)self + 0x8) = (void*)0xb7fe58;
    void* m_20 = *(void**)((char*)self + 0x20);
    if (m_20) del_0x004085b8(m_20);

    del_0x004085b8(self);
}
} } }
