// FUNCTION: BF2 0x685360
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x685360(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_CullerObject_getCuller (0x685360)
