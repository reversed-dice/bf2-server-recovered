// FUNCTION: BF2 0x80abc0
namespace dice { namespace hfe {
extern void fn_806bb0(void* a, void* b, void* c, void* d);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
struct CKH { unsigned char _pad[0x40]; void* m_40; unsigned char _pad2[0x48 - 0x48]; int m_48; };
struct CKH2 { void* m_0; void* m_8; };
void ciKillHandler_0x80abc0(void* self, CKH* arg2) {
    if (arg2->m_48 == 2) {
        CKH2* p = (CKH2*)arg2->m_40;
        fn_806bb0(self, p->m_0, (void*)0x80aa10, p->m_8);
    } else {
        fn_407ee8((void*)0xbb0e08, (void*)0xbb1b88, 0x859, (void*)0xbb156b);
    }
}
} }
