// FUNCTION: BF2 0x788ff0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_p;
    unsigned char get() { return *(unsigned char*)((char*)m_p + 0x21); }
};
unsigned int f_16(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectPhysical_doesAffectPathfinding_const (0x788ff0)
