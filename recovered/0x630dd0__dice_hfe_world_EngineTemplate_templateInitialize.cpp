// FUNCTION: BF2 0x630dd0
namespace dice { namespace hfe {

class BanList {
public:
    void consoleClearBanList();
    void clearBanList();
    void storeBanList();
};

void BanList::consoleClearBanList() {
    clearBanList();
    storeBanList();
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_BanList_consoleClearBanList (0x4528c0)