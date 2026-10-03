// FUNCTION: BF2 0x7e8620
namespace dice { namespace hfe { namespace io {
extern void fn_407628(void* s, const char* lit);
void* cb_7e8620(void* dst, int v) {
    switch (v) {
    case 0: fn_407628(dst, (const char*)0xbad542); break;  // IDAxis_0
    case 1: fn_407628(dst, (const char*)0xbad54b); break;  // IDAxis_1
    case 2: fn_407628(dst, (const char*)0xbad554); break;  // IDAxis_2
    case 3: fn_407628(dst, (const char*)0xbad55d); break;  // IDAxis_3
    case 4: fn_407628(dst, (const char*)0xbad566); break;  // IDAxis_4
    case 5: fn_407628(dst, (const char*)0xbad56f); break;  // IDAxis_5
    case 6: fn_407628(dst, (const char*)0xbad578); break;  // IDAxis_6
    case 7: fn_407628(dst, (const char*)0xbad581); break;  // IDAxis_7
    case 8: fn_407628(dst, (const char*)0xbad58a); break;  // IDAxis_8
    case 9: fn_407628(dst, (const char*)0xbad593); break;  // IDAxis_9
    case 10: fn_407628(dst, (const char*)0xbad59c); break;  // IDAxis_10
    case 11: fn_407628(dst, (const char*)0xbad5a6); break;  // IDAxis_11
    case 12: fn_407628(dst, (const char*)0xbad5b0); break;  // IDAxis_12
    case 13: fn_407628(dst, (const char*)0xbad5ba); break;  // IDAxis_13
    case 14: fn_407628(dst, (const char*)0xbad5c4); break;  // IDAxis_14
    case 15: fn_407628(dst, (const char*)0xbad5ce); break;  // IDAxis_None
    default: fn_407628(dst, (const char*)0xc120d2); break;  // None
    }
    return dst;
}
}}}
// REVERSED_FUNCTION: dice_hfe_io_operator_std_ostreamref_dice_hfe_io_InputDeviceAxes (0x7e8620)
