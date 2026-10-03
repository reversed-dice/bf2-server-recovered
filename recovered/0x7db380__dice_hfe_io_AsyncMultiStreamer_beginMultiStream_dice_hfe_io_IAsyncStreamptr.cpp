// FUNCTION: BF2 0x7db380
namespace dice { namespace hfe { namespace io {
extern void* fn_407508(int a);
extern void fn_7db320(void* a, void* b);
extern void fn_407e78(void* a, void* b);
struct BMS2 { unsigned char _pad[0x10]; char m_10; };
void* beginMultiStream_0x7db380(BMS2* self, void* arg2) {
    void* p = fn_407508(0x38);
    fn_7db320(p, arg2);
    void* link = (char*)self + 0x10;
    void* q = fn_407508(0x18);
    *(void**)((char*)q + 0x10) = p;
    fn_407e78(q, link);
    return p;
}
} } }
