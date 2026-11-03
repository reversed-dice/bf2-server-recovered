// from api 97.78%
// FUNCTION: BF2 0x6ba8a0
#include <list>

namespace dice { namespace anim {

struct Constraint { int a; int b; };

class RagDollTemplate {
public:
    char _pad[0xa8];
    std::list<Constraint> m_a8;   // +0xa8

    std::list<Constraint>::iterator findConstraint(int a, int b);
    void removeConstraint(int a, int b);
};

std::list<Constraint>::iterator RagDollTemplate::findConstraint(int a, int b)
{
    std::list<Constraint>::iterator it = m_a8.begin();
    for (;;) {
        if (it == m_a8.end()) break;
        if ((it->a == a && it->b == b) || (it->a == b && it->b == a)) return it;
        ++it;
    }
    return it;
}

}}
