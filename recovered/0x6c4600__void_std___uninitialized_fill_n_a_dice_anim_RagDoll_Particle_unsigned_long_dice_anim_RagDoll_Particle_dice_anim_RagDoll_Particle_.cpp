// FUNCTION: BF2 0x6c4600
// void std::__uninitialized_fill_n_a<dice::anim::RagDoll::Particle*, unsigned long, dice::anim::RagDoll::Particl

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

namespace dice { namespace anim { namespace RagDoll { struct Particle { void* p; ~Particle(); }; } } }

template void std::__uninitialized_fill_n_a<dice::anim::RagDoll::Particle*, unsigned long, dice::anim::RagDoll::Particle, dice::anim::RagDoll::Particle>(dice::anim::RagDoll::Particle*, unsigned long, dice::anim::RagDoll::Particle const&, std::allocator<dice::anim::RagDoll::Particle>);
