// FUNCTION: BF2 0x74d0e0
extern "C" void* real_0x74ca10(void* file, int a, int b, int c, void* password);
extern "C" void* unzOpenCurrentFilePassword(void* file, void* password) {
    return real_0x74ca10(file, 0, 0, 0, password);
}
// REVERSED_FUNCTION: unzOpenCurrentFilePassword (0x74d0e0)
