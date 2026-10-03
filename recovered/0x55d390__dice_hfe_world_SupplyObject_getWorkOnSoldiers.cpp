// FUNCTION: BF2 0x55d390
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x238];
    void* m_p;
    unsigned char get() { return *(unsigned char*)((char*)m_p + 0x1fd); }
};
unsigned int f_568(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SupplyObject_getWorkOnSoldiers (0x55d390)
