// FUNCTION: BF2 0x46d2e0
namespace dice { namespace hfe {

class ServerQueryCache {
public:
    int getNumPlayers() const;
};

int ServerQueryCache::getNumPlayers() const {
    return *(int*)((char*)this + 0x170);
}

} }
