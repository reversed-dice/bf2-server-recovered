// FUNCTION: BF2 0x792630
namespace dice { namespace hfe { namespace ai {

class IInformationFactory {
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
    virtual void v9();
    virtual void v10();
    virtual unsigned int create(unsigned int info, void* owner, bool same);
};

class BFSingletonServer {
public:
    static IInformationFactory* m_iInformationFactory;
};

class IWeapon {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

class WeaponObject : public IWeapon {
public:
    unsigned int createInformation(double d, int idx, int other);
    bool checkIfInfoExists(unsigned int);
    char _pad[0x18];
    unsigned int m_infos[1];
};

unsigned int WeaponObject::createInformation(double, int idx, int other)
{
    unsigned int info = m_infos[idx];
    if (!checkIfInfoExists(info)) {
        info = BFSingletonServer::m_iInformationFactory->create(info, this, idx == other);
        m_infos[idx] = info;
    }
    return info;
}

} } }
