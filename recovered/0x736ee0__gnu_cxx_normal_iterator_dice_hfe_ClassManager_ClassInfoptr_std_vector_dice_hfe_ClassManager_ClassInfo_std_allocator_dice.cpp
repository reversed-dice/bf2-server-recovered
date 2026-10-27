// FUNCTION: BF2 0x736ee0
// BF2_FLAGS: -fno-strict-aliasing
// __gnu_cxx::__normal_iterator<dice::hfe::ClassManager::ClassInfo*, std::vector<dice::hfe::ClassManager::ClassIn

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
        bool operator==(std::string const& n) const { return className == n; }
    };

} } }

template __gnu_cxx::__normal_iterator<dice::hfe::ClassManager::ClassInfo*, std::vector<dice::hfe::ClassManager::ClassInfo, std::allocator<dice::hfe::ClassManager::ClassInfo> > > std::find<__gnu_cxx::__normal_iterator<dice::hfe::ClassManager::ClassInfo*, std::vector<dice::hfe::ClassManager::ClassInfo, std::allocator<dice::hfe::ClassManager::ClassInfo> > >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > >(__gnu_cxx::__normal_iterator<dice::hfe::ClassManager::ClassInfo*, std::vector<dice::hfe::ClassManager::ClassInfo, std::allocator<dice::hfe::ClassManager::ClassInfo> > >, __gnu_cxx::__normal_iterator<dice::hfe::ClassManager::ClassInfo*, std::vector<dice::hfe::ClassManager::ClassInfo, std::allocator<dice::hfe::ClassManager::ClassInfo> > >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::random_access_iterator_tag);
