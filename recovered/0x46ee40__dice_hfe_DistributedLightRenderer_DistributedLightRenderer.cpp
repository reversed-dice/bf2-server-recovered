// FUNCTION: BF2 0x46ee40
// BF2_FLAGS: -fno-strict-aliasing
#include <deque>
#include <map>
#include <set>

namespace dice { namespace hfe {

class DLRWorkItem;

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

struct QueueSource {
    std::deque<DLRWorkItem*> m_queue;
    QueueSource() : m_queue() {}
};

class DistributedLightRenderer : public IDistributedLightRenderer {
public:
    int m_ref;
    std::deque<DLRWorkItem*> m_queue;
    std::map<int, DLRWorkItem*> m_workItems;
    std::set<int> m_finished;

    DistributedLightRenderer();
};

DistributedLightRenderer::DistributedLightRenderer()
    : m_ref(1),
      m_queue(QueueSource().m_queue),
      m_workItems(),
      m_finished()
{
}

} }
