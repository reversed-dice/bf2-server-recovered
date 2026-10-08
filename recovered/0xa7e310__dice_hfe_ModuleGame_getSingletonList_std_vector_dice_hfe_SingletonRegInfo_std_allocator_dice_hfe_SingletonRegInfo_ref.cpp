// FUNCTION: BF2 0xa7e310
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice {
namespace hfe {

struct SingletonRegInfo {
    std::string name;
    void* ptr;
    unsigned int iid;
    unsigned int cid;
    unsigned int value;
    SingletonRegInfo() {}
    explicit SingletonRegInfo(const std::string& n) : name(n) {}
};

extern void* g_modInfo;
extern unsigned int IID_IModInfo;
extern unsigned int CID_ModInfo;

class ModuleGame {
public:
    char _pad[8];
    SingletonRegInfo* m_finish;
    SingletonRegInfo* m_end;
    void getSingletonList(std::vector<SingletonRegInfo, std::allocator<SingletonRegInfo> >& out);
};

void ModuleGame::getSingletonList(std::vector<SingletonRegInfo, std::allocator<SingletonRegInfo> >& out)
{
    std::string name("ModInfo");
    SingletonRegInfo info(name);
    // PERM_ORDER
    info.ptr = &g_modInfo;
    info.value = 2;
    info.iid = IID_IModInfo;
    info.cid = CID_ModInfo;
    // PERM_ORDER_END
    out.push_back(info);
}

}
}
