// FUNCTION: BF2 0x7c62b0
namespace dice { namespace hfe { namespace io {
class NetworkManager {
public:
    void* getDescriptor(unsigned short);
    void* getObject(unsigned short);
};

__attribute__((noinline)) void* NetworkManager::getDescriptor(unsigned short a0)
{
    return (void*)(long)a0;
}

void* NetworkManager::getObject(unsigned short a0)
{
    if (a0 == 0)
        return 0;
    void* d = getDescriptor(a0);
    if (d == 0)
        return 0;
    void* a = *(void**) ((char*)d + 0x10);
    void* b = *(void**) a;
    void* c = *(void**) b;
    void* e = *(void**) ((char*)c + 0x28);
    if (e == 0)
        return 0;
    return *(void**) ((char*)e + 0x10);
}
}}}
