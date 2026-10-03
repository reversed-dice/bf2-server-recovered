// FUNCTION: BF2 0x488110
// BF2_FLAGS: -fno-strict-aliasing
// std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

template class std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>, std::allocator<int> >;
