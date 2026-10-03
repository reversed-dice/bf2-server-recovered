// FUNCTION: BF2 0x79ec00
extern "C" void f_79ec00(void* self) { float* d = (float*)((char*)self + 0x58); *(float*)((char*)self + 0x58) = 0.0f; d[1] = 0.0f; d[2] = 0.0f; *(char*)((char*)self + 0x64) = 0; }
// REVERSED_FUNCTION: dice_hfe_io_BitStream_resetCompressionVector (0x79ec00)
