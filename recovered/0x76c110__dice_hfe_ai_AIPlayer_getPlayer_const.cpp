// FUNCTION: BF2 0x76c110
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x76c110(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIPlayer_getPlayer_const (0x76c110)
