// FUNCTION: BF2 0x801300
// buildFileInfo
// 10 ins, 0 calls, gcc34 - struct field assignment with bitmask
extern "C" {

void buildFileInfo(long param_1, long param_2)
{
    *(char*)(param_1 + 8) = ((*(unsigned int*)(param_2 + 0x18) & 0xf000) == 0x4000);
    long big = *(long*)(param_2 + 0x30);
    *(long*)(param_1 + 0x10) = 0;
    *(long*)(param_1 + 0x18) = 0;
    *(long*)(param_1 + 0x20) = 0;
    *(int*)(param_1 + 0xc) = (int)big;
}

}
