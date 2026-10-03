// FUNCTION: BF2 0x708ff0
namespace dice { namespace hfe { namespace world {
extern void* fn_407508(int size);
extern void fn_70f5f0(void* a);
extern bool fn_7107b0(void* a, void* b, void* c, void* d);
struct BSP2 {
    unsigned char _pad[0x78];
    void* m_78;
    bool load_0x708ff0(void* arg2, void* arg3, void* arg4);
};
bool BSP2::load_0x708ff0(void* arg2, void* arg3, void* arg4) {
    void* p = fn_407508(0x70);
    fn_70f5f0(p);
    m_78 = p;
    return fn_7107b0(p, arg2, arg3, arg4);
}
} } }
