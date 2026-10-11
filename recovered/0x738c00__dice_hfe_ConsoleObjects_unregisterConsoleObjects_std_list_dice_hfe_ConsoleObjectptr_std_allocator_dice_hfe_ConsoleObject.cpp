// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x738c00
#include <map>
#include <list>
#include <string>
#include <algorithm>

namespace dice { namespace hfe {

extern "C" void* HeapAlloc(unsigned long size);
extern "C" void HeapFree(void* p);

class ConsoleObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual char const* getObjectName();
    virtual char const* getFunctionName();
    virtual int getType();
};

struct NoCaseStringCompare {
    bool operator()(std::string const&, std::string const&) const;
};

template<class T>
class DllStlAllocator {
public:
    typedef T value_type;
    typedef T* pointer;
    typedef T const* const_pointer;
    typedef T& reference;
    typedef T const& const_reference;
    typedef unsigned long size_type;
    typedef long difference_type;
    template<class U> struct rebind { typedef DllStlAllocator<U> other; };
    DllStlAllocator() {}
    DllStlAllocator(DllStlAllocator const&) {}
    template<class U> DllStlAllocator(DllStlAllocator<U> const&) {}
    void construct(pointer p, T const& v) { new((void*)p) T(v); }
    void destroy(pointer p) { p->~T(); }
    size_type max_size() const { return (size_type)-1 / sizeof(T); }
    pointer allocate(size_type n, void const* = 0) { return (pointer)HeapAlloc(n * sizeof(T)); }
    void deallocate(pointer p, size_type) { HeapFree(p); }
};

class ConsoleObjects {
public:
    void** m_hashTable;
    int m_hashSize;
    void* m_pad10;
    std::multimap<std::string, ConsoleObject*, NoCaseStringCompare> m_map;
    std::list<ConsoleObject*, DllStlAllocator<ConsoleObject*> > m_list;

    bool unregisterConsoleObjects(std::list<ConsoleObject*>& objects);
};

bool ConsoleObjects::unregisterConsoleObjects(std::list<ConsoleObject*>& objects) {
    if (objects.empty()) {
        return true;
    }
    for (std::list<ConsoleObject*>::iterator it = objects.begin(); it != objects.end(); ++it) {
        ConsoleObject* obj = *it;
        m_map.erase(std::string(obj->getObjectName()) + std::string(obj->getFunctionName()));
        std::list<ConsoleObject*, DllStlAllocator<ConsoleObject*> >::iterator found = std::find(m_list.begin(), m_list.end(), obj);
        if (found != m_list.end()) {
            m_list.erase(found);
        }
    }
    return true;
}

} }
