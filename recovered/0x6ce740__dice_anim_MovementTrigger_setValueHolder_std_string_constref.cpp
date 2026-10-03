// FUNCTION: BF2 0x6ce740
namespace dice { namespace hfe {
extern void* fn_6d1500(void* obj);
extern void* g_obj_10a3140;
struct OB6 {
    unsigned char _pad[0x48];
    void* m_48;
    void f_0x6ce740();
};
void OB6::f_0x6ce740() {
    m_48 = fn_6d1500(g_obj_10a3140);
}
} }
