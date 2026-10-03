// FUNCTION: BF2 0x452300
#include <string>
#include <ostream>

namespace dice { namespace hfe {

class BanList {
public:
    void banPlayer(int);
    void banPlayer(int, std::string const&);
};

void BanList::banPlayer(int a0)
{
    banPlayer(a0, std::string(""));
}

}
}
