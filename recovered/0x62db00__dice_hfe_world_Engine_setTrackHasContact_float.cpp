// FUNCTION: BF2 0x62db00
namespace dice {
namespace hfe {
namespace world {

class Engine {
public:
    char pad[0x33c];
    unsigned int m_flags;

    void setTrackHasContact(float val);
};

void Engine::setTrackHasContact(float val) {
    if (val < 0.0f) {
        m_flags |= 1;
    } else if (val > 0.0f) {
        m_flags |= 2;
    }
}

}
}
}
