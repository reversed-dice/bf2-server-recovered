// FUNCTION: BF2 0x62bc20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    void* m_p;
    unsigned int get() { return *(unsigned int*)((char*)m_p + 0x10); }
};
unsigned int f_40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ZoomComp_getInput_const (0x62bc20)
