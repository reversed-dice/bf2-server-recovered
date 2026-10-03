// FUNCTION: BF2 0x78f3f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x78];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x78f3f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectSecondaryReal_getPrimaryObject (0x78f3f0)
