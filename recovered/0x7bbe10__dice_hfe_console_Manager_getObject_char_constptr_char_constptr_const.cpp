// FUNCTION: BF2 0x7bbe10
#include <vector>

namespace dice { namespace hfe {

int compareIgnoreCase(char const* a, char const* b);

namespace console {

class Object {
public:
    virtual ~Object();
    char const* m_functionName; // +0x8
};

struct ObjectVector {
    Object** m_start;
    Object** m_finish;
    Object** m_end;
};

class Manager {
public:
    ObjectVector* getObjects(char const* name) const;
    Object* getObject(char const* fnName, char const* objName) const;
};

Object* Manager::getObject(char const* fnName, char const* objName) const
{
    ObjectVector* objs = getObjects(objName);
    if (objs) {
        Object** it = objs->m_start;
        for (; it != objs->m_finish; ++it) {
            if (compareIgnoreCase(fnName, (*it)->m_functionName) == 0)
                return *it;
        }
    }
    return 0;
}

} } }
