// FUNCTION: BF2 0x56f530
namespace dice { namespace hfe { namespace world {
extern void fn_56e810(void* a, void* b);
struct ZC2 {
    unsigned char _pad[0x270];
    void* m_270;
    unsigned char _pad2[0x600 - 0x278];
    void* m_600;
    void exit_0x56f530();
};
void ZC2::exit_0x56f530() {
    void* p = m_270;
    if (!p)
        return;
    void* q = *(void**)((char*)p + 8);
    if (!q)
        return;
    void* r = m_600;
    if (!r)
        return;
    fn_56e810(r, (char*)q + 0x248);
}
} } }
