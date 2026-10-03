// FUNCTION: BF2 0x4173e0
namespace dice {
namespace hfe {

class MapList {
public:
    void internalSetDirty();

private:
    unsigned char __pad_00[0x60];
    bool m_isDirty;    // offset 0x60
    bool m_updating;   // offset 0x61
};

void MapList::internalSetDirty()
{
    m_isDirty = true;
    m_updating = false;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_MapList_internalSetDirty::dice_hfe_MapList_internalSetDirty (0x4173e0)