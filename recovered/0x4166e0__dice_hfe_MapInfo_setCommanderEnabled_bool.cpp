// FUNCTION: BF2 0x4166e0
namespace dice { namespace hfe {
class MapInfo {
public:
    char _pad[0x1c];
    bool commanderEnabled;
    char _pad2[9];
    bool dirty;
    void setCommanderEnabled(bool enabled);
};
void MapInfo::setCommanderEnabled(bool enabled) {
    commanderEnabled = enabled;
    dirty = true;
}
}
}

// REVERSED_FUNCTION: dice_hfe_MapInfo_setCommanderEnabled_bool (0x4166e0)
