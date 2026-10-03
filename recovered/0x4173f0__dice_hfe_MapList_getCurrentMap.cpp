// FUNCTION: BF2 0x4173f0
namespace dice { namespace hfe {
class MapList {
public:
    char _pad[0x8];
    int field;
    int getCurrentMap() const;
};
int MapList::getCurrentMap() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_MapList_getCurrentMap (0x4173f0)
