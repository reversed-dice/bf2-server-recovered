// FUNCTION: BF2 0x78aa70
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
    static void* m_iAimerHelper;
    static void* m_iBFTimer;
    static void* m_iaiInformationCourier;
    static void* m_iaiInformationEnvironmentModifiers;
    static void* m_iaiPathfindingCourier;
    static void* m_iaiTerrain;
    static void* m_iaiGame;
    static void* m_iaiGameEffector;
    static void* m_iaiObjectEnvironment;
    static void* m_iaiPhysics;
    static void* m_iDPManager;
    static void* m_iDPStaticCreator;
    static void* m_iDPAIObjectCreator;
    static void* m_iaiSettings;
    static void* m_iaiSettingsModifier;
    static void* m_iAICollisionHandler;
    static void* m_iBFCollisionHandler;
    static void* m_iKitTemplateManager;
    static void* m_iaiPlayerFactory;
    static void* m_iInformationFactory;
    static void* m_iMapRenderer;
    static void* m_iDebugRenderer;
    static void* m_iBFModuleCourier;
    static void* m_iBFCommander;
    static void* m_iBFSquad;
    static void* m_iBFRadioComm;
    static void* m_iBFGraphCreator;
    static void* m_iAIMineManager;

    static void updateStaticMethodsInternal();
};

void CommonSingletonServer::updateStaticMethodsInternal()
{
    m_iAimerHelper = classManager->getSimpleSingleton("AimerHelper");
    m_iBFTimer = classManager->getSimpleSingleton("IBFTimer");
    m_iaiInformationCourier = classManager->getSimpleSingleton("IAIInformationCourier");
    m_iaiInformationEnvironmentModifiers = classManager->getSimpleSingleton("IAIInformationEnvironmentModifiers");
    m_iaiPathfindingCourier = classManager->getSimpleSingleton("IAIPathfindingCourier");
    m_iaiTerrain = classManager->getSimpleSingleton("IAITerrain");
    m_iaiGame = classManager->getSimpleSingleton("IAIGame");
    m_iaiGameEffector = classManager->getSimpleSingleton("IAIGameEffector");
    m_iaiObjectEnvironment = classManager->getSimpleSingleton("IAIObjectEnvironment");
    m_iaiPhysics = classManager->getSimpleSingleton("IAIPhysics");
    m_iDPManager = classManager->getSimpleSingleton("IDPManager");
    m_iDPStaticCreator = classManager->getSimpleSingleton("IDPStaticCreator");
    m_iDPAIObjectCreator = classManager->getSimpleSingleton("IDPAIObjectCreator");
    m_iaiSettings = classManager->getSimpleSingleton("IAISettings");
    m_iaiSettingsModifier = classManager->getSimpleSingleton("IAISettingsModifier");
    m_iAICollisionHandler = classManager->getSimpleSingleton("IAICollisionHandler");
    m_iBFCollisionHandler = classManager->getSimpleSingleton("IBFCollisionHandler");
    m_iKitTemplateManager = classManager->getSimpleSingleton("IKitTemplateManager");
    m_iaiPlayerFactory = classManager->getSimpleSingleton("IAIPlayerFactory");
    m_iInformationFactory = classManager->getSimpleSingleton("IInformationFactory");
    m_iMapRenderer = classManager->getSimpleSingleton("IMapRenderer");
    m_iDebugRenderer = classManager->getSimpleSingleton("IDebugRenderer");
    m_iBFModuleCourier = classManager->getSimpleSingleton("IBFModuleCourier");
    m_iBFCommander = classManager->getSimpleSingleton("IBFCommander");
    m_iBFSquad = classManager->getSimpleSingleton("IBFSquad");
    m_iBFRadioComm = classManager->getSimpleSingleton("IBFRadioComm");
    m_iBFGraphCreator = classManager->getSimpleSingleton("IBFGraphCreator");
    m_iAIMineManager = classManager->getSimpleSingleton("IAIMineManager");
}

} } }
