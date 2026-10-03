// FUNCTION: BF2 0x4759d0
// Candidate for 0x4759d0 - sendFireMessages
// Three bit-flag cases dispatching vtable calls

extern "C" {
    // Global: dice_hfe_eventManager-like object, passed as first arg to vtable calls
    // vtable offsets: +0x408 for fire event, +0x208 for post event
    void postEvent(long obj, int eventId, long player, unsigned char param4);
}

// The target uses 4 callee-saved regs (RBX, RBP, R12, R13) and has a
// complex epilogue that restores them at multiple exit points.
// GCC 4.0 should pick the same registers if the function is simple enough.
void sendFireMessages(unsigned int flags, long player, long obj, unsigned char param4) {
    if (flags & 1) {
        // vtable+0x408: fire(8)
        (*(void(**)(long, int))(*(long*)player + 0x408))(player, 8);
        // vtable+0x208: post(6, player, param4)
        (*(void(**)(long, int, long, unsigned char))(*(long*)obj + 0x208))(obj, 6, player, param4);
    }
    if (flags & 2) {
        (*(void(**)(long, int))(*(long*)player + 0x408))(player, 0x1f);
        (*(void(**)(long, int, long, unsigned char))(*(long*)obj + 0x208))(obj, 6, player, param4);
    }
    if (flags & 4) {
        (*(void(**)(long, int))(*(long*)player + 0x408))(player, 0x2f);
        (*(void(**)(long, int, long, unsigned char))(*(long*)obj + 0x208))(obj, 6, player, param4);
    }
}
