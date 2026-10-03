// FUNCTION: BF2 0x42f660
namespace dice { namespace hfe {

// SquadManager — vtable layout (virtual dtor takes 2 slots):
//   [0]=D1Ev, [1]=D0Ev, [2..7]=dummies, [8]=setSquadPrivate (+0x40)
class SquadManager {
public:
    virtual ~SquadManager() {}
    virtual void dummy1() {}
    virtual void dummy2() {}
    virtual void dummy3() {}
    virtual void dummy4() {}
    virtual void dummy5() {}
    virtual void dummy6() {}
    virtual void setSquadPrivate(unsigned char, unsigned char, unsigned char, int) {}
};

extern SquadManager* squadManager;

// EventBase — provides vptr (+0x00) + 8 bytes data (+0x08)
class EventBase {
public:
    virtual ~EventBase() {}
protected:
    unsigned long long m_baseData;  // +0x08
};

class SetPrivateSquadEvent : public EventBase {
public:
    unsigned int executeClient();
private:
    unsigned char m_field_0x10;  // +0x10
    unsigned char m_field_0x11;  // +0x11
    unsigned char m_field_0x12;  // +0x12
};

unsigned int SetPrivateSquadEvent::executeClient() {
    SquadManager* mgr = squadManager;
    if (mgr) {
        mgr->setSquadPrivate(m_field_0x10, m_field_0x11, m_field_0x12, 1);
    }
    return 1;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_SetPrivateSquadEvent_executeClient (0x42f660)