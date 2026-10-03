// FUNCTION: BF2 0x5bf060
namespace dice { namespace hfe {
class StrategicObjectCompTemplate {
public:
    char _pad[0x40];
    int field;
    void set3dMapIcon(int v);
};
void StrategicObjectCompTemplate::set3dMapIcon(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_StrategicObjectCompTemplate_set3dMapIcon (0x5bf060)
