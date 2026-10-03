// FUNCTION: BF2 0x449b40
// void std::__uninitialized_fill_n_aux<dice::hfe::PrioInfo*, unsigned long, dice::hfe::PrioInfo>(dice::hfe::Prio

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

namespace dice { namespace hfe { struct PrioInfo { float x, y; }; } }

template void std::__uninitialized_fill_n_aux<dice::hfe::PrioInfo*, unsigned long, dice::hfe::PrioInfo>(dice::hfe::PrioInfo*, unsigned long, dice::hfe::PrioInfo const&, __false_type);
