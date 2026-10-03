// FUNCTION: BF2 0x605ea0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x48];
    void* m_p;
    void* get() { void* p = m_p; void* r = 0; if (p != 0) r = *(void**)((char*)p + 0x8); return r; }
};
void* get_0x605ea0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_getTargetObject_const (0x605ea0)
