// FUNCTION: BF2 0x40f5f0
namespace dice { namespace hfe { namespace world {

class IObject {
public:
    virtual ~IObject() {}
};

class ObjectManager {
public:
    virtual void method0() = 0;
    virtual void method1() = 0;
    virtual void method2() = 0;
    virtual void method3() = 0;
    virtual void method4() = 0;
    virtual void destroyObject(IObject*) = 0;
    virtual ~ObjectManager() {}
};

extern ObjectManager* objectManager;

} // namespace world

class Game {
public:
    bool destroyObject(world::IObject*);
};

bool Game::destroyObject(world::IObject* obj) {
    if (!obj) return 0;
    world::objectManager->destroyObject(obj);
    return 1;
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_Game_destroyObject_dice_hfe_world_IObjectptr (0x40f5f0)