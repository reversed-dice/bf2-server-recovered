// FUNCTION: BF2 0x519ee0
namespace dice { namespace hfe { namespace world {
extern void fn_519d40(void* a, void* b);
extern void fn_539f00(void* a, int b);
struct GHD { unsigned char _pad[0x610]; void* m_610; void* m_618; };
void destroy_0x519ee0(GHD* self) {
    void* p = self->m_610;
    if (p) {
        void* q = self->m_618;
        fn_519d40(p, q ? (char*)q + 0x248 : 0);
    }
    fn_539f00(self, 1);
}
} } }
