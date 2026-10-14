// FUNCTION: BF2 0x79c530
#include <string>

namespace dice { namespace hfe {

class ClassManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual ~ClassManager();
    virtual void registerServer(void*);
    virtual void unregisterServer(void*);
    virtual void setDefaultClass(unsigned int, unsigned int);
    virtual void getDefaultClass(unsigned int, unsigned int&);
    virtual void getClassName(unsigned int, std::string&);
    virtual void getClassID(std::string const&, unsigned int&);
    virtual void* createInstance(unsigned int, void*);
    virtual void* createInstance(unsigned int, unsigned int, void*);
    virtual void createInstance(std::string, unsigned int, void*);
    virtual void setSingletonClass(std::string const&, unsigned int);
    virtual void getSingletonClass(std::string const&, unsigned int&);
    virtual void registerSingleton(void*);
    virtual void unregisterSingleton(std::string const&);
    virtual void* getSingleton(std::string const&);
};

extern ClassManager* classManager;

namespace geom {
extern unsigned int CID_DebugLineGraphD3D;
extern unsigned int IID_IDebugGraph;
}

namespace ai {

class IDebugGraph {
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22(unsigned int);
};

class IDebugRenderer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(IDebugGraph*);
};

class BFGraph {
public:
    virtual ~BFGraph();
    virtual void setNumberOfSamples(int);
    virtual void setDimensions(float, float, float, float);
    virtual void setColours(unsigned int, unsigned int, unsigned int);
    virtual void setThresholds(float, float);
    virtual void setMinMaxY(float, float);
    virtual void setCurrentSampleEnding(std::string const&);
    virtual void setCurrentSampleOffset(int, int);
    virtual void addSample(float);
    IDebugGraph* m_graph;
    BFGraph();
};

} } }

dice::hfe::ai::BFGraph::BFGraph() {
    m_graph = (dice::hfe::ai::IDebugGraph*)dice::hfe::classManager->createInstance(
        dice::hfe::geom::IID_IDebugGraph, dice::hfe::geom::CID_DebugLineGraphD3D, 0);
    m_graph->v22(1);
    dice::hfe::ai::IDebugRenderer* r =
        (dice::hfe::ai::IDebugRenderer*)dice::hfe::classManager->getSingleton(std::string("DebugLineGraphRenderer"));
    if (r)
        r->v4(m_graph);
}
