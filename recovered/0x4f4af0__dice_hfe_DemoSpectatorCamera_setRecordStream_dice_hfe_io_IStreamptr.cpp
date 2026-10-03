// FUNCTION: BF2 0x4f4af0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x88];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x4f4af0(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_DemoSpectatorCamera_setRecordStream_dice_hfe_io_IStreamptr (0x4f4af0)
