// FUNCTION: BF2 0x6b7000
namespace dice { namespace anim {
extern void fn_6d01e0(void* a);
extern void* fn_6b66b0(void* a, void* b);
extern void* fn_6b8cd0(void* a, void* b);
extern void fn_6b67f0(void* a);
extern void fn_4085b8(void* a);
struct DB2 { unsigned char _pad[0x38]; void* m_38; };
void deleteBundle_0x6b7000(DB2* self, void* arg2) {
    if (!arg2)
        return;
    void* p = *(void**)((char*)self + 0x38);
    fn_6d01e0(*(void**)((char*)p + 8));
    void* q = fn_6b66b0(self, arg2);
    void* r = fn_6b8cd0(self, q);
    fn_6b67f0(arg2);
    fn_4085b8(arg2);
}
} }
