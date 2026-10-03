// FUNCTION: BF2 0x6b6340
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x6b6340(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_anim_BundleManager_getActiveBundlePtr_const (0x6b6340)
