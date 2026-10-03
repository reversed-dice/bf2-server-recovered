// FUNCTION: BF2 0x738490
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x88];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x738490(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ConsoleObjectBaseImpl_getReturnType_const (0x738490)
