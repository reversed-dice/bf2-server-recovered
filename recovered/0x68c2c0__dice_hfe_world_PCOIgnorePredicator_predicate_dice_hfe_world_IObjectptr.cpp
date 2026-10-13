// FUNCTION: BF2 0x68c2c0
namespace dice {
namespace hfe {
namespace world {

class IObject {
public:
    virtual ~IObject();
    virtual void slot_10();
    virtual void* queryInterface(unsigned int iid);
};

extern unsigned int IID_IPlayerControlObject;

IObject* getRootParent(const IObject* obj);

class IgnorePredicator {
public:
    virtual ~IgnorePredicator();
    virtual bool predicate(IObject* obj);
};

class PCOIgnorePredicator : public IgnorePredicator {
public:
    virtual bool predicate(IObject* obj);
};

bool PCOIgnorePredicator::predicate(IObject* obj) {
    bool res = false;
    if (!IgnorePredicator::predicate(obj))
        return res;
    if (obj->queryInterface(IID_IPlayerControlObject) != 0) {
        if (getRootParent(obj) == obj)
            res = true;
        else
            res = false;
    }
    return res;
}
}
}
}
