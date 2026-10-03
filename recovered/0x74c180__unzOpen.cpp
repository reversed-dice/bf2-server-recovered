// FUNCTION: BF2 0x74c180
extern "C" void* real_0x74bde0(void* path, int append);
extern "C" void* unzOpen(void* path) {
    return real_0x74bde0(path, 0);
}
// REVERSED_FUNCTION: unzOpen (0x74c180)
