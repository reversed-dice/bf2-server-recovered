// FUNCTION: BF2 0x72bd50
// Argument order comes from the registers, not from Ghidra: the tail jumps
// leave RDI = self and set RSI = self+0x174 plus XMM0..XMM3, so the callees
// take (self, mat, f0, f1, f2, f3). Ghidra prints the floats first.
extern "C" void set_perspective_72b530(void* self, void* mat, float, float, float, float);
extern "C" void set_ortho_72af90(void* self, void* mat, float, float, float, float);

extern "C" void resetup_72bd50(char* self) {
    int mode = *(int*)(self + 0x1e4);
    if (mode == 0) {
        set_perspective_72b530(self, self + 0x174,
                               *(float*)(self + 0x1cc), *(float*)(self + 0x1d0),
                               *(float*)(self + 0x1dc), *(float*)(self + 0x1e0));
        return;
    }
    if (mode != 1) return;
    set_ortho_72af90(self, self + 0x174,
                     *(float*)(self + 0x1d4), *(float*)(self + 0x1d8),
                     *(float*)(self + 0x1dc), *(float*)(self + 0x1e0));
}
// REVERSED_FUNCTION: dice_hfe_Frustum_reSetup (0x72bd50)
