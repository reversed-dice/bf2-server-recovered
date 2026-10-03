// FUNCTION: BF2 0x4166d0
namespace dice { namespace hfe {
class MapInfo {
public:
    char _pad[0x1c];
    bool field;
    int getCommanderEnabled() const;
};
int MapInfo::getCommanderEnabled() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_MapInfo_getCommanderEnabled (0x4166d0)
