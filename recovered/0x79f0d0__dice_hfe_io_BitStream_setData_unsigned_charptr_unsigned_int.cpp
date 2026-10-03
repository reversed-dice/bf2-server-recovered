// FUNCTION: BF2 0x79f0d0
namespace dice { namespace hfe { namespace io {
extern void fn_79e9f0();
extern void fn_407a08(void* a, void* b, int c);
extern void fn_79efa0(void* a, int b);
struct BS3 {
    void* m_0;
    unsigned char _pad[0x8 - 0x8];
    unsigned int m_8;
    int m_c;
    bool setData_0x79f0d0(void* arg2, unsigned int arg3);
};
bool BS3::setData_0x79f0d0(void* arg2, unsigned int arg3) {
    if (!m_0 || m_8 < arg3)
        return 0;
    fn_79e9f0();
    m_c = 0;
    fn_407a08(m_0, arg2, arg3);
    fn_79efa0(this, arg3 * 8);
    return 1;
}
} } }
