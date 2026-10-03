// FUNCTION: BF2 0x4c5b50
namespace dice { namespace hfe {
class Squad {
public:
    char _pad[0x10];
    int field;
    int getSquadId() const;
};
int Squad::getSquadId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Squad_getSquadId (0x4c5b50)
