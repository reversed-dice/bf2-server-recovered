// FUNCTION: BF2 0x4a49b0
namespace dice { namespace hfe {

class Vec3;

class ServerGameLogic {
public:
    void moveLocalHumanPlayerToPoint(Vec3 const& point);
};

namespace world {

class IPlayerManager;

extern IPlayerManager* playerManager;

}

void ServerGameLogic::moveLocalHumanPlayerToPoint(Vec3 const& point) {
    world::IPlayerManager* pm = world::playerManager;
    void* player = ((void*(*)(void*))(*(void***)pm)[0x60/8])(pm);
    if (!player) return;
    
    void* obj = ((void*(*)(void*))(*(void***)player)[0x90/8])(player);
    if (!obj) return;
    
    ((void(*)(void*, Vec3 const&))(*(void***)obj)[0xe0/8])(obj, point);
    
    void* field = *(void**)((char*)obj + 0x88);
    if (!field) return;
    
    ((void(*)(void*, int))(*(void***)field)[0x230/8])(field, 1);
}

} }
// REVERSED_FUNCTION: dice::hfe::ServerGameLogic::moveLocalHumanPlayerToPoint_dice_hfe_Vec3_constref (0x4a49b0)