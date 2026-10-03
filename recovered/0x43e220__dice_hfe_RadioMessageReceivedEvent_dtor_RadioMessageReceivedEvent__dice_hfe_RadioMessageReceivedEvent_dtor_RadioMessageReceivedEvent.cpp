// FUNCTION: BF2 0x43e220
// Reconstructed from Ghidra decompile.
// Writes vtable pointer at object start.
//
// Notes:
// - Object layout: [0x0] vtable pointer (8 bytes)
// - Function replicates: *param_1 = 0xb2d8f0;
// - Namespaces for class provided; function defined as free function (no namespace block)
//   and uses fully-qualified type name to avoid namespace wrapper (GCC 3.4 compatibility).

namespace dice { namespace hfe {

struct RadioMessageReceivedEvent {
    void *m_vptr; // [0x0] vtable pointer
    // other members not required for this function
};

} } // namespace dice::hfe

extern "C" void dice_hfe_RadioMessageReceivedEvent_dtor_RadioMessageReceivedEvent(dice::hfe::RadioMessageReceivedEvent *param_1) {
    /* Write 64-bit vtable address into object start exactly as in binary */
    *((unsigned long long*)param_1) = 0xb2d8f0ULL;
    return;
}