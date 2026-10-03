// FUNCTION: BF2 0x78fbb0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x70];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x78fbb0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectSecondaryShared_getPrimaryObject (0x78fbb0)
