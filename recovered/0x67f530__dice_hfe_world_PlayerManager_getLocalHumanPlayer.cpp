// FUNCTION: BF2 0x67f530
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xf0];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x67f530(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerManager_getLocalHumanPlayer (0x67f530)
