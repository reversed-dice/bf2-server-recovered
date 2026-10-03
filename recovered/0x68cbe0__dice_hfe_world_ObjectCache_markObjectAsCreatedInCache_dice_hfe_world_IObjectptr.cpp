// FUNCTION: BF2 0x68cbe0
namespace dice { namespace hfe {
extern void fn_0x0068cb90(void* self);
struct Obj {
    unsigned char _pad[48];
    int m_c;
    void ic_68cbe0();
};
void Obj::ic_68cbe0() {
    m_c++;
    fn_0x0068cb90(this);
}
} }
