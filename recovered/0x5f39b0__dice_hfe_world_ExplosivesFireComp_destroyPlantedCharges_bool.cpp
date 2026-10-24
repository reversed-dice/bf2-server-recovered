// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5f39b0
#include <set>

namespace dice { namespace hfe { namespace world {

    void* gl = *(void**)0x10b8c08;
class IObject;

typedef void (*ChargeFn)(void*, int, int, int);
typedef bool (*GlFn)(void*);

class ExplosivesFireComp {
public:
    char _pad[0x178];
    std::set<IObject*> m_set;
    char _pad2[0x28];
    bool m_active;
    void destroyPlantedCharges(bool param);
};

void ExplosivesFireComp::destroyPlantedCharges(bool param)
{
    if (((GlFn)(*(void***)gl)[0x278 / 8])(gl)) {
        m_active = true;
        for (std::set<IObject*>::iterator it = m_set.begin(); it != m_set.end(); ++it)
            ((ChargeFn)(*(void***)(*it))[0x208 / 8])(*it, param ? 0x1f : 0x20, 0, 0);
        m_active = false;
    }
    m_set.clear();
}

} } }
