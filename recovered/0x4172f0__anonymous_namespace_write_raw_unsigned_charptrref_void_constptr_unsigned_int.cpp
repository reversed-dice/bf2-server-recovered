// FUNCTION: BF2 0x4172f0
// anonymous_namespace_write_raw
// 13 ins, 1 call (memcpy), gcc34
extern "C" {
extern void *memcpy(void*, const void*, unsigned long);

void write_raw(long *param_1, void *param_2, unsigned int param_3)
{
    memcpy((void*)*param_1, param_2, (unsigned long)param_3);
    *param_1 = *param_1 + (unsigned long)param_3;
}

}
