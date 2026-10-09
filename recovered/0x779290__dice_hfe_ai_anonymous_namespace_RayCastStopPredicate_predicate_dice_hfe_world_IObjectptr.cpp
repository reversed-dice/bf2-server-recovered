// FUNCTION: BF2 0x779290
// BF2_FLAGS: -fcrossjumping
namespace dice { namespace hfe { namespace world {
extern const unsigned int CID_LadderContainerTemplate;
extern const unsigned int CID_ParachuteTemplate;
extern const unsigned int CID_ZiplineContainerTemplate;
extern const unsigned int CID_GrapplingHookRopeContainerTemplate;
extern const unsigned int IID_IPlayerControlObject;
class IObject { public: char _pad[0x1000]; };
}}}
#include <vector>
namespace dice { namespace hfe { namespace ai {
class IAIObject { public: char _pad[0x1000]; };
namespace {
void* getIAIObject(dice::hfe::world::IObject* o);
}
class RayCastStopPredicate {
public:
    virtual bool predicate(dice::hfe::world::IObject* obj);
    virtual int getFlags() const;
    virtual bool performCulling(dice::hfe::world::IObject* obj);
    virtual bool predicateSurface(int s);
    std::vector<IAIObject*>* m_pList;
    char _pad8[0x8];
    dice::hfe::world::IObject* m_obj;
};
bool RayCastStopPredicate::predicate(dice::hfe::world::IObject* obj) {
    IAIObject* a = (IAIObject*)getIAIObject(obj);
    if (a != 0) {
        std::vector<IAIObject*>* v = m_pList;
        for (std::vector<IAIObject*>::iterator it = v->begin(); it != v->end(); ++it) {
            if (a == *it)
                return false;
        }
    }
    m_obj = obj;
    return true;
}
}}}
