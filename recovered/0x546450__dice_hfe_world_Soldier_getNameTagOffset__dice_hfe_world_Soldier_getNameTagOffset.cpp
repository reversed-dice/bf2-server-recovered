// FUNCTION: BF2 0x546450
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x258];
    void* m_p;
    void* get() { return (char*)m_p + 0x214; }
};
void* f_600(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getNameTagOffset (0x546450)
