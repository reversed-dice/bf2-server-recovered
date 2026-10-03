// FUNCTION: BF2 0x61c6c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    void* m_p;
    unsigned int get() { return *(unsigned int*)((char*)m_p + 0x88); }
};
unsigned int f_48(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationComp_getRadiusTriggerType_const (0x61c6c0)
