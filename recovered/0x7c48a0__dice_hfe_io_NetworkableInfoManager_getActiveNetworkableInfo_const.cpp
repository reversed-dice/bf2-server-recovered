// FUNCTION: BF2 0x7c48a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x70];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x7c48a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfoManager_getActiveNetworkableInfo_const (0x7c48a0)
