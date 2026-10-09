// FUNCTION: BF2 0x79cf60
#include <string>

namespace dice { namespace hfe {

class ClassManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    virtual void* getSingleton(std::string const&); // slot 19 (+0x98)
};

extern ClassManager* classManager;

namespace ai {

class RenderSingletonServer {
public:
    static void* m_BFDebugLineDrawer;
    static void* m_BFDebugCircleDrawer;
    static void* m_BFDebugRenderer;
    static void* m_BFDebugTextWriter;
    static void* m_AIDebugRenderer;

    static void updateStaticMethods();
};

void RenderSingletonServer::updateStaticMethods()
{
    m_BFDebugLineDrawer = classManager->getSingleton("DebugLineDrawer");
    m_BFDebugCircleDrawer = classManager->getSingleton("DebugCircleDrawer");
    m_BFDebugRenderer = classManager->getSingleton("DebugRenderer");
    m_BFDebugTextWriter = classManager->getSingleton("DebugTextWriter");
    m_AIDebugRenderer = classManager->getSingleton("IDebugRenderer");
}

} } }
