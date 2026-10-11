// FUNCTION: BF2 0x409a30

namespace dice { namespace hfe {

class Mutex
{
public:
    Mutex();
    ~Mutex();
private:
    void* m_lock;
};

} }

namespace { dice::hfe::Mutex callStackMutex; }

namespace dice { namespace hfe { namespace memory {

class MemoryModuleInfo
{
public:
    MemoryModuleInfo();
private:
    char m_data[0x5c];
};

MemoryModuleInfo memoryModuleInfo[0x10];

} } }
