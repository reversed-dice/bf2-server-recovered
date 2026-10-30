// FUNCTION: BF2 0x508420
// BF2_FLAGS: -fno-strict-aliasing
#include <cmath>

namespace dice { namespace hfe {

class Random {
public:
    long m_seed;

    Random(unsigned int seed)
    {
        m_seed = seed & 0x7fffffff;
        m_seed = (unsigned int)next() & 0x7fffffff;
    }
    void mult(long a)
    {
        long lo = (m_seed & 0xffff) * a;
        long hi = (m_seed >> 16) * a + (lo >> 16);
        long x = (lo & 0xffff) + ((hi & 0x7fff) << 16) + (hi >> 15);
        if (x - 0x7fffffff >= 0)
            x -= 0x7fffffff;
        m_seed = x;
    }
    long next()
    {
        mult(24112);
        mult(26143);
        return m_seed;
    }
    float getFloat()
    {
        return (float)((((int)next() >> 7) | 1) + 1) * 5.9604645e-8f;
    }
    float getNormal()
    {
        static bool x2IsValid = false;
        static float x2;
        if (x2IsValid) {
            x2IsValid = false;
            return x2;
        }
        float v1, v2, s;
        do {
            v1 = 2.0f * getFloat() - 1.0f;
            v2 = 2.0f * getFloat() - 1.0f;
            s = v1 * v1 + v2 * v2;
        } while (s > 1.0f);
        float f = (float)sqrt(log((double)s) * -2.0 / s);
        float x1 = v1 * f;
        x2 = f * v2;
        x2IsValid = true;
        return x1;
    }
};

class RandomDistribution {
public:
    int m_type;
    float m_a;
    float m_b;
    bool m_randomSign;

    float getBaseValue(Random& r) const
    {
        float max = m_b;
        float v = m_a;
        switch (m_type) {
        case 0:
            break;
        case 1:
            v = r.getFloat() * (max - v) + v;
            break;
        case 2:
            v = -v * logf(r.getFloat());
            break;
        case 3:
            v = r.getNormal() * max + v;
            break;
        default:
            v = 0.0f;
            break;
        }
        return v;
    }
    float getValue(Random& r) const;
};

float RandomDistribution::getValue(Random& r) const
{
        if (m_randomSign) {
            float sign = r.getFloat() > 0.5f ? 1.0f : -1.0f;
            return sign * getBaseValue(r);
        }
        return getBaseValue(r);
}

} }
