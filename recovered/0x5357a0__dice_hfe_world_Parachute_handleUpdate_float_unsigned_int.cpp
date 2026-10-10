// FUNCTION: BF2 0x5357a0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    virtual ~PlayerControlObject();
    virtual void handleUpdate(float dt, unsigned int arg);
};

class Parachute : public PlayerControlObject {
public:
    char pad_0x000[0x5f8];
    float m_life;
public:
    void disable();
    virtual void handleUpdate(float dt, unsigned int arg);
};

void Parachute::handleUpdate(float dt, unsigned int arg) {
    if (m_life > 0.0f) {
        m_life = m_life - dt;
        if (m_life <= 0.0f) {
            disable();
            m_life = -1.0f;
        }
    }
    PlayerControlObject::handleUpdate(dt, arg);
}

} } }
