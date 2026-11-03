// FUNCTION: BF2 0x6cc060

// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// void std::fill<__gnu_cxx::__normal_iterator<dice::anim::Skeleton::ApplyStage*, std::vector<dice::anim::Skeleto

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

namespace dice { namespace anim { namespace Skeleton { struct ApplyStage { void* p; float m[9]; ~ApplyStage(); }; } } }

template void std::fill<__gnu_cxx::__normal_iterator<dice::anim::Skeleton::ApplyStage*, std::vector<dice::anim::Skeleton::ApplyStage, std::allocator<dice::anim::Skeleton::ApplyStage> > >, dice::anim::Skeleton::ApplyStage>(__gnu_cxx::__normal_iterator<dice::anim::Skeleton::ApplyStage*, std::vector<dice::anim::Skeleton::ApplyStage, std::allocator<dice::anim::Skeleton::ApplyStage> > >, __gnu_cxx::__normal_iterator<dice::anim::Skeleton::ApplyStage*, std::vector<dice::anim::Skeleton::ApplyStage, std::allocator<dice::anim::Skeleton::ApplyStage> > >, dice::anim::Skeleton::ApplyStage const&);
