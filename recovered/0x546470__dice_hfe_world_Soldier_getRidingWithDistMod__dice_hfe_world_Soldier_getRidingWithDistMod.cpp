// FUNCTION: BF2 0x546470
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x258];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x204); }
};
float f_600(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getRidingWithDistMod (0x546470)
