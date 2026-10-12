// FUNCTION: BF2 0x48ed10
#include <vector>

namespace dice { namespace hfe {

class Object {
public:
    int m_refcnt;
};

template <class T>
class SmartPtr {
public:
    T* m_ptr;
    SmartPtr() : m_ptr(0) {}
    ~SmartPtr()
    {
        T* p = m_ptr;
        if (p && --p->m_refcnt == 0)
            operator delete(p);
    }
};

} }

typedef dice::hfe::SmartPtr<dice::hfe::Object> SP;

static std::vector<SP> g_arr[2];
