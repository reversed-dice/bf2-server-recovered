// FUNCTION: BF2 0x417410
namespace dice { namespace hfe {
class MapList {
public:
    char _pad[0x60];
    bool field;
    void setDirty(bool v);
};
void MapList::setDirty(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_MapList_setDirty (0x417410)
