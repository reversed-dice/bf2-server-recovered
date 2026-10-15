// FUNCTION: BF2 0x721470
#include <vector>
#include <memory>
#include <algorithm>
#include <iterator>
#include <ext/iterator>
#include <cstddef>

namespace dice { namespace hfe { namespace geom {

struct DebugXMeshFaceColorInfo {
    int m0, m1, m2, m3, m4;
    ~DebugXMeshFaceColorInfo();
};

} } }

namespace std {
struct __false_type {};
}

namespace __gnu_cxx {
// normal_iterator already defined in <ext/iterator>
}

typedef __gnu_cxx::__normal_iterator<dice::hfe::geom::DebugXMeshFaceColorInfo*, std::vector<dice::hfe::geom::DebugXMeshFaceColorInfo, std::allocator<dice::hfe::geom::DebugXMeshFaceColorInfo> > > NormalIt_721470;

namespace std {

void __uninitialized_fill_n_aux(NormalIt_721470 __first, unsigned long __n, dice::hfe::geom::DebugXMeshFaceColorInfo const& __value, __false_type) {
    dice::hfe::geom::DebugXMeshFaceColorInfo* __cur = __first.base();
    unsigned long __end = __n;
    if (__n != 0) {
        unsigned long __i = 0;
        do {
            if (__cur) {
                __cur->m0 = __value.m0;
                __cur->m1 = __value.m1;
                const int* __sv = reinterpret_cast<const int*>(reinterpret_cast<const char*>(&__value) + 8);
                int* __dv = reinterpret_cast<int*>(reinterpret_cast<char*>(__cur) + 8);
                int __a = __sv[2];
                int __b = __sv[1];
                int __c = __sv[0];
                __dv[0] = __c;
                __dv[1] = __b;
                __dv[2] = __a;
            }
            ++__i;
            ++__cur;
        } while (__i != __end);
    }
}

}

