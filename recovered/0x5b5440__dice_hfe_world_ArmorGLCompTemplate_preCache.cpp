// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5b5440
#include <map>

namespace dice { namespace hfe { namespace world {

class ObjectTemplate {
public:
    static bool getIsPreCaching();
    static void setIsPreCaching(bool);
};

struct DamageEffects {
    void preCache();
};

class ArmorGLCompTemplate {
public:
    virtual ~ArmorGLCompTemplate();
    char _pad[0x10];
    std::map<int, DamageEffects*> m_map1;
    std::map<int, DamageEffects*> m_map2;

    void preCache();
};

void ArmorGLCompTemplate::preCache() {
    bool wasPreCaching = ObjectTemplate::getIsPreCaching();
    ObjectTemplate::setIsPreCaching(true);

    for (std::map<int, DamageEffects*>::iterator it = m_map1.begin(); it != m_map1.end(); ++it) {
        it->second->preCache();
    }
    for (std::map<int, DamageEffects*>::iterator it = m_map2.begin(); it != m_map2.end(); ++it) {
        it->second->preCache();
    }

    ObjectTemplate::setIsPreCaching(wasPreCaching);
}

} } }
