// FUNCTION: BF2 0x6cfe60
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice {
namespace anim {

class Trigger {
public:
    char pad[0x20];
    std::vector<Trigger*> m_children;
    char pad2[0x38 - 0x20 - sizeof(std::vector<Trigger*>)];
    int m_prio;
};

void setPriosForTrigger(Trigger* trig, int& prio) {
    if (!trig) {
        return;
    }
    trig->m_prio = ++prio;
    for (std::vector<Trigger*>::iterator it = trig->m_children.begin(); it != trig->m_children.end(); ++it) {
        setPriosForTrigger(*it, prio);
    }
}

}
}
