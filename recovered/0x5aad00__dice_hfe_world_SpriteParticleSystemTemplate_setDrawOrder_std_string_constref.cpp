// FUNCTION: BF2 0x5aad00
#include <string>

namespace dice { namespace hfe { namespace world {

struct IObjectComponent;

struct SpriteParticleSystemTemplateBase {
    virtual ~SpriteParticleSystemTemplateBase();
};

struct MeshParticleSystemTemplate : SpriteParticleSystemTemplateBase {
public:
    char pad[0x78];
    IObjectComponent* m_inner;

    void setDrawOrder(const std::string& name);
};

} } }

namespace dice { namespace hfe {

int compareIgnoreCase(char const* a, char const* b);

} }

namespace dice { namespace hfe { namespace world {

void MeshParticleSystemTemplate::setDrawOrder(const std::string& name) {
    static const char* const names[] = {
        "drawOrder0", "drawOrder1", "drawOrder2"
    };
    int idx = 0;
    for (int i = 0; i < 2; ++i) {
        if (compareIgnoreCase(name.c_str(), names[i]) == 0) {
            idx = i;
            goto found;
        }
    }
    idx = 0;
found:
    IObjectComponent* inner = m_inner;
    if (inner) {
        ((void (*)(void*, int))(*(void***)inner)[0x3a8/8])(inner, idx);
        inner = m_inner;
        if (inner) {
            ((void (*)(void*))(*(void***)inner)[0x18/8])(inner);
        }
    }
}

} } }
