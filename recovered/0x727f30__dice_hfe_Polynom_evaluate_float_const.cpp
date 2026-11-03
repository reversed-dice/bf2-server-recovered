// FUNCTION: BF2 0x727f30
// BF2_FLAGS: -fno-tree-ch
namespace dice { namespace hfe {

class Polynom {
public:
    float* m_begin;   // +0x0
    float* m_end;     // +0x8

    float evaluate(float x) const;
};

float Polynom::evaluate(float x) const
{
    long n = m_end - m_begin;
    if ((unsigned long)n > 1) {
        float r = m_begin[n - 1];
        unsigned int i = (unsigned int)(n - 2);
        while (i < (unsigned long)n) {
            r = r * x + m_begin[i];
            --i;
        }
        return r;
    }
    if (n != 1)
        return 0.0f;
    return m_begin[0];
}

}}
