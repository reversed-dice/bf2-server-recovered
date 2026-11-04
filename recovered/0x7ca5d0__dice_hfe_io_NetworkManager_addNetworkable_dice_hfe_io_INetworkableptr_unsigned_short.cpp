// FUNCTION: BF2 0x7ca5d0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>
#include <ostream>

namespace dice { namespace hfe {

enum DebugType { DEBUG_TYPE_6 = 6 };

class Debug {
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

std::string formatString(char const* fmt, ...);

namespace world {
class IObject;
}

namespace io {

extern const unsigned int IID_INetworkableObject;

class INetworkable {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void* queryInterface(unsigned int id);
    virtual void _v20();
    virtual void _v28();
    virtual void _v30();
    virtual void _v38();
    virtual void _v40();
    unsigned short m_netId;                                 // 0x8
    char _padA[0x28 - 0xa];
    void* m_28;                                             // 0x28
};

class INetworkableObject {
public:
    char _pad0[0x10];
    world::IObject* m_object;                               // 0x10
};

struct UniqueNetProperty {
    std::vector<INetworkable*> m_networkables;              // 0x0
};

struct NetworkableDescriptor {
    char _pad0[0x10];
    std::vector<UniqueNetProperty> m_properties;            // 0x10
    char m_flags;                                           // 0x28
    char _pad29[7];
};

class NetworkManager {
public:
    void* getObject(unsigned short id);
    unsigned short addObject(world::IObject* obj, unsigned short id);
    unsigned short assignId(unsigned short id);
    void addDescriptor(NetworkableDescriptor* desc, unsigned short id);
    unsigned short addNetworkable(INetworkable* net, unsigned short id);
};

unsigned short NetworkManager::addNetworkable(INetworkable* net, unsigned short id)
{
    if (net->m_netId != 0 || getObject(id) != 0) {
        Debug(DEBUG_TYPE_6, std::string("IO/Network/NetworkManager.cpp"), 0xe9, std::string("")).stream()
            << "Networkable already added to network manager, netId=" << (unsigned long)net->m_netId;
        return net->m_netId;
    }

    INetworkableObject* obj = (INetworkableObject*)net->queryInterface(IID_INetworkableObject);
    if (obj != 0) {
        return addObject(obj->m_object, id);
    }

    NetworkableDescriptor* d = new NetworkableDescriptor();
    if (d == 0) {
        Debug(DEBUG_TYPE_6, std::string("IO/Network/NetworkManager.cpp"), 0xfb, std::string("")).stream()
            << formatString("Failed to allocate memory for networkable descriptor");
    }

    UniqueNetProperty prop;
    prop.m_networkables.push_back(net);
    d->m_properties.push_back(prop);

    unsigned short newId = assignId(id);
    if (newId == 0) {
        Debug(DEBUG_TYPE_6, std::string("IO/Network/NetworkManager.cpp"), 0x106, std::string("")).stream()
            << formatString("Failed to assign networkID");
    }
    addDescriptor(d, newId);
    d->m_flags = 1;
    return net->m_netId;
}

} } }
