// FUNCTION: BF2 0x721400
#include <vector>
#include <memory>
#include <algorithm>
#include <iterator>
#include <cstddef>

namespace dice { namespace hfe { namespace geom {

struct DebugXMeshFaceColorInfo {
    int m0, m1, m2, m3, m4;
    ~DebugXMeshFaceColorInfo();
};

} } }

namespace std {

struct __false_type {};

template<typename _ForwardIterator, typename _Size, typename _Tp>
void __uninitialized_fill_n_aux(_ForwardIterator __first, _Size __n, _Tp const& __value, __false_type) {
    _ForwardIterator __cur = __first;
    _Size __end = __n;
    if (__n != 0) {
        _Size __i = 0;
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

template void __uninitialized_fill_n_aux<dice::hfe::geom::DebugXMeshFaceColorInfo*, unsigned long, dice::hfe::geom::DebugXMeshFaceColorInfo>(
    dice::hfe::geom::DebugXMeshFaceColorInfo*, unsigned long, dice::hfe::geom::DebugXMeshFaceColorInfo const&, __false_type);

}
