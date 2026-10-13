// FUNCTION: BF2 0x8430e0
namespace BF2VoipServer {

class IVoipInstance {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

class CDebugStandard {
public:
    static CDebugStandard* GetInstance();
    void Output(int type, char const* msg);
};

class CVoipRouterInstance {
public:
    unsigned char __pad_00[0xbb0];
    int Stop();
};

class CBF2VoipServerInstance : public CVoipRouterInstance {
public:
    IVoipInstance* m_instance;
public:
    int Stop();
};

int CBF2VoipServerInstance::Stop() {
    if (m_instance != 0) {
        m_instance->v2();
        if (m_instance != 0) {
            m_instance->v1();
        }
        m_instance = 0;
    }
    if (CVoipRouterInstance::Stop() == 1) {
        return 1;
    }
    CDebugStandard::GetInstance()->Output(3, "Failed to Stop instance");
    return -4;
}

}
