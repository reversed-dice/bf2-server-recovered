// FUNCTION: BF2 0x69eed0
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float x_, float y_, float z_) {
        x = x_;
        y = y_;
        z = z_;
    }
};

namespace world {

class WindManager {
public:
    char _pad[0xa0];
    float m_speed;
    Vec3 m_dir;
    Vec3 m_wind;

    void setGlobalWindSpeed(float speed);
};

void WindManager::setGlobalWindSpeed(float speed)
{
    m_speed = speed;
    const Vec3& dir = m_dir;
    m_wind.set(dir.x * speed, dir.y * speed, dir.z * speed);
}

} } }
