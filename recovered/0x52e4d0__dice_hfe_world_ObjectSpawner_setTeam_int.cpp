// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x52e4d0
namespace dice { namespace hfe { namespace world {
class ObjectSpawner {
public:
    void setTeam(int team);
private:
    char _p0[0x29c];
    float m_29c;
    char _p1[0x2bc - 0x2a0];
    int m_2bc;
    int m_2c0;
};
} } }
namespace dice { namespace hfe {
class GameLogicBase { public: virtual void dummy(); };
extern GameLogicBase* gameLogic;
} }
void dice::hfe::world::ObjectSpawner::setTeam(int team)
{
    m_2bc = team;
    int r = ((int (*)(void*))(*(void***)dice::hfe::gameLogic)[0x2b0 / 8])(dice::hfe::gameLogic);
    if (r == 3) {
        m_29c = -1.0f;
        m_2c0 = team;
    }
}
