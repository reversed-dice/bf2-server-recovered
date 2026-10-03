// FUNCTION: BF2 0x4bd4b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x98];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x4bd4b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_IObject_getNetworkable_const (0x4bd4b0)
