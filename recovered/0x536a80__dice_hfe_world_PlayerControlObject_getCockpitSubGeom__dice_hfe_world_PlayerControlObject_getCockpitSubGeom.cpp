// FUNCTION: BF2 0x536a80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x250];
    void* m_p;
    unsigned int get() { return *(unsigned int*)((char*)m_p + 0x360); }
};
unsigned int f_592(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getCockpitSubGeom (0x536a80)
