// FUNCTION: BF2 0x829170
extern "C" int __GSIACResult;
extern "C" int gpiInitialize(void*);

int gpInitialize(void* data) {
    if (__GSIACResult != 1) return 2;
    if (data == 0) return 2;
    return gpiInitialize(data);
}
