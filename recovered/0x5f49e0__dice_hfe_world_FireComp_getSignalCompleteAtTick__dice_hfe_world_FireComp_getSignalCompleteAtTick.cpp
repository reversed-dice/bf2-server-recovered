// FUNCTION: BF2 0x5f49e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x98];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5f49e0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getSignalCompleteAtTick (0x5f49e0)
