// FUNCTION: BF2 0x4c5b60
namespace dice { namespace hfe {
class Squad {
public:
    char _pad[0x140];
    int field;
    int getSpawnGroupId() const;
};
int Squad::getSpawnGroupId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Squad_getSpawnGroupId (0x4c5b60)
