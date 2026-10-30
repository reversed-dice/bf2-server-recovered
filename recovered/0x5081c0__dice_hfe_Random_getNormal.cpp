// FUNCTION: BF2 0x5081c0
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
    float getNormal();
};

float Random::getNormal()
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

} }
