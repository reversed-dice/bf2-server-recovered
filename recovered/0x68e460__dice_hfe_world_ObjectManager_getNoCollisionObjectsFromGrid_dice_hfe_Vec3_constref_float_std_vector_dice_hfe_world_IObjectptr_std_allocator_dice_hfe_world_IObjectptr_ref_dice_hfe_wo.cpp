// FUNCTION: BF2 0x68e460
namespace dice { namespace hfe { namespace world {
extern void fn_68e2b0(void* a, int b, int c, void* d, void* e, void* f);
struct OM3 {
    unsigned char m_0[0x10];
    void getObjects_68e460(void* arg2, void* arg3, void* arg4);
};
void OM3::getObjects_68e460(void* arg2, void* arg3, void* arg4) {
    fn_68e2b0(this, 0, 0, arg2, arg3, arg4);
}
} } }
