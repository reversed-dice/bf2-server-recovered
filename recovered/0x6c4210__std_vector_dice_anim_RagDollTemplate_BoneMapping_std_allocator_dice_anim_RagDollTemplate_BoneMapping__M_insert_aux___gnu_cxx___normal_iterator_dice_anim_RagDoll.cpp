// FUNCTION: BF2 0x6c4210
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// std::vector<dice::anim::RagDollTemplate::BoneMapping, std::allocator<dice::anim::RagDollTemplate::BoneMapping> >

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

namespace dice { namespace anim { namespace RagDollTemplate { struct BoneMapping { float x, y, z; }; } } }

template class std::vector<dice::anim::RagDollTemplate::BoneMapping, std::allocator<dice::anim::RagDollTemplate::BoneMapping> >;
