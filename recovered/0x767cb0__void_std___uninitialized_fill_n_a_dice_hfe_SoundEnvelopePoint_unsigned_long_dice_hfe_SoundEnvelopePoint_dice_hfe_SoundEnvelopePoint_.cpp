// FUNCTION: BF2 0x767cb0
// void std::__uninitialized_fill_n_a<dice::hfe::SoundEnvelopePoint*, unsigned long, dice::hfe::SoundEnvelopePoin

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

namespace dice { namespace hfe { struct SoundEnvelopePoint { void* p; ~SoundEnvelopePoint(); }; } }

template void std::__uninitialized_fill_n_a<dice::hfe::SoundEnvelopePoint*, unsigned long, dice::hfe::SoundEnvelopePoint, dice::hfe::SoundEnvelopePoint>(dice::hfe::SoundEnvelopePoint*, unsigned long, dice::hfe::SoundEnvelopePoint const&, std::allocator<dice::hfe::SoundEnvelopePoint>);
