// FUNCTION: BF2 0x4a50f0
#include <map>
namespace dice { namespace hfe {

struct TicketSlot { char pad0[8]; char body[40]; };

class ServerGameLogic {
public:
    char pad[0x4e0];
    TicketSlot slots[8];
    int getTicketLimit(unsigned int type, int key);
};

int ServerGameLogic::getTicketLimit(unsigned int type, int key) {
    if (type - 1 > 1) return -1;
    std::map<int, int>* m = (std::map<int, int>*)slots[type - 1].body;
    std::map<int, int>::iterator it = m->find(key);
    if (it == m->end()) return 0;
    return it->second;
}

} }
