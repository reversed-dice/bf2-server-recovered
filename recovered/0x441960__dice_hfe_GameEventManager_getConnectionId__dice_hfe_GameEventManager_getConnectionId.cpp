// FUNCTION: BF2 0x441960
namespace dice { namespace hfe {

class GameEventManager {
public:
    int getConnectionId();
};

int GameEventManager::getConnectionId() {
    return *(int*)((char*)this + 0x14);
}

} }
