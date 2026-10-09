// FUNCTION: BF2 0x78a000
#include <string>

namespace dice { namespace hfe {

class ClassManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22();
    virtual void* getSimpleSingleton(std::string const&) const; // slot 23 (+0xb8)
};

extern ClassManager* classManager;

namespace ai {

class CommonSingletonServer {
public:
    static void updateStaticMethodsInternal();
};

class BFSingletonServer {
public:
    static void* m_iaiObjectUtils;
    static void* m_iDebugRenderer;
    static void* m_iDPAIObjectCreator;
    static void* m_iInformationFactory;
    static void* m_iaiEventCourier;
    static void* m_iaiPlayerCourier;

    static void updateStaticMethodsInternal();
};

void BFSingletonServer::updateStaticMethodsInternal()
{
    CommonSingletonServer::updateStaticMethodsInternal();
    m_iaiObjectUtils = classManager->getSimpleSingleton("IAIObjectUtils");
    m_iDebugRenderer = classManager->getSimpleSingleton("IDebugRenderer");
    m_iDPAIObjectCreator = classManager->getSimpleSingleton("IDPAIObjectCreator");
    m_iInformationFactory = classManager->getSimpleSingleton("IInformationFactory");
    m_iaiEventCourier = classManager->getSimpleSingleton("IAIEventCourier");
    m_iaiPlayerCourier = classManager->getSimpleSingleton("IAIPlayerCourier");
}

} } }
