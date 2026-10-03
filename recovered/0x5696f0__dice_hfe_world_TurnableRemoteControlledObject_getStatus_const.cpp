// FUNCTION: BF2 0x5696f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2ac];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5696f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_TurnableRemoteControlledObject_getStatus_const (0x5696f0)
