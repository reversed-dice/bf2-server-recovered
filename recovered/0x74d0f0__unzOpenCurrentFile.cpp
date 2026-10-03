// FUNCTION: BF2 0x74d0f0
extern "C" void* real_0x74ca10(void* file, int a, int b, int c, void* password);
extern "C" void* unzOpenCurrentFile(void* file) {
    return real_0x74ca10(file, 0, 0, 0, 0);
}
// REVERSED_FUNCTION: unzOpenCurrentFile (0x74d0f0)
