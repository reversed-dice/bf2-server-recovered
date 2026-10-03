// FUNCTION: BF2 0x464de0
namespace dice { namespace hfe {
class GameServer_IEventWrapper {
public:
    ~GameServer_IEventWrapper();
};
GameServer_IEventWrapper::~GameServer_IEventWrapper() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb30c90);
}
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_IEventWrapper_dtor_IEventWrapper (0x464de0)