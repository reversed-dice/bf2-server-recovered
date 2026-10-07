// FUNCTION: BF2 0x6132b0
namespace dice { namespace hfe {

class Random;
extern Random Rand;

class RandomDistribution {
public:
    float getValue(Random& r) const;
};

class WorldPref {
public:
    static double getWorldTime();
};

namespace world {

struct LifeHolder {
    unsigned char m_pad[0x208];
    RandomDistribution m_dist;      // 0x208
};

class GenericProjectile {
public:
    float getTimeToLive();

    unsigned char m_pad[0x258];
    LifeHolder* m_holder;           // 0x258
    unsigned char m_pad2[0x2d4 - 0x260];
    float m_lifeTime;               // 0x2d4
};

float GenericProjectile::getTimeToLive()
{
float t = m_holder->m_dist.getValue(Rand) + m_lifeTime;
    return t - (float)WorldPref::getWorldTime();
}

} } }
