// FUNCTION: BF2 0x44cae0
namespace dice { namespace hfe {

class PlayerActionManager {
public:
    ~PlayerActionManager();
};

PlayerActionManager::~PlayerActionManager() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2fd50);
    operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_PlayerActionManager_dtor_PlayerActionManager (0x44cae0)