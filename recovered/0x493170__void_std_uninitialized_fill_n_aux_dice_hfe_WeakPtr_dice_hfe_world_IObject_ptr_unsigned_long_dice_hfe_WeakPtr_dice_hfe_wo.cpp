// FUNCTION: BF2 0x493170
void fn_0x493170(void** dst, long count, void** src_ptr) {
    if (count != 0) {
        long i = 0;
        do {
            if (dst != 0) {
                void* val = *src_ptr;
                *dst = val;
                if (val != 0) (*(int*)val)++;
            }
            dst++;
            i++;
        } while (i != count);
    }
}