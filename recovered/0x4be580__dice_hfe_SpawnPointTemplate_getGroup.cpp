// FUNCTION: BF2 0x4be580
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x84];
    int field;
    int getGroup() const;
};
int SpawnPointTemplate::getGroup() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_getGroup (0x4be580)
