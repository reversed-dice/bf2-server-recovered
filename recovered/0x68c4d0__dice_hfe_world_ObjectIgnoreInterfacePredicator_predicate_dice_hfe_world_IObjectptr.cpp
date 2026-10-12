// FUNCTION: BF2 0x68c4d0
namespace dice { namespace hfe { namespace world {

class IObject;

class ObjectPredicator {
public:
    virtual bool predicateSurface(int);
};

class ObjectFlagPredicator : public ObjectPredicator {
public:
    virtual bool predicate(IObject*);
    virtual bool getFlags() const;
    virtual bool performCulling(IObject*);
};

class ObjectIgnoreInterfacePredicator : public ObjectFlagPredicator {
public:
    virtual bool predicate(IObject*);
    char _pad[0x10];
    int m_id;
};

bool ObjectIgnoreInterfacePredicator::predicate(IObject* obj) {
    typedef void* (*Fn)(void*, int);
    if (((Fn)(*(void***)obj)[3])(obj, this->m_id))
        return 0;
    return ObjectFlagPredicator::predicate(obj);
}

} } }
