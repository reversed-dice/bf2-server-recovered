// FUNCTION: BF2 0x7e8720
#include <climits>

namespace dice { namespace hfe { namespace io {
extern void fn_407628(void* s, const char* lit);
void* cb_7e8720(void* dst, int v) {
    switch (v) {
    case 1: fn_407628(dst, (const char*)0xbad5da); break;          // IDButton_0
    case 2: fn_407628(dst, (const char*)0xbad5e5); break;          // IDButton_1
    case 4: fn_407628(dst, (const char*)0xbad5f0); break;          // IDButton_2
    case 8: fn_407628(dst, (const char*)0xbad5fb); break;          // IDButton_3
    case 0x10: fn_407628(dst, (const char*)0xbad606); break;        // IDButton_4
    case 0x20: fn_407628(dst, (const char*)0xbad611); break;        // IDButton_5
    case 0x40: fn_407628(dst, (const char*)0xbad61c); break;        // IDButton_6
    case 0x80: fn_407628(dst, (const char*)0xbad627); break;        // IDButton_7
    case 0x100: fn_407628(dst, (const char*)0xbad632); break;       // IDButton_8
    case 0x200: fn_407628(dst, (const char*)0xbad63d); break;       // IDButton_9
    case 0x400: fn_407628(dst, (const char*)0xbad648); break;       // IDButton_10
    case 0x800: fn_407628(dst, (const char*)0xbad654); break;       // IDButton_11
    case 0x1000: fn_407628(dst, (const char*)0xbad660); break;      // IDButton_12
    case 0x2000: fn_407628(dst, (const char*)0xbad66c); break;      // IDButton_13
    case 0x4000: fn_407628(dst, (const char*)0xbad678); break;      // IDButton_14
    case 0x8000: fn_407628(dst, (const char*)0xbad684); break;      // IDButton_15
    case 0x10000: fn_407628(dst, (const char*)0xbad690); break;     // IDButton_16
    case 0x20000: fn_407628(dst, (const char*)0xbad69c); break;     // IDButton_17
    case 0x40000: fn_407628(dst, (const char*)0xbad6a8); break;     // IDButton_18
    case 0x80000: fn_407628(dst, (const char*)0xbad6b4); break;     // IDButton_19
    case 0x100000: fn_407628(dst, (const char*)0xbad6c0); break;    // IDButton_20
    case 0x200000: fn_407628(dst, (const char*)0xbad6cc); break;    // IDButton_21
    case 0x400000: fn_407628(dst, (const char*)0xbad6d8); break;    // IDButton_22
    case 0x800000: fn_407628(dst, (const char*)0xbad6e4); break;    // IDButton_23
    case 0x1000000: fn_407628(dst, (const char*)0xbad6f0); break;   // IDButton_24
    case 0x2000000: fn_407628(dst, (const char*)0xbad6fc); break;   // IDButton_25
    case 0x4000000: fn_407628(dst, (const char*)0xbad708); break;   // IDButton_26
    case 0x8000000: fn_407628(dst, (const char*)0xbad714); break;   // IDButton_27
    case 0x10000000: fn_407628(dst, (const char*)0xbad720); break;  // IDButton_28
    case 0x20000000: fn_407628(dst, (const char*)0xbad72c); break;  // IDButton_29
    case 0x40000000: fn_407628(dst, (const char*)0xbad738); break;  // IDButton_30
    case INT_MIN: fn_407628(dst, (const char*)0xbad744); break;     // IDButton_31
    default: fn_407628(dst, (const char*)0xc120d2); break;          // None
    }
    return dst;
}
}}}
// REVERSED_FUNCTION: dice_hfe_io_operator_std_ostreamref_dice_hfe_io_InputDeviceButtons (0x7e8720)
