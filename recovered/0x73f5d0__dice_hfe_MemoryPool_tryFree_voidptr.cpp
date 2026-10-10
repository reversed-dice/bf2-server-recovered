// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x73f5d0
namespace dice { namespace hfe {

class MemoryPool {
 public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void alloc(unsigned long);
    virtual void free(void*);
    virtual void alloc(unsigned int, char const*, unsigned int);
    virtual void free(void*, char const*, unsigned int);
    virtual void init(int, int, bool);
    virtual ~MemoryPool();
    bool tryFree(void* p);
};

bool MemoryPool::tryFree(void* p) {
    char* base = *(char**)((char*)this + 0x28);
    if (base > (char*)p || (char*)p >= base + *(int*)((char*)this + 0x10)) {
        MemoryPool* next = *(MemoryPool**)((char*)this + 0x18);
        if (next == 0) return false;
        return next->tryFree(p);
    }
    *(void**)p = *(void**)((char*)this + 0x30);
    *(int*)((char*)this + 0x38) -= 1;
    *(void**)((char*)this + 0x30) = p;
    return true;
}

} }
