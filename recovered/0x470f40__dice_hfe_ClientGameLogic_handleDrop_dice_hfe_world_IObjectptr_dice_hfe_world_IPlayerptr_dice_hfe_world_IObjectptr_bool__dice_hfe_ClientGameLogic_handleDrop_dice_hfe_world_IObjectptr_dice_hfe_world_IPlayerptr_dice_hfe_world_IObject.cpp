// FUNCTION: BF2 0x470f40
namespace dice { namespace hfe {

class IPlayer;
class IObject;

class ClientGameLogic {
public:
    void handleDrop(IObject* obj, IPlayer* player, IObject* containerObj, bool);
};

class IObject {
public:
    virtual void _pad0() = 0;
    virtual void _pad1() = 0;
    virtual void _pad2() = 0;
    virtual void* queryInterface(unsigned int iid) = 0;
};

class IItemContainerObject {
public:
    virtual void _pad0() = 0;
    virtual void _pad1() = 0;
    virtual void _pad2() = 0;
    virtual void _pad3() = 0;
    virtual void _pad4() = 0;
    virtual void _pad5() = 0;
    virtual void _pad6() = 0;
    virtual void _pad7() = 0;
    virtual void _pad8() = 0;
    virtual void _pad9() = 0;
    virtual void drop(IPlayer* player, IObject* obj) = 0;
};

extern unsigned int IID_IItemContainerObject;

void ClientGameLogic::handleDrop(IObject* obj, IPlayer* player, IObject* containerObj, bool) {
    IItemContainerObject* container = 0;
    if (containerObj != 0) {
        container = reinterpret_cast<IItemContainerObject*>(containerObj->queryInterface(IID_IItemContainerObject));
    }
    container->drop(player, obj);
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_handleDrop_dice_hfe_world_IObjectptr_dice_hfe_world_IPlayerptr_dice_hfe_world_IObjectptr_bool (0x470f40)