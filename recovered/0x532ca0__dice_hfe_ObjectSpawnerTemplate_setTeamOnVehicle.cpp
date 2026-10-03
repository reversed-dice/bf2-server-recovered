// FUNCTION: BF2 0x532ca0
namespace dice { namespace hfe {
class ObjectSpawnerTemplate {
public:
    char _pad[0x249];
    bool field;
    void setTeamOnVehicle(bool v);
};
void ObjectSpawnerTemplate::setTeamOnVehicle(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectSpawnerTemplate_setTeamOnVehicle (0x532ca0)
