// FUNCTION: BF2 0x6345e0
namespace dice { namespace hfe {
class EngineTemplate {
public:
    char _pad[0x629];
    bool field;
    void setPureRotational(bool v);
};
void EngineTemplate::setPureRotational(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_EngineTemplate_setPureRotational (0x6345e0)
