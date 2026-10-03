// FUNCTION: BF2 0x464d60
namespace dice { namespace hfe {

class IBase;
class GameServer {
public:
    void setCurrentPersistenceObject(IBase* obj);
};

class IBase {};

void GameServer::setCurrentPersistenceObject(IBase* obj) {
    *reinterpret_cast<unsigned long long*>(reinterpret_cast<char*>(this) + 0x1d0) = reinterpret_cast<unsigned long long>(obj);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_setCurrentPersistenceObject_dice_hfe_IBaseptr (0x464d60)