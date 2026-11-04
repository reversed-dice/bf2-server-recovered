// FUNCTION: BF2 0x7cd1d0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// std::vector<dice::hfe::io::UniqueNetProperty, std::allocator<dice::hfe::io::UniqueNetProperty> >

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

namespace dice { namespace hfe { namespace io {

class INetworkable {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void* queryInterface(unsigned int id);
    virtual void _v20();
    virtual void _v28();
    virtual void _v30();
    virtual void _v38();
    virtual void _v40();
    unsigned short m_netId;                                       
    char _padA[0x28 - 0xa];
    void* m_28;                                                    
};

} } }

namespace dice { namespace hfe { namespace io {

struct UniqueNetProperty {
    std::vector<INetworkable*> m_networkables;                    
};

} } }

template class std::vector<dice::hfe::io::UniqueNetProperty, std::allocator<dice::hfe::io::UniqueNetProperty> >;
