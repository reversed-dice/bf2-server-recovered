// FUNCTION: BF2 0x73ccd0
namespace dice { namespace hfe {

namespace world {
    class IObject;
}

class Game {
public:
    bool destroyObject(world::IObject* obj);
};

class GameServer : public Game {
public:
    bool destroyObject(world::IObject* obj);
};

bool GameServer::destroyObject(world::IObject* obj) {
    return Game::destroyObject(obj);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_destroyObject_dice_hfe_world_IObjectptr (0x453990)