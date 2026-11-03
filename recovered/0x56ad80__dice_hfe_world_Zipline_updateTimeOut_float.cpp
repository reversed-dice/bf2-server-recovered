// FUNCTION: BF2 0x56ad80
namespace dice { namespace hfe { namespace world {
struct Obj { char pad[0x1e8]; float threshold; };
class Zipline {
public:
    void updateTimeOut(float dt);
    void destroyZipline();
    char pad[0x248];
    Obj* m_248;
    char pad2[0x40];
    float m_time;
    int m_count;
};
void Zipline::updateTimeOut(float dt)
{
    if (m_time >= m_248->threshold) {
        if (m_count <= 0) {
            destroyZipline();
            m_time = 0;
        }
        return;
    }
    if (m_count == 0)
        dt = dt + m_time;
    else
        dt = 0.0f;
    m_time = dt;
}
}}}
