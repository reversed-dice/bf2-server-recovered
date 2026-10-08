// FUNCTION: BF2 0xafff10
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice {
namespace hfe {
namespace ai {

struct SingletonRegInfo {
    std::string name;
    void* ptr;
    unsigned int iid;
    unsigned int cid;
    unsigned int value;
    SingletonRegInfo() {}
    explicit SingletonRegInfo(const std::string& n) : name(n) {}
};

extern void* g_aiConnection;
extern unsigned int IID_IAIConnection;
extern unsigned int CID_AIConnection;

class AIInterfaceModule {
public:
    char _pad[8];
    SingletonRegInfo* m_finish;
    SingletonRegInfo* m_end;
    void getSingletonList(std::vector<SingletonRegInfo, std::allocator<SingletonRegInfo> >& out);
};

void AIInterfaceModule::getSingletonList(std::vector<SingletonRegInfo, std::allocator<SingletonRegInfo> >& out)
{
    std::string name("AIConnection");
    SingletonRegInfo info(name);
    // PERM_ORDER
    info.ptr = &g_aiConnection;
    info.value = 2;
    info.iid = IID_IAIConnection;
    info.cid = CID_AIConnection;
    // PERM_ORDER_END
    out.push_back(info);
}

}
}
}
