// FUNCTION: BF2 0x748b10
namespace dice { namespace hfe {
extern double fn_408058(void* obj, int a, int b);
struct OB7 {
    unsigned char _pad[0x0];
    void* m_obj;
    float f_0x748b10();
};
float OB7::f_0x748b10() {
    return (float)fn_408058(m_obj, 0, 0);
}
} }
