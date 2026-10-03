// FUNCTION: BF2 0x74dcd0
extern "C" void* real_0x74d770(void* path, void* unused, int append, int mode);
extern "C" void* zipOpen(void* path, void* unused) {
    return real_0x74d770(path, unused, 0, 0);
}
// REVERSED_FUNCTION: zipOpen (0x74dcd0)
