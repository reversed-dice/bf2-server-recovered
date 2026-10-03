// FUNCTION: BF2 0x834750
extern int gpiGetProfile(long*, int, long*);
extern void TableRemove(long, long);

void gpiRemoveProfileByID(long *param_1, int param_2) {
    long table = *param_1;
    long local_val;
    int result = gpiGetProfile(param_1, param_2, &local_val);
    if (result != 0) {
        TableRemove(*(long*)(table + 0x4b0), local_val);
    }
}
