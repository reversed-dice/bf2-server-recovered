// FUNCTION: BF2 0x4a5470
#include <map>
namespace dice { namespace hfe {

struct TicketSlot { char pad0[8]; char body[40]; };

class ServerGameLogic {
public:
    char pad[0x4e0];
    TicketSlot slots[8];
    void setTicketLimit(unsigned int type, int a, int b);
};

void ServerGameLogic::setTicketLimit(unsigned int type, int a, int b) {
    if (type - 1 > 1) return;
    std::map<int, int>* m = (std::map<int, int>*)slots[type - 1].body;
    m->insert(std::pair<int const, int>(a, b));
}

} }
