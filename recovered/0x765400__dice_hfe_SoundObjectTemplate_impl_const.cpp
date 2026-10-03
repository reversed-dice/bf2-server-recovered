// FUNCTION: BF2 0x765400
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x78];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x765400(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_impl_const (0x765400)
