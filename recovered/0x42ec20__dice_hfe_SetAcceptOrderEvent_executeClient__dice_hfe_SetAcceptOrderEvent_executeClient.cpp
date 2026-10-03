// FUNCTION: BF2 0x42ec20
namespace dice { namespace hfe {

class SquadManager {
public:
    virtual void dummy0() = 0;
    virtual void dummy1() = 0;
    virtual void dummy2() = 0;
    virtual void dummy3() = 0;
    virtual void dummy4() = 0;
    virtual void dummy5() = 0;
    virtual void dummy6() = 0;
    virtual void dummy7() = 0;
    virtual void dummy8() = 0;
    virtual void executeSetAcceptOrder(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, int) = 0;
};

extern SquadManager* dice_hfe_squadManager;

class SetAcceptOrderEvent {
public:
    unsigned int executeClient();

    unsigned char _pad_0[0x2];
    unsigned char m_unk_0x2;
    unsigned char _pad_3[0xD];
    unsigned char m_unk_0x10;
    unsigned char m_unk_0x11;
    unsigned char m_unk_0x12;
    unsigned char m_unk_0x13;
    unsigned char m_unk_0x14;
};

unsigned int SetAcceptOrderEvent::executeClient() {
    SquadManager* mgr = dice_hfe_squadManager;
    if (!mgr) return 1;
    mgr->executeSetAcceptOrder(m_unk_0x10, m_unk_0x11, m_unk_0x12, m_unk_0x13, m_unk_0x14, 1);
    return 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_SetAcceptOrderEvent_executeClient (0x42ec20)