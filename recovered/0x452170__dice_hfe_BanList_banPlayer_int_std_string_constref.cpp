// FUNCTION: BF2 0x452170
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

extern void* game;

namespace world {
extern void* playerManager;
}

class BanList {
public:
    void banPlayer(int pid, const std::string& addr);
    void addAddressToBanList(const std::string& a, const std::string& b);
    void alertOnBanned(int pid, const std::string& addr);
};

void BanList::banPlayer(int pid, const std::string& addr) {
    void* gs = ((void* (*)(void*, int))(*(void***)game)[0x18 / 8])(game, *(int*)0x00c76024);
    void* p = ((void* (*)(void*, int))(*(void***)world::playerManager)[0x40 / 8])(world::playerManager, pid);
    if (p == 0)
        return;
    if (!((bool (*)(void*))(*(void***)p)[0xf0 / 8])(p))
        return;
    if (((int (*)(void*))(*(void***)p)[0xa8 / 8])(p) == 0xff)
        return;
    std::string s;
    if (((bool (*)(void*, void*, std::string*))(*(void***)gs)[0xc0 / 8])(gs, p, &s))
        addAddressToBanList(s, addr);
    alertOnBanned(pid, addr);
    ((void (*)(void*, int, int, const std::string&))(*(void***)gs)[0xd8 / 8])(gs, pid, 0x15, std::string(""));
}

} }
