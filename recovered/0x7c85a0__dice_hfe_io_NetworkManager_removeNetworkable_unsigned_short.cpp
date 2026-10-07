// FUNCTION: BF2 0x7c85a0
// BF2_COMPILER: gcc-3.4
namespace dice {
namespace hfe {

namespace world {
    class IObject;
}

namespace io {

extern int IID_INetworkableObject;

class INetworkableObject {
public:
    virtual ~INetworkableObject();
    virtual void unk08();
    virtual void* queryInterface(int iid);
    char pad[0x8];
    world::IObject* m_object; // offset 0x10
};

class NetworkableDescriptor {
public:
    char pad[0x10];
    void*** m_ptr; // at 0x10
};

class NetworkManager {
public:
    NetworkableDescriptor* getDescriptor(unsigned short id);
    void removeDescriptors(world::IObject* obj);
    void deleteDescriptorForId(unsigned short id);

    void removeNetworkable(unsigned short id);
};

void NetworkManager::removeNetworkable(unsigned short id)
{
    NetworkableDescriptor* desc = getDescriptor(id);
    if (!desc)
        return;

    typedef void* (*QueryFn)(void*, int);
    void* target = *(*desc->m_ptr);
    void** vtable = *(void***)target;
    INetworkableObject* netObj = (INetworkableObject*)((QueryFn)vtable[3])(target, IID_INetworkableObject);
    if (netObj) {
        removeDescriptors(netObj->m_object);
    } else {
        deleteDescriptorForId(id);
    }
}

} // namespace io
} // namespace hfe
} // namespace dice
