// FUNCTION: BF2 0x84db90
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice {
namespace hfe {
namespace io {

struct SingletonRegInfo {
    std::string name;
    void* ptr;
    unsigned int iid;
    unsigned int cid;
    unsigned int value;
    SingletonRegInfo() {}
    explicit SingletonRegInfo(const std::string& n) : name(n) {}
};

extern void* networkableInfoManager;
extern unsigned int IID_INetworkableInfoManager;
extern unsigned int CID_NetworkableInfoManager;

class NetworkModule {
public:
    char _pad[8];
    SingletonRegInfo* m_finish;
    SingletonRegInfo* m_end;
    void getSingletonList(std::vector<SingletonRegInfo, std::allocator<SingletonRegInfo> >& out);
};

void NetworkModule::getSingletonList(std::vector<SingletonRegInfo, std::allocator<SingletonRegInfo> >& out)
{
    std::string name("NetworkableInfoManager");
    SingletonRegInfo info(name);
    // PERM_ORDER
    info.ptr = &networkableInfoManager;
    info.value = 1;
    info.iid = IID_INetworkableInfoManager;
    info.cid = CID_NetworkableInfoManager;
    // PERM_ORDER_END
    out.push_back(info);
}

}
}
}
