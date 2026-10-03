// FUNCTION: BF2 0x782310
void* fn_0x782310(void* self, unsigned idx) {
    unsigned long i = idx;
    void** start = *(void***)((char*)self + 0x10);
    void** finish = *(void***)((char*)self + 0x18);
    void* result = 0;
    unsigned long count = (unsigned long)(finish - start);
    if (i < count) {
        result = start[i];
    }
    return result;
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectArmament_getWeapon_unsigned_int_const (0x782310)
