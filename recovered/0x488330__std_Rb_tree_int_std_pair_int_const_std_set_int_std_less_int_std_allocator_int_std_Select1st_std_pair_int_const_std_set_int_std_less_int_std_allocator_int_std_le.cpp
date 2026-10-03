// FUNCTION: BF2 0x488330
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<int, std::pair<int const, std::set<int, std::less<int>, std::allocator<int> > >, std::_Select1st<std::pair<int const, std::set<int, std::less<int>, std::allocator<int> > > >, std::less<int>, std::allocator<std::pair<int const, std::set<int, std::less<int>, std::allocator<int> > > > >

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

template class std::_Rb_tree<int, std::pair<int const, std::set<int, std::less<int>, std::allocator<int> > >, std::_Select1st<std::pair<int const, std::set<int, std::less<int>, std::allocator<int> > > >, std::less<int>, std::allocator<std::pair<int const, std::set<int, std::less<int>, std::allocator<int> > > > >;
