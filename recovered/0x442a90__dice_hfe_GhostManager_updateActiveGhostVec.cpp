// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x442a90
#include <vector>

namespace dice { namespace hfe {

class GhostObject;

class GhostManager {
public:
    void updateActiveGhostVec();
private:
    char _pad0[0x60];
    GhostObject* m_ghosts[0x400];
    bool m_dirty;
    char _pad1[0x2068 - 0x2060 - 1];
    std::vector<GhostObject*> m_activeGhosts;
};

void GhostManager::updateActiveGhostVec()
{
    if (!m_dirty)
        return;

    m_activeGhosts.resize(0);

    for (unsigned int i = 0; i < 0x400; ++i)
    {
        GhostObject* g = m_ghosts[i];
        if (g)
            m_activeGhosts.push_back(g);
    }

    m_dirty = false;
}

} }
