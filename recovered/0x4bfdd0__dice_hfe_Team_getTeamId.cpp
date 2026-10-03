// FUNCTION: BF2 0x4bfdd0
namespace dice { namespace hfe {
class Team {
public:
    char _pad[0x90];
    int field;
    int getTeamId() const;
};
int Team::getTeamId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Team_getTeamId (0x4bfdd0)
