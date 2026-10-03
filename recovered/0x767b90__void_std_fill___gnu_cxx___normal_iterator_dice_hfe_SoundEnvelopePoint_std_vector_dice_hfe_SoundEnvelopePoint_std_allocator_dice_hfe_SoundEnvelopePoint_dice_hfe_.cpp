// FUNCTION: BF2 0x767b90
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::SoundEnvelopePoint*, std::vector<dice::hfe::SoundEnvelo

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

template void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::SoundEnvelopePoint*, std::vector<dice::hfe::SoundEnvelopePoint, std::allocator<dice::hfe::SoundEnvelopePoint> > >, dice::hfe::SoundEnvelopePoint>(__gnu_cxx::__normal_iterator<dice::hfe::SoundEnvelopePoint*, std::vector<dice::hfe::SoundEnvelopePoint, std::allocator<dice::hfe::SoundEnvelopePoint> > >, __gnu_cxx::__normal_iterator<dice::hfe::SoundEnvelopePoint*, std::vector<dice::hfe::SoundEnvelopePoint, std::allocator<dice::hfe::SoundEnvelopePoint> > >, dice::hfe::SoundEnvelopePoint const&);
