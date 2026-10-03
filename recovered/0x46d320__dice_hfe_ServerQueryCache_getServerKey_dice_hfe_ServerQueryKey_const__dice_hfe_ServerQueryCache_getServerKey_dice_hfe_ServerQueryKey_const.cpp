// FUNCTION: BF2 0x46d320
namespace dice { namespace hfe {

typedef int ServerQueryKey;

class ServerQueryCache {
public:
    unsigned long long getServerKey(ServerQueryKey key) const;

private:
    void* vtable;                    // +0x00
    unsigned long long m_keys[45];   // +0x08
};

unsigned long long ServerQueryCache::getServerKey(ServerQueryKey key) const {
    if ((unsigned int)key > 44) return 0;
    return m_keys[key];
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerQueryCache_getServerKey_dice_hfe_ServerQueryKey_const (0x46d320)