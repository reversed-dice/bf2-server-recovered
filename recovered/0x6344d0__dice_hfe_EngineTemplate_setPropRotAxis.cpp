// FUNCTION: BF2 0x6344d0
namespace dice { namespace hfe {
class EngineTemplate {
public:
    char _pad[0x624];
    int field;
    void setPropRotAxis(int v);
};
void EngineTemplate::setPropRotAxis(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_EngineTemplate_setPropRotAxis (0x6344d0)
