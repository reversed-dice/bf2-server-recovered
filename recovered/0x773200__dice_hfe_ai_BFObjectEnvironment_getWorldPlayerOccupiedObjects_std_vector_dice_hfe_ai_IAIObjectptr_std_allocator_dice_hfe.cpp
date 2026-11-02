// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x773200
#include <list>
#include <set>
#include <vector>

namespace dice { namespace hfe { namespace world {
extern const unsigned int CID_LadderContainerTemplate;
extern const unsigned int CID_ParachuteTemplate;
extern const unsigned int CID_ZiplineContainerTemplate;
extern const unsigned int CID_GrapplingHookRopeContainerTemplate;
extern const unsigned int IID_IPlayerControlObject;
class IObject;
} } }

namespace dice { namespace hfe { namespace ai {

class IAIObject;
class AIObjectPredicate;

namespace {

typedef bool (*BoolFn)(void*);
typedef bool (*PredFn)(void*, void*);
typedef void* (*SlotFn0)(void*);
typedef void* (*SlotFn1)(void*, unsigned int);
typedef int (*CidFn)(void*);

inline void* getObject(IAIObject* p)
{
    return ((SlotFn0)(*(void***)p)[0x90 / 8])(p);
}

inline int classId(IAIObject* p)
{
    dice::hfe::world::IObject* o = (dice::hfe::world::IObject*)getObject(p);
    void* c = *(void**)((char*)o + 0x28);
    return ((CidFn)(*(void***)c)[0x20 / 8])(c);
}

}

class IAIObjectEnvironment { public: virtual void v0(); };

class BFObjectEnvironment : public IAIObjectEnvironment {
public:
    void getWorldPlayerOccupiedObjects(std::vector<IAIObject*>& out, AIObjectPredicate* pred) const;
};

void BFObjectEnvironment::getWorldPlayerOccupiedObjects(std::vector<IAIObject*>& out,
                                                        AIObjectPredicate* pred) const
{
    void* mgr = *(void**)0x112ee38;
    std::list<IAIObject*>& players =
        *(std::list<IAIObject*>*)((SlotFn0)(*(void***)mgr)[0x78 / 8])(mgr);

    std::set<IAIObject*> pending;

    for (std::list<IAIObject*>::iterator it = players.begin(); it != players.end(); ++it) {
        IAIObject* player = *it;
        if (player == 0) continue;
        if (!((BoolFn)(*(void***)player)[0xd8 / 8])(player)) continue;
        if (((BoolFn)(*(void***)player)[0x200 / 8])(player)) continue;
        if (getObject(player) == 0) continue;

        IAIObject* obj = *(IAIObject**)((char*)getObject(player) + 0x68);
        if (obj == 0) {
            if (classId(*it) == dice::hfe::world::CID_LadderContainerTemplate) {
                void* o = getObject(*it);
                void* a = ((SlotFn0)(*(void***)o)[0x318 / 8])(o);
                if (a != 0) obj = *(IAIObject**)((char*)a + 0x68);
            } else if (classId(*it) == dice::hfe::world::CID_ParachuteTemplate) {
                void* o = getObject(*it);
                void* q = ((SlotFn1)(*(void***)o)[0x18 / 8])(o, dice::hfe::world::IID_IPlayerControlObject);
                void* p = ((SlotFn0)(*(void***)q)[0x28 / 8])(q);
                obj = *(IAIObject**)((char*)p + 0x68);
            } else if (classId(*it) == dice::hfe::world::CID_ZiplineContainerTemplate) {
                void* o = getObject(*it);
                void* a = ((SlotFn0)(*(void***)o)[0x318 / 8])(o);
                if (a != 0) obj = *(IAIObject**)((char*)a + 0x68);
            } else if (classId(*it) == dice::hfe::world::CID_GrapplingHookRopeContainerTemplate) {
                void* o = getObject(*it);
                void* a = ((SlotFn0)(*(void***)o)[0x318 / 8])(o);
                if (a != 0) obj = *(IAIObject**)((char*)a + 0x68);
            }
        }
        if (obj == 0) continue;

        if (((BoolFn)(*(void***)obj)[0x1f0 / 8])(obj)) {
            if (pred != 0) {
                if (!((PredFn)(*(void***)pred)[0])(pred, obj)) continue;
            }
            out.push_back(obj);
        } else {
            pending.insert((IAIObject*)((SlotFn0)(*(void***)obj)[0x1f8 / 8])(obj));
        }
    }

    for (std::set<IAIObject*>::iterator it = pending.begin(); it != pending.end(); ++it) {
        IAIObject* v = *it;
        void* x = ((SlotFn0)(*(void***)v)[0x130 / 8])(v);
        if (((BoolFn)(*(void***)x)[0x90 / 8])(x)) continue;
        if (pred != 0) {
            if (!((PredFn)(*(void***)pred)[0])(pred, v)) continue;
        }
        out.push_back(v);
    }
}

} } }
