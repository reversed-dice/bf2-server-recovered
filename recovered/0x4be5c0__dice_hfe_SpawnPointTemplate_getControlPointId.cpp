// FUNCTION: BF2 0x4be5c0
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x88];
    int field;
    int getControlPointId() const;
};
int SpawnPointTemplate::getControlPointId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_getControlPointId (0x4be5c0)
