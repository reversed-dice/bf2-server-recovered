// FUNCTION: BF2 0x46d300
namespace dice { namespace hfe {

class PlayerQueryKey { public: int m_value; };

class ServerQueryCache {
public:
    unsigned char __pad0[0x178];
    unsigned long long m_playerKeys[512];
    long* m_unk_0x1178;

    unsigned long long getPlayerKey(int playerIndex, PlayerQueryKey queryKey) const;
};

unsigned long long ServerQueryCache::getPlayerKey(int playerIndex, PlayerQueryKey queryKey) const {
    if ((unsigned int)queryKey.m_value <= 7u) goto valid;
ret0:
    return 0;
valid:
    if ((unsigned int)playerIndex > 0x3fu) goto ret0;
    return m_playerKeys[(long long)playerIndex * 8 + (long long)queryKey.m_value];
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerQueryCache_getPlayerKey_int_dice_hfe_PlayerQueryKey_const (0x46d300)