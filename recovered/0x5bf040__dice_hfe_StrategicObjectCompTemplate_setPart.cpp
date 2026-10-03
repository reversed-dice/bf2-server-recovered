// FUNCTION: BF2 0x5bf040
namespace dice { namespace hfe {
class StrategicObjectCompTemplate {
public:
    char _pad[0x20];
    int field;
    void setPart(int v);
};
void StrategicObjectCompTemplate::setPart(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_StrategicObjectCompTemplate_setPart (0x5bf040)
