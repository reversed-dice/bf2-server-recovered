#include <cstddef>
#include <utility>

namespace dice { namespace hfe { namespace io {
struct NetworkableDescriptor { void* p; };
struct NetworkableStateMask { int m[12]; };
} } }

// FUNCTION: BF2 0x7cb320
extern "C" void fn_twin_net2(
    std::pair<const dice::hfe::io::NetworkableDescriptor*, dice::hfe::io::NetworkableStateMask>* first,
    unsigned long n,
    const std::pair<const dice::hfe::io::NetworkableDescriptor*, dice::hfe::io::NetworkableStateMask>& value) {
    if (n == 0) return;
    const int* src = value.second.m;
    unsigned long i = 0;
    do {
        if (first) {
            first->first = value.first;
            first->second.m[0] = value.second.m[0];
            int* dst = first->second.m;
            dst[1] = src[1];
            dst[2] = src[2];
            dst[3] = src[3];
            dst[4] = src[4];
            dst[5] = src[5];
            dst[6] = src[6];
            dst[7] = src[7];
            dst[8] = src[8];
            dst[9] = src[9];
            dst[10] = src[10];
            dst[11] = src[11];
        }
        ++i;
        ++first;
    } while (i != n);
}
