// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x774420
#include <vector>

namespace dice { namespace hfe { namespace world { class IObject; } } }

namespace dice { namespace hfe {

class Frustum;

namespace ai {

class IAIObject;
class AIObjectPredicate;

namespace {
class AIPredWrapper {
public:
    AIObjectPredicate* m_pred;
    bool m_flag;
    AIPredWrapper(AIObjectPredicate* pred) : m_pred(pred), m_flag(false) {}
    virtual unsigned int getFlags() const { return 0x1000000u; }
    virtual unsigned int performCulling(world::IObject*) const { return 1u; }
};
}

class IAIObjectEnvironment { public: virtual void v0(); };

class BFObjectEnvironment : public IAIObjectEnvironment {
public:
    mutable std::vector<world::IObject*> m_objects;
    void pushAIObjects(std::vector<IAIObject*>& objList, const std::vector<world::IObject*>& objects) const;
    void getWorldFrustumObjects(std::vector<IAIObject*>& out, const Frustum& frustum, AIObjectPredicate* pred) const;
};

void BFObjectEnvironment::getWorldFrustumObjects(std::vector<IAIObject*>& out, const Frustum& frustum, AIObjectPredicate* pred) const
{
    m_objects.resize(0);

    void* mgr = *(void**)0x112ee48;

    AIPredWrapper w(pred);
    ((void (*)(void*, const Frustum&, void*, void*, int, float, float))(*(void***)mgr)[0xa0 / 8])(
        mgr, frustum, (void*)&m_objects, (void*)&w, 1, 0.0f, 0.0f);

    pushAIObjects(out, std::vector<world::IObject*>(m_objects));
}

} } }
