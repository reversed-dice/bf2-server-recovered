// FUNCTION: BF2 0x84bc60
namespace dice { namespace hfe {

class IMemoryPool {
public:
    virtual void vt00();
    virtual void vt01();
    virtual void vt02();
    virtual void vt03();
    virtual void vt04();
    virtual void vt05();
    virtual void vt06();
    virtual void vt07();
    virtual void init(int a, int b, bool c);
};

class ClassManager {
public:
    virtual void vt00();
    virtual void vt01();
    virtual void vt02();
    virtual void vt03();
    virtual void vt04();
    virtual void vt05();
    virtual void vt06();
    virtual void vt07();
    virtual void vt08();
    virtual void vt09();
    virtual void vt10();
    virtual void vt11();
    virtual void* createDefault(unsigned int iid, int z);
    virtual void* createByClassId(unsigned int classId, unsigned int iid, int z);
};

extern ClassManager* classManager;
extern unsigned int IID_IMemoryPool;

IMemoryPool* createMemoryPool(int a, int b, bool c, unsigned int classId) {
    IMemoryPool* p;
    if (classId != 0)
        p = (IMemoryPool*)classManager->createByClassId(classId, IID_IMemoryPool, 0);
    else
        p = (IMemoryPool*)classManager->createDefault(IID_IMemoryPool, 0);
    if (p != 0)
        p->init(a, b, c);
    return p;
}

} }
