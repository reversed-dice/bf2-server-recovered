// FUNCTION: BF2 0x4157f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x48];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x4157f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Game_getCurrentMapSize_const__dice_hfe_Game_getCurrentMapSize_const (0x4157f0)
