// FUNCTION: BF2 0x7f9cf0
// 0x7f9cf0 v2 - InputManager_setHasFocus (12 ins)
// Load global AFTER branch to match target instruction order
namespace dice { namespace hfe { namespace io {
extern long inputDeviceManager_010b4040;
void dice_hfe_io_InputManager_setHasFocus_bool_unsigned_int(long self, char hasFocus, unsigned int id) {
    if (hasFocus) goto do_focus;
    goto do_unfocus;
do_focus:
    {
        long mgr = inputDeviceManager_010b4040;
        typedef void (*Fn)(long, unsigned int);
        Fn f = (Fn)(*(long*)(*(long*)mgr + 0x38));
        f(mgr, id);
        return;
    }
do_unfocus:
    {
        long mgr = inputDeviceManager_010b4040;
        typedef void (*Fn)(long, unsigned int);
        Fn f = (Fn)(*(long*)(*(long*)mgr + 0x40));
        f(mgr, id);
    }
}
} } }

// REVERSED_FUNCTION: dice_hfe_io_InputManager_setHasFocus_bool_unsigned_int (0x7f9cf0)
