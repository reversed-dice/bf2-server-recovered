// FUNCTION: BF2 0x56ac60
namespace dice { namespace hfe { namespace world {

class Zipline;

class ObjectManager {
public:
    virtual void func0() = 0;
    virtual void func1() = 0;
    virtual void func2() = 0;
    virtual void func3() = 0;
    virtual void func4() = 0;
    virtual void destroyZipline(Zipline* obj) = 0;
};

extern ObjectManager* objectManager;

class Zipline {
public:
    unsigned int m_unk_0x4B;
    unsigned int m_unk_0x4C;
    unsigned int m_unk_0x4D;
    float m_unk_0x4E;
    float m_unk_0x4F;
    float m_unk_0x50;
    unsigned char m_unk_0x51;
    unsigned int m_unk_0x52;
    unsigned char m_unk_0x53;
    int m_unk_0x22C;
    long * m_unk_0x230;
    long * m_unk_0x240;
    void* m_unk_0x248;
    int m_unk_0x258;
    unsigned char m_unk_0x25C;
    unsigned int m_unk_0x260;
    unsigned int m_unk_0x268;
    unsigned int m_unk_0x26C;
    float m_unk_0x270;
    float m_unk_0x274;
    float m_unk_0x27C;
    float m_unk_0x284;
    unsigned char m_unk_0x289;
    int m_unk_0x294;

    void destroyZipline();
};

void Zipline::destroyZipline() {
    objectManager->destroyZipline(this);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Zipline::destroyZipline (0x56ac60)