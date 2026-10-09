// FUNCTION: BF2 0x5a5730
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice {
namespace hfe {

namespace geom {
class IParticleSystemInstance;
}

namespace world {

extern int CID_EffectBundleTemplate;

class EffectBundle {
public:
    void removeParticleSystemInstance(geom::IParticleSystemInstance* inst);
};

class Object {
public:
    virtual ~Object();
    virtual void destroy(bool arg);
};

class ParticleSystemBase : public Object {
public:
    char _padObj[0x50 - sizeof(Object)];
    EffectBundle* m_bundle;
    char _padTail[0x218 - 0x58];
    geom::IParticleSystemInstance* m_instance;

    virtual void destroy(bool arg);
};

} // namespace world

class ClassManager {
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void* getClass(const std::string& name);
};

extern ClassManager* classManager;

void world::ParticleSystemBase::destroy(bool arg)
{
    if (m_instance != 0) {
        if (m_bundle != 0) {
            void* p28 = *(void**)((char*)m_bundle + 0x28);
            int cid = ((int (*)(void*))(*(void***)p28)[0x20 / 8])(p28);
            if (cid == CID_EffectBundleTemplate) {
                EffectBundle* b = m_bundle;
                b->removeParticleSystemInstance(m_instance);
            }
        }

        void* mgr = classManager->getClass(std::string("ParticleSystemManager"));
        if (mgr != 0) {
            ((void (*)(void*, geom::IParticleSystemInstance*))(*(void***)mgr)[0x30 / 8])(mgr, m_instance);
        }
    }

    world::Object::destroy(arg);
}

} // namespace hfe
} // namespace dice
