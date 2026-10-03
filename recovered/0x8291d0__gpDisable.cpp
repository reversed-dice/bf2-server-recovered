// FUNCTION: BF2 0x8291d0
extern "C" int gpiDisable(void*);

int gpDisable(void** data) {
    if (data == 0) return 2;
    if (*data == 0) return 2;
    return gpiDisable(data);
}
