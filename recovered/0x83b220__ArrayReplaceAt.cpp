// FUNCTION: BF2 0x83b220
// ArrayReplaceAt
// 17 instructions, 1 call + 1 tail call, gcc34
extern "C" {
extern void FreeElement(long, int);
extern void SetElement(long, void*, int);

void ArrayReplaceAt(long param_1, void *param_2, int param_3)
{
    FreeElement(param_1, param_3);
    SetElement(param_1, param_2, param_3);
}

}
