// FUNCTION: BF2 0x509000
namespace dice { namespace hfe { namespace world {

class ITriggerMessageHandler {
public:
    virtual void v00() = 0;
    virtual void v01() = 0;
    virtual void v02() = 0;
    virtual void v03() = 0;
    virtual void v04() = 0;
    virtual void v05() = 0;
    virtual void v06() = 0;
    virtual void v07() = 0;
    virtual void v08() = 0;
    virtual void v09() = 0;
    virtual void v0a() = 0;
    virtual void v0b() = 0;
    virtual void v0c() = 0;
    virtual void v0d() = 0;
    virtual void clearTriggerMessage(unsigned int) = 0;
};

class AnimatedBundle {
public:
    ITriggerMessageHandler* m_unk_0x248;
    ITriggerMessageHandler* m_unk_0x250;

    void clearTriggerMessage_int(unsigned int);
};

void AnimatedBundle::clearTriggerMessage_int(unsigned int param) {
    char* base = reinterpret_cast<char*>(this);
    int count = 2;
    do {
        ITriggerMessageHandler* obj = *reinterpret_cast<ITriggerMessageHandler**>(base + 0x248);
        if (obj != 0) {
            obj->clearTriggerMessage(param);
        }
        base += 8;
        count--;
    } while (count);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimatedBundle::clearTriggerMessage_int (0x509000)