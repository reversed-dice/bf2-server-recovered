// from api 99.64%
// BF2_FLAGS: -fno-strict-aliasing --param inline-unit-growth=1000 -fno-tree-loop-optimize
// FUNCTION: BF2 0x60ceb0
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
    float getValue(Random& r) const
    {
        if (m_randomSign) {
            float sign = r.getFloat() > 0.5f ? 1.0f : -1.0f;
            return sign * getBaseValue(r);
        }
        return getBaseValue(r);
    }
};

class IGame {
public:
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
    virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7();
    virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11();
    virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15();
    virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19();
    virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23();
    virtual void a24(); virtual void a25(); virtual void a26();
    virtual unsigned int getRandomSeed();
};
extern IGame* game;

namespace world {

class SoldierBasedRecoilComp {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42();
    virtual RandomDistribution const* getRandomRecoilForceUp() const;
    virtual RandomDistribution const* getRandomRecoilForceLeftRight() const;
    virtual bool getHasRandomRecoilForce() const;
    virtual float getRecoilForceModifier() const;

    void calcRecoil();

    unsigned char m_pad[0xac];
    float m_randomForceUp;
    float m_randomForceLeftRight;
};

void SoldierBasedRecoilComp::calcRecoil()
{
    if (!getHasRandomRecoilForce())
        return;
    Random r(game->getRandomSeed());
    m_randomForceUp = getRandomRecoilForceUp()->getValue(r) * getRecoilForceModifier();
    m_randomForceLeftRight = getRandomRecoilForceLeftRight()->getValue(r) * getRecoilForceModifier();
}

} } }
