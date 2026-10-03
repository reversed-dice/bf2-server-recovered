// FUNCTION: BF2 0x4a34e0
namespace dice { namespace hfe {
extern void* g_playerScoreData;
class PlayerScoreData {
public:
    char _pad[0x20];
    int rank;
    void setRank(unsigned int r, void* player);
};
void PlayerScoreData::setRank(unsigned int r, void* player) {
    rank = r;
    void* psd = g_playerScoreData;
    void* vt = *(void**)psd;
    void (*fn)(void*, void*) = (void(*)(void*, void*))(*(void**)((char*)vt + 0x38));
    fn(psd, player);
}
}
}

// REVERSED_FUNCTION: dice_hfe_world_PlayerScoreData_setRank (0x4a34e0)
