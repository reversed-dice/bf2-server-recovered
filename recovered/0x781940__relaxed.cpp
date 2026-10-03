// FUNCTION: BF2 0x781940
namespace dice { namespace hfe { namespace world {
extern void sub_0x00782370(void* self, void* arg);
extern void del_0x004085b8(void* p);
extern void del_0x00782bd0(void* self);
void dtor_781970(void* self) {
    *(void**)self = (void*)0xba3390;
    char* s40 = (char*)self + 0x40;
    sub_0x00782370(s40, *(void**)(s40 + 0x10));
    void* m_10 = *(void**)((char*)self + 0x10);
    if (m_10) del_0x004085b8(m_10);
    del_0x00782bd0(self);
}
} } }
