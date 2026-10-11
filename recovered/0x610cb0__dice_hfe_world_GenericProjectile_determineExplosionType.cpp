// FUNCTION: BF2 0x610cb0
#include <string.h>
#include <string>

namespace dice {
namespace hfe {
namespace world {

class ITemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual std::string const& getName() const;
};

class GenericProjectile {
public:
    char pad[0x258];
    ITemplate* m_template; // 0x258
    char pad2[0x128];
    int m_explosionType;   // 0x388

    void determineExplosionType();
};

void GenericProjectile::determineExplosionType() {
    char const* name = m_template->getName().c_str();
    if (strstr(name, "teargas")) {
        m_explosionType = 3;
        return;
    }
    if (strstr(name, "flashbang")) {
        m_explosionType = 1;
        return;
    }
    m_explosionType = strstr(name, "molotovcocktail") ? 2 : 0;
}

} // namespace world
} // namespace hfe
} // namespace dice
