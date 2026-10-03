// FUNCTION: BF2 0x4520f0
#include <string>
#include <ostream>

namespace dice { namespace hfe {

class BanList {
public:
    void banPlayerKey(int);
    void banPlayerKey(int, std::string const&);
};

void BanList::banPlayerKey(int a0)
{
    banPlayerKey(a0, std::string(""));
}

}
}
