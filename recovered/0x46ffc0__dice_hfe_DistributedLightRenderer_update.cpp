// FUNCTION: BF2 0x46ffc0
// BF2_FLAGS: -fno-strict-aliasing
#include <deque>
#include <map>
#include <set>
#include <string>

namespace dice { namespace hfe {

class DLRWorkItem;

class ClassManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    virtual void* getSingleton(std::string const& name); // +0x98 slot 19
};

extern ClassManager* classManager;

class IGame {
public:
    virtual void g0(); virtual void g1(); virtual void g2();
    virtual void* queryInterface(unsigned int iid); // +0x18 slot 3
};

extern IGame* game;
extern unsigned int IID_IGameServer;

std::string formatString(char const* fmt, ...);

class IBFDebugTextWriter {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6();
    virtual int getColor();                                    // +0x38
    virtual void setColor(int color);                          // +0x40
    virtual void addMessage(int, int, std::string const&, int); // +0x48
};

class IDistributedLightRenderer {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual void traceAllObjects();
    virtual void traceTerrain();
    virtual void addRenderResource(int);
    virtual void removeRenderResource(int);
    virtual void workItemFinished(int);
    virtual void performTraceObject(void*, unsigned int);
    virtual void update();
    virtual ~IDistributedLightRenderer();
};

class DistributedLightRenderer : public IDistributedLightRenderer {
public:
    int m_ref;
    std::deque<DLRWorkItem*> m_queue;
    std::map<int, DLRWorkItem*> m_workItems;
    std::set<int> m_finished;

    void assignWorkItem(int id, DLRWorkItem* item);
    void update();
};

void DistributedLightRenderer::update()
{
    while (m_queue.size() != 0 && m_finished.size() != 0) {
        int id = *m_finished.begin();
        m_finished.erase(m_finished.begin());
        DLRWorkItem* item = m_queue.front();
        m_queue.pop_front();
        assignWorkItem(id, item);
    }

    IBFDebugTextWriter* w =
        (IBFDebugTextWriter*)classManager->getSingleton(std::string("DebugTextWriter"));
    if (!w)
        return;

    if (game->queryInterface(IID_IGameServer) != 0) {
        int saved = w->getColor();
        w->setColor(-1);
        w->addMessage(0x14, 500, formatString("Distributed lightmapGeneration in progress..."), 0);
        w->addMessage(0x14, 510, formatString("Using %d nodes", m_workItems.size()), 0);
        w->addMessage(0x14, 520, formatString("%d items enqued.", m_queue.size()), 0);
        w->addMessage(0x14, 530, formatString("%d items in progress.", m_workItems.size() - m_finished.size()), 0);
        w->setColor(saved);
    } else {
        int saved = w->getColor();
        w->setColor(0xaaffaaff);
        w->addMessage(0x14, 500,
                      formatString("Distributed lightmapGeneration in progress...connected to server"), 0);
        w->setColor(saved);
    }
}

} }
