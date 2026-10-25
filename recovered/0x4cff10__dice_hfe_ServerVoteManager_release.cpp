// FUNCTION: BF2 0x4cff10
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <list>

namespace dice { namespace hfe {

struct OwnedPtr {
    void* p;
    ~OwnedPtr() { if (p) ::operator delete(p); }
};

struct Vote {
    char pad0[0x18];
    std::map<int, int> m_map;    // 0x18
    OwnedPtr m_own;              // 0x48
    char pad1[0x18];             // 0x50
    std::string m_name;          // 0x68
    char pad2[0x10];             // 0x70
};

class ServerVoteManager {
public:
    void release();
    static ServerVoteManager* _instance;
private:
    char pad0[0x18];
    std::map<int, int> m_map;    // 0x18
    OwnedPtr m_own;              // 0x48
    char pad1[0x18];             // 0x50
    std::string m_name;          // 0x68
    char pad2[0x20];             // 0x70
    Vote m_votesA[3];            // 0x90
    Vote m_votesB[3];            // 0x210
    std::list<int> m_list;       // 0x390
};

ServerVoteManager* ServerVoteManager::_instance = 0;

void ServerVoteManager::release() {
    if (!_instance)
        return;
    delete _instance;
    _instance = 0;
}

} }
