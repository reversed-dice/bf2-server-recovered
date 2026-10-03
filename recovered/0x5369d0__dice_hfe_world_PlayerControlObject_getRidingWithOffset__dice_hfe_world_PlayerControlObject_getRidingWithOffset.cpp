// FUNCTION: BF2 0x5369d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x250];
    void* m_p;
    void* get() { return (char*)m_p + 0x284; }
};
void* f_592(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getRidingWithOffset (0x5369d0)
