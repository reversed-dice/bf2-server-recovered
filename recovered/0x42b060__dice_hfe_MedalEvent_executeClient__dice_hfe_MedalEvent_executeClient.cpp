// FUNCTION: BF2 0x42b060
namespace dice { namespace hfe {

class EventManager {
public:
    virtual ~EventManager() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void dispatch(unsigned int, unsigned int, const void*, float) = 0;
};

extern EventManager* eventManager;

class MedalEvent {
public:
    unsigned long long m_pad[2];  // +0x00: vptr + 0x08: baseData
    unsigned int m_medal;          // +0x10
    unsigned int m_param1;         // +0x14
    unsigned int m_param2;         // +0x18
    unsigned int executeClient();
};

unsigned int MedalEvent::executeClient() {
    unsigned int data[3];
    unsigned int t = this->m_medal;
    data[1] = t;
    t = this->m_param1;
    data[2] = t;
    t = this->m_param2;
    data[0] = t;
    eventManager->dispatch(2, 0x27, data, 0.0f);
    return 1;
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_MedalEvent_executeClient (0x42b060)