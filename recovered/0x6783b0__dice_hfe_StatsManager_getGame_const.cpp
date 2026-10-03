// FUNCTION: BF2 0x6783b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x6783b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_StatsManager_getGame_const (0x6783b0)
