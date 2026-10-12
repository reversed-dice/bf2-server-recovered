// FUNCTION: BF2 0x6b86b0
#include <list>
#include <string>
#include <utility>
#include <memory>

namespace dice { namespace anim { namespace Bundle {

struct BundleEvent { std::string s; };

inline bool operator<(BundleEvent const& a, BundleEvent const& b) { return a.s < b.s; }
inline bool operator==(BundleEvent const& a, BundleEvent const& b) { return a.s == b.s; }

} } }

template class std::list<std::pair<float, dice::anim::Bundle::BundleEvent>, std::allocator<std::pair<float, dice::anim::Bundle::BundleEvent> > >;
