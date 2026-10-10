// FUNCTION: BF2 0x40e9c0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// std::vector<dice::hfe::TicketHistory::Ticket, std::allocator<dice::hfe::TicketHistory::Ticket> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>
#include <memory>
#include <numeric>
#include <functional>
#include <iterator>

namespace dice { namespace hfe { namespace TicketHistory {

struct Team {
        std::string name;
        int tickets;
    };

} } }

namespace dice { namespace hfe { namespace TicketHistory {

struct Ticket {
        std::string mapName;
        std::string gameMode;
        int a, b, c;
        Team teams[2];
    };

} } }

template class std::vector<dice::hfe::TicketHistory::Ticket, std::allocator<dice::hfe::TicketHistory::Ticket> >;
