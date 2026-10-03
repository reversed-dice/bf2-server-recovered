// FUNCTION: BF2 0x471020
namespace dice { namespace hfe {

class GameLogic {
public:
    static void destroyAllControlPoints();
};

class ClientGameLogic {
public:
    virtual void __pad0();
    virtual void __pad1();
    virtual void __pad2();
    virtual void __pad3();
    virtual void __pad4();
    virtual void __pad5();
    virtual void __pad6();
    virtual void __pad7();
    virtual void __pad8();
    virtual void __pad9();
    void restartDemoPlayback();
};

} }

namespace dice { namespace hfe { namespace world {

class ObjectManager {
public:
    virtual void __pad0();
    virtual void __pad1();
    virtual void __pad2();
    virtual void __pad3();
    virtual void __pad4();
    virtual void __pad5();
    virtual void __pad6();
    virtual void __pad7();
    virtual void __pad8();
    virtual void __pad9();
    virtual void __pad10();
    virtual void __pad11();
    virtual void __pad12();
    virtual void __pad13();
    virtual void __pad14();
    virtual void __pad15();
    virtual void __pad16();
    virtual void __pad17();
    virtual void __pad18();
    virtual void __pad19();
    virtual void __pad20();
    virtual void __pad21();
    virtual void __pad22();
    virtual void __pad23();
    virtual void __pad24();
    virtual void __pad25();
    virtual void __pad26();
    virtual void __pad27();
    virtual void __pad28();
    virtual void __pad29();
    virtual void __pad30();
    virtual void __pad31();
    virtual void __pad32();
    virtual void __pad33();
    virtual void __pad34();
    virtual void __pad35();
    virtual void __pad36();
    virtual void __pad37();
    virtual void __pad38();
};

extern ObjectManager* objectManager;

} } }

namespace dice { namespace hfe { namespace io {

class NetworkManager {
public:
    static void regressNetworkableIds(NetworkManager* mgr);
};

extern NetworkManager* networkManager;

} } }

void dice::hfe::ClientGameLogic::restartDemoPlayback() {
    dice::hfe::GameLogic::destroyAllControlPoints();
    this->__pad9();
    dice::hfe::world::objectManager->__pad38();
    dice::hfe::io::NetworkManager::regressNetworkableIds(dice::hfe::io::networkManager);
}
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_restartDemoPlayback (0x471020)