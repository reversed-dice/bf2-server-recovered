// FUNCTION: BF2 0x4253d0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

class ISquadManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual unsigned int getCommander(unsigned char team);
};
class IEventManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void sendEvent(int target, int type, void* data, float delay);
};
extern ISquadManager* squadManager;
extern IEventManager* eventManager;

struct DropVehicleData {
    DropVehicleData(int v, int p, unsigned char t) : vehicle(v), delay(0), position(p), team(t) {}
    int vehicle;
    float delay;
    int position;
    int team;
};

class DropVehicleEvent {
public:
    virtual ~DropVehicleEvent();
    bool executeServer(int client);
    char _pad[0x8];
    int m_vehicle;
    int m_position;
    unsigned char m_team;
};

bool DropVehicleEvent::executeServer(int client)
{
    bool ok = false;
    if (squadManager->getCommander(m_team) == (unsigned char)client) {
        DropVehicleData d(m_vehicle, m_position, m_team);
        eventManager->sendEvent(0, 0x15, &d, 0.0f);
        ok = true;
    }
    return ok;
}

} }
