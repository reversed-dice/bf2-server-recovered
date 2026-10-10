// FUNCTION: BF2 0x55db20
#include <vector>

namespace dice { namespace hfe { namespace world {

extern const unsigned int IID_IPlayerControlObjectTemplate;

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);
};

class IPCOItf {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual int getClassID();
};

class SupplyObjectTemplate {
public:
    bool testVehicleType(IObject* obj) const;
    char _pad[0x228];
    std::vector<int> m_vehicleTypes;
};

bool SupplyObjectTemplate::testVehicleType(IObject* obj) const
{
    IPCOItf* p = (IPCOItf*)(*(IObject**)((char*)obj + 0x28))->queryInterface(IID_IPlayerControlObjectTemplate);
    if (!p)
        return false;
    if (m_vehicleTypes.empty())
        return true;
    for (unsigned int i = 0; i < m_vehicleTypes.size(); ++i) {
        if (p->getClassID() == m_vehicleTypes[i])
            return true;
    }
    return false;
}

} } }
