// FUNCTION: BF2 0x441940
namespace dice {
namespace hfe {

class GameEventManager {
public:
    void setConnectionId_int(int id);
};

void GameEventManager::setConnectionId_int(int id) {
    *(int*)((char*)this + 0x14) = id;
}

} // namespace hfe
} // namespace dice