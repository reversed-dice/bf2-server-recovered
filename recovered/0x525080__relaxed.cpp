// FUNCTION: BF2 0x525080
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    void* m_p;
    void* get() { return (char*)m_p + 0x248; }
};
void* f_592(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getExitRotation (0x5368d0)
