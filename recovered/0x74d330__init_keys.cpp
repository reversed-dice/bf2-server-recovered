// FUNCTION: BF2 0x74d330
extern void update_keys(long*, long, int);

void init_keys(char *param_1, long *param_2, long param_3) {
    *param_2 = 0x12345678;
    param_2[1] = 0x23456789;
    param_2[2] = 0x34567890;
    while (*param_1 != '\0') {
        update_keys(param_2, param_3, (int)*param_1);
        param_1++;
    }
}
