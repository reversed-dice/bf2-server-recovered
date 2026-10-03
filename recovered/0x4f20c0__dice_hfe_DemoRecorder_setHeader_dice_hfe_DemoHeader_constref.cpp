// FUNCTION: BF2 0x4f20c0
namespace dice { namespace hfe {
extern void fn_408238(void* a, void* b);
struct DR3 {
    unsigned char _pad[0x80];
    void* m_80;
    void setHeader_0x4f20c0(void* arg2);
};
void DR3::setHeader_0x4f20c0(void* arg2) {
    void* p = *(void**)((char*)this + 0x80);
    *(int*)((char*)p) = *(int*)((char*)arg2);
    fn_408238((char*)p + 0x8, (char*)arg2 + 0x8);
    fn_408238((char*)p + 0x10, (char*)arg2 + 0x10);
    fn_408238((char*)p + 0x18, (char*)arg2 + 0x18);
    *(unsigned char*)((char*)p + 0x20) = *(unsigned char*)((char*)arg2 + 0x20);
    *(unsigned char*)((char*)p + 0x21) = *(unsigned char*)((char*)arg2 + 0x21);
}
} }
