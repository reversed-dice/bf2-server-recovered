// FUNCTION: BF2 0x7346f0
namespace dice { namespace hfe {

class IBase;

class ClassManager {
public:
    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void v30();
    virtual void v38();
    virtual void v40();
    virtual bool getDefaultClass(unsigned int classId, unsigned int& defaultId); // slot 9 (+0x48)
    virtual void v50();
    virtual void v58();
    virtual void* createInstance(unsigned int classId, IBase* parent); // slot 12 (+0x60)
    virtual void* createInstance(unsigned int classId, unsigned int defaultId, IBase* parent); // slot 13 (+0x68)
};

void* ClassManager::createInstance(unsigned int classId, IBase* parent)
{
    unsigned int defaultId;
    if (getDefaultClass(classId, defaultId)) {
        return createInstance(defaultId, classId, parent);
    }
    return 0;
}

} }
