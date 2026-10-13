// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x433b10
namespace dice { namespace hfe {

class ISquadManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual int getCommander(unsigned char team);
};
class IEventManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void sendEvent(int target, int type, void* data, float delay);
};
extern ISquadManager* squadManager;
extern IEventManager* eventManager;

struct UAVData {
    UAVData(int x_, int z_, unsigned char w) : x(x_), delay(0), z(z_), who(w) {}
    UAVData(int x_, int z_, int w) : x(x_), delay(0), z(z_), who(w) {}
    int x;
    float delay;
    int z;
    int who;
};

class UAVEvent {
public:
    virtual ~UAVEvent();
    bool executeServer(int client);
    char _pad[0x8];
    int m_x;
    int m_z;
    unsigned char m_team;
    bool m_remove;
};

bool UAVEvent::executeServer(int client)
{
    int z = m_z;
    int x = m_x;
    if (squadManager == 0 || squadManager->getCommander(m_team) != (unsigned char)client)
        return true;
    if (!m_remove) {
        UAVData d(x, z, m_team);
        eventManager->sendEvent(0, 0x11, &d, 0.0f);
    } else {
        UAVData d(x, z, client);
        eventManager->sendEvent(0, 0x12, &d, 0.0f);
    }
    return true;
}

} }
