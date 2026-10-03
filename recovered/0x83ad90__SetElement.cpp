// FUNCTION: BF2 0x83ad90
// SetElement
// 14 instructions, 2 calls (ArrayNth + memcpy tail), gcc34
extern "C" {
extern long ArrayNth(long, int);
extern void *memcpy(void*, const void*, long);

void SetElement(long param_1, void *param_2, int param_3)
{
    void *dest = (void*)ArrayNth(param_1, param_3);
    long size = (long)*(int*)(param_1 + 8);
    memcpy(dest, param_2, size);
}

}
