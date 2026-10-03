// FUNCTION: BF2 0x7c48b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x70];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x7c48b0(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfoManager_setActiveNetworkableInfo_dice_hfe_io_INetworkableInfo_constptr (0x7c48b0)
