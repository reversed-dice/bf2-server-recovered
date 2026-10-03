// FUNCTION: BF2 0x5be3e0
void* fn_0x5be3e0(void* self, unsigned idx) {
    unsigned long i = idx;
    void** start = *(void***)self;
    void** finish = *(void***)((char*)self + 0x8);
    void* result = 0;
    unsigned long count = (unsigned long)(finish - start);
    if (i < count) {
        result = start[i];
    }
    return result;
}
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectHolder_getObjectByIndex_unsigned_int_const (0x5be3e0)
