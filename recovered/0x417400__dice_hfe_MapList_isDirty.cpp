// FUNCTION: BF2 0x417400
namespace dice { namespace hfe {
class MapList {
public:
    char _pad[0x60];
    bool field;
    int isDirty() const;
};
int MapList::isDirty() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_MapList_isDirty (0x417400)
