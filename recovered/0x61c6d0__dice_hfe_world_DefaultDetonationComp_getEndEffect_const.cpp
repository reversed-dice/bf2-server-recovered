// FUNCTION: BF2 0x61c6d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    void* m_p;
    void* get() { return *(void**)((char*)m_p + 0x20); }
};
void* f_48(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationComp_getEndEffect_const (0x61c6d0)
