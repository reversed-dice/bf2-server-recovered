// FUNCTION: BF2 0x77af60
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace ai {

class TargetData {
public:
    TargetData() {}
    TargetData(TargetData const& o);
    TargetData& operator=(TargetData const& o);
private:
    int m_0;
    char _p[0xc];
    void* m_10;
};

} } }

template class std::vector<dice::hfe::ai::TargetData, std::allocator<dice::hfe::ai::TargetData> >;
