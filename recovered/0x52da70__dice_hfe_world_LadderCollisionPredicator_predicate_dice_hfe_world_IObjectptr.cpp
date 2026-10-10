// FUNCTION: BF2 0x52da70
// BF2_COMPILER: gcc-3.4
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_ISoldier;

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);
};

class ObjectFlagPredicator {
public:
    virtual bool predicate(IObject* obj);
};

class LadderCollisionPredicator : public ObjectFlagPredicator {
public:
    virtual bool predicate(IObject* obj);
};

bool LadderCollisionPredicator::predicate(IObject* obj) {
    if (obj->queryInterface(IID_ISoldier)) {
        return false;
    }
    return ObjectFlagPredicator::predicate(obj);
}

} } }
