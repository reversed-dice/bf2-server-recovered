// FUNCTION: BF2 0x62ac00
namespace dice { namespace hfe {
class ToggleCameraCompTemplate {
public:
    char _pad[0x1c];
    int field;
    void setChangeCameraId(int v);
};
void ToggleCameraCompTemplate::setChangeCameraId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ToggleCameraCompTemplate_setChangeCameraId (0x62ac00)
