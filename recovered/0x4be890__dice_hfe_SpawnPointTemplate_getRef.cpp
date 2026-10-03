// FUNCTION: BF2 0x4be890
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x70];
    int field;
    int getRef() const;
};
int SpawnPointTemplate::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_getRef (0x4be890)
