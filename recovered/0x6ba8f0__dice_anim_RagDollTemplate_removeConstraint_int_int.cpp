// FUNCTION: BF2 0x6ba8f0
#include <list>

namespace dice { namespace anim {

class RagDollTemplate {
public:
    struct Constraint {
        int a;
        int b;
        int c;
    };

    char m_pad[0xa8];
    std::list<Constraint> m_constraints;   // +0xa8

    unsigned int findParticleIndex(int) const;
    std::list<Constraint>::iterator findConstraint(unsigned int, unsigned int);
    void removeConstraint(int a, int b);
};

void RagDollTemplate::removeConstraint(int a, int b)
{
    std::list<Constraint>::iterator it = findConstraint(findParticleIndex(a), findParticleIndex(b));
    if (it != m_constraints.end())
        m_constraints.erase(it);
}

}}
