// FUNCTION: BF2 0x4c4fa0
// BF2_FLAGS: -fno-strict-aliasing
#include <set>
#include <string>

namespace dice { namespace hfe {

class Squad;

extern std::string defaultSquadNames[10];

class ISquadManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void reset();
    virtual void reAddDynamicSpawnGroups();
    virtual void sendSquadManagerState(int);
    virtual void setSquadName(int, int, int, std::string const&, bool);
    virtual void setIsPrivate(int, int, bool, bool);
    virtual void setIsAccepted(int, int, bool, int, int, bool);
    virtual void getSquadInfo(int, int);
    virtual void inviteToSquad(int, int, int, bool, bool);
    virtual void addToSquad(int, int, int);
    virtual void removeFromSquad(int, int, int, bool);
    virtual void setSquadLeader(int, int, int, bool);
    virtual void getSquadLeader(int, int);
    virtual void getFirstUnusedSquad(int) const;
    virtual void issueSquadOrder(int, int, int&, bool);
    virtual void issueCommanderOrder(int, int, int&, bool);
    virtual void issueRequest(int, int, int&, bool);
    virtual void resetSquad(int, int);
    virtual void findNewSquadLeader(int, int, int);
    virtual void applyForCommander(int, int);
    virtual void popNextCommanderApplicant(int);
    virtual void acceptCommander(int, int);
    virtual void declineCommander(int, int);
    virtual void resignCommander(int);
    virtual void setCommander(int, int);
    virtual void getCommander(int);
    virtual void getCommanderCam(int);
    virtual void setCommanderToSoldierMode(int);
    virtual void setCommanderToOverheadCamMode(int);
    virtual void setCommanderOverheadCamZoomMode(int, bool);
    virtual void removeCommanderApplicant(int, int);
    virtual void addOrderMarker(int, int&);
    virtual void removeAllOrderMarkers();
    virtual void removeOrderMarker(int);
    virtual void updateOrderMarkers(void*);
    virtual ~ISquadManager();
};

class SquadManager : public ISquadManager {
public:
    SquadManager();
    void create(int squadId, std::string const& name);

    int m_0x8;
    char _pad0x0c[4];
    std::set<int> m_0x10;

    float m_0x40;
    float m_0x44;
    float m_0x48;
    void* m_0x50;
    void* m_0x58;
};

SquadManager::SquadManager()
    : m_0x8(1), m_0x40(15.0f), m_0x44(10.0f), m_0x48(20.0f), m_0x50(0), m_0x58(0)
{
    for (int i = 0; i < 10; ++i) {
        create(1, defaultSquadNames[i]);
        create(2, defaultSquadNames[i]);
    }
}

} }
