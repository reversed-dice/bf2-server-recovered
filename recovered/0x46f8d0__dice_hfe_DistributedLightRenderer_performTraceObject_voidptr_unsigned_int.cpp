// FUNCTION: BF2 0x46f8d0
// BF2_FLAGS: -fcrossjumping
#include <string>
#include <ostream>

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

class ClassManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22();
    virtual void* getClass(const std::string& name);
};

extern ClassManager* classManager;

extern char DAT_00bb25f1;

namespace world {

class IObject;

class ObjectManager {
public:
    virtual void p000(); virtual void p008(); virtual void p010(); virtual void p018();
    virtual void p020(); virtual void p028(); virtual void p030(); virtual void p038();
    virtual void p040(); virtual void p048(); virtual void p050(); virtual void p058();
    virtual void p060(); virtual void p068(); virtual void p070(); virtual void p078();
    virtual void p080(); virtual void p088(); virtual void p090(); virtual void p098();
    virtual void p0a0(); virtual void p0a8(); virtual void p0b0(); virtual void p0b8();
    virtual void p0c0(); virtual void p0c8(); virtual void p0d0(); virtual void p0d8();
    virtual void p0e0(); virtual void p0e8(); virtual void p0f0(); virtual void p0f8();
    virtual void p100(); virtual void p108(); virtual void p110(); virtual void p118();
    virtual void* getCurrent();
    virtual void setCurrent(void* o);
    virtual void p138(); virtual void p140(); virtual void p148();
    virtual void p150(); virtual void p158(); virtual void p160();
    virtual IObject* getObject(unsigned int id);
};

extern ObjectManager* objectManager;

}

class PostRemoteEvent {
public:
    PostRemoteEvent(int cat, unsigned int a, bool b, void* c, unsigned int d, float e);
    char _pad[88];
};

struct GameStub {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void notify(int id, PostRemoteEvent* ev);
};

extern GameStub* game;

class IDistributedLightRenderer {
public:
    virtual void v0(); virtual void v8(); virtual void v10(); virtual void v18();
    virtual void v20();
    virtual bool onTrace();
    virtual void v30();
    virtual bool removeRenderResource(unsigned int id);
};

struct TraceItem {
    char _pad[0x240];
    unsigned int m_id;
    unsigned char m_flag;
};

class DistributedLightRenderer {
public:
    void performTraceObject(void* item_, unsigned int task);
};

void DistributedLightRenderer::performTraceObject(void* item_, unsigned int task)
{
    TraceItem* item = (TraceItem*)item_;

    IDistributedLightRenderer* r =
        (IDistributedLightRenderer*)classManager->getClass(std::string("LightmapGeneration"));
    if (r == 0) {
        Debug(6, std::string("Game/DistributedLightRenderer/DistributedLightRenderer.cpp"), 216,
              std::string(&DAT_00bb25f1)).os << "LightmapGeneration not found";
    }

    bool traced;
    if (item->m_flag == 0) {
        world::IObject* o = world::objectManager->getObject(item->m_id);
        if (o == 0)
            game->notify(-1, new PostRemoteEvent(6, 15, false, 0, 0, 0.0f));
        void* prev = world::objectManager->getCurrent();
        world::objectManager->setCurrent(o);
        traced = r->onTrace();
        world::objectManager->setCurrent(prev);
    } else {
        traced = r->removeRenderResource(item->m_id);
    }

    if (traced)
        game->notify(-1, new PostRemoteEvent(6, 14, false, 0, 0, 0.0f));
    else
        game->notify(-1, new PostRemoteEvent(6, 15, false, 0, 0, 0.0f));
}

}
}
