// FUNCTION: BF2 0x7c5630
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <list>

namespace dice { namespace hfe { namespace io {

class INetworkableInfo {
public:
    virtual void f0();
    virtual void f1();
};

struct Entry {
    Entry* next;
    std::string key;
};

class Table {
public:
    Entry** slots;
    unsigned int count;
    ~Table() {
        for (unsigned int i = 0; i < count; ++i) {
            Entry* e = slots[i];
            while (e) {
                Entry* nx = e->next;
                delete e;
                e = nx;
            }
            slots[i] = 0;
        }
        if (slots) operator delete[](slots);
    }
};

class NetworkableInfoManager {
public:
    char _pad0x08[0x8];
    std::list<std::string> m_0x10;
    std::map<int, INetworkableInfo*> m_0x20;
    char _pad0x50[0x8];
    Table m_0x58;
    char _pad0x68[0x10];
    std::map<int, std::string> m_0x78;
    virtual ~NetworkableInfoManager();
};

NetworkableInfoManager::~NetworkableInfoManager() {}

} } }
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfoManager_dtor_NetworkableInfoManager
