// FUNCTION: BF2 0x494920
namespace dice { namespace hfe {

struct System {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual double getUnknownDouble();
};

extern System* g_system;

class Player {
public:
    void setIsTalking_bool(bool talking);

private:
    char m_pad[0x3F0];
    double m_unk_0x3F0;
};

void Player::setIsTalking_bool(bool talking) {
    if (talking) {
        m_unk_0x3F0 = g_system->getUnknownDouble();
    } else {
        reinterpret_cast<unsigned long long&>(m_unk_0x3F0) = 0ULL;
    }
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::setIsTalking_bool (0x494920)