// FUNCTION: BF2 0x74afc0
namespace dice { namespace hfe {
extern void* fn_407508(int size);
struct OB9 {
    void* m_vtable;
    void* m_8;
    OB9();
};
OB9::OB9() {
    m_vtable = (void*)0xb9a550;
    char* p = (char*)fn_407508(0x10);
    p[8] = 0;
    m_8 = p;
}
} }
