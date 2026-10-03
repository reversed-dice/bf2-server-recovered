// FUNCTION: BF2 0x7c46e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x7c46e0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfo_setPredictionMode_dice_hfe_io_PredictionMode (0x7c46e0)
