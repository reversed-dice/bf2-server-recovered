// FUNCTION: BF2 0x7e65a0
namespace dice { namespace hfe { namespace io {
extern void* fn_74c180(void* a);
extern void* fn_4073a8(int size);
struct FH {
    void* m_0;
    void* m_8;
    int init_0x7e65a0(void* arg2);
};
int FH::init_0x7e65a0(void* arg2) {
    void* p = fn_74c180(*(void**)arg2);
    m_0 = p;
    int r = 0;
    if (p) {
        m_8 = fn_4073a8(0x10000);
        r = 1;
    }
    return r;
}
} } }
