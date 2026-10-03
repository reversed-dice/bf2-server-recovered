// FUNCTION: BF2 0x70a2a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_p;
    void* get() { return (char*)m_p + 0xc; }
};
void* f_16(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_BspBuilder_getMaxs_const (0x70a2a0)
