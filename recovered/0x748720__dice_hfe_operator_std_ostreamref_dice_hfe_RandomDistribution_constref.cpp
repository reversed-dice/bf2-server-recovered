// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x748720
#include <ostream>
namespace dice { namespace hfe {

enum ContRandDist { CRD_NONE, CRD_UNIFORM, CRD_EXPONENTIAL, CRD_NORMAL };

std::ostream& operator<<(std::ostream& out, ContRandDist dist);

struct RandomDistribution {
    ContRandDist m_dist;
    float m_min;
    float m_max;
    bool m_flag;
};

std::ostream& operator<<(std::ostream& out, const RandomDistribution& d)
{
    out << d.m_dist << '/' << d.m_min << '/' << d.m_max << '/' << d.m_flag;
    return out;
}

} }
