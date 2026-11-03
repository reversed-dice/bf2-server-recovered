// FUNCTION: BF2 0x46f860
#include <map>
#include <set>

namespace dice { namespace hfe {

class DLRWorkItem;

class DistributedLightRenderer {
public:
    char pad[0x60];
    std::map<int, DLRWorkItem*> m_workItems;   // 0x60
    std::set<int> m_activeIds;                 // 0x90

    void workItemFinished(int id);
};

void DistributedLightRenderer::workItemFinished(int id)
{
    std::map<int, DLRWorkItem*>::iterator it = m_workItems.find(id);
    DLRWorkItem* p = it->second;
    it->second = 0;
    m_activeIds.insert(it->first);
    delete p;
}

}}
