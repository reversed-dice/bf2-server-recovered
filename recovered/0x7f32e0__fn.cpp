// FUNCTION: BF2 0x7f32e0
unsigned char dice_hfe_io_FalconDevice_getInvertAxis(void* self, int i)
{ int m = *(int*)((char*)self + 0x44); if (i > m) return 0; return *(unsigned char*)((char*)self + 0x58 + i); }
