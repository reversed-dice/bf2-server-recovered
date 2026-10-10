// FUNCTION: BF2 0x737390
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::ClassManager::ClassInfo, std::allocator<dice::hfe::ClassManager::ClassInfo> >

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

namespace dice { namespace hfe { namespace ClassManager {

struct ClassInfo {
        void* createFn;               
        unsigned int classId;         
        std::string className;                                                                                                      
        void* parent;                  
    };

} } }

template class std::vector<dice::hfe::ClassManager::ClassInfo, std::allocator<dice::hfe::ClassManager::ClassInfo> >;
