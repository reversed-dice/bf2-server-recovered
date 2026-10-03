// FUNCTION: BF2 0x73e260
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x73e260(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_LoadStat_registerAtIncLoadCallback_void_ptr (0x73e260)
