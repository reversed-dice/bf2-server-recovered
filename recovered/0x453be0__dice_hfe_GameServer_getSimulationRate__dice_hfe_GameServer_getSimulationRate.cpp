// FUNCTION: BF2 0x453be0
namespace dice { namespace hfe {

class System {
public:
    virtual ~System();
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    virtual void unknown3();
    virtual void unknown4();
    virtual void unknown5();
    virtual void unknown6();
    virtual void getSimulationRate() const;
};

class GameServer {
public:
    void getSimulationRate() const;
};

extern System* g_system;

void GameServer::getSimulationRate() const {
    g_system->getSimulationRate();
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getSimulationRate_const (0x453be0)