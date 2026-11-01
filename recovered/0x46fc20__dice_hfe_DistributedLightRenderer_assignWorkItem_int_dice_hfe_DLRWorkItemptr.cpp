// FUNCTION: BF2 0x46fc20
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
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

class DLRWorkItem;

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase* queryInterface(unsigned int iid) const;
};

class IGameServer : public IBase {
public:
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
};

class GameServer {
public:
    void sendDataBlock(int clientId, unsigned int type, void const* data,
                       unsigned int size, bool reliable);
};

struct WorkItemData {
    char m_data[0x240];
    int m_id;
    bool m_flag;
};

class DistributedLightRenderer {
public:
    char m_pad[0x60];
    std::map<int, DLRWorkItem*> m_workItems;

    void assignWorkItem(int resourceId, DLRWorkItem* item);
};

extern char DAT_00bb25f1;
extern IBase* game;
extern const unsigned int IID_IGameServer;

void DistributedLightRenderer::assignWorkItem(int resourceId, DLRWorkItem* item)
{
    std::map<int, DLRWorkItem*>::iterator it = m_workItems.find(resourceId);

    if (it == m_workItems.end())
        Debug(6, std::string("Game/DistributedLightRenderer/DistributedLightRenderer.cpp"),
              0x134, std::string(&DAT_00bb25f1)).os
            << "Resource " << resourceId << " not found";

    if (it->second != 0)
        Debug(6, std::string("Game/DistributedLightRenderer/DistributedLightRenderer.cpp"),
              0x139, std::string(&DAT_00bb25f1)).os
            << "Job already assigned to resource " << resourceId;

    it->second = item;

    IGameServer* iface = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
    if (!iface)
        return;

    void* p = *(void**)item;
    WorkItemData data;
    if (p != 0) {
        int id = *(int*)((char*)p + 0x20);
        data.m_flag = false;
        data.m_id = id;
    } else {
        int id = *(int*)((char*)item + 8);
        data.m_flag = true;
        data.m_id = id;
    }

    ((GameServer*)((char*)iface - 0x80))->sendDataBlock(resourceId, 4, &data, 0x248, true);
}

} }
