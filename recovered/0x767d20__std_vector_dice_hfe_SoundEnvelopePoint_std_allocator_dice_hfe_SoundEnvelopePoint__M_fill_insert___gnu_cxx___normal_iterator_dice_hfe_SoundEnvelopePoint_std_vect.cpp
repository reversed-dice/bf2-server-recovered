// FUNCTION: BF2 0x767d20
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::SoundEnvelopePoint, std::allocator<dice::hfe::SoundEnvelopePoint> >

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

namespace dice { namespace hfe { struct SoundEnvelopePoint { float x, y, z; }; } }

template class std::vector<dice::hfe::SoundEnvelopePoint, std::allocator<dice::hfe::SoundEnvelopePoint> >;
