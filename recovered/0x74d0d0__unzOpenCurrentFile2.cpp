// FUNCTION: BF2 0x74d0d0
extern "C" int unzOpenCurrentFile3(void* file, int* method, int* level, int raw, const char* password);

extern "C" int unzOpenCurrentFile2(void* file, int* method, int* level, int raw) {
    return unzOpenCurrentFile3(file, method, level, raw, 0);
}
// REVERSED_FUNCTION: unzOpenCurrentFile2 (0x74d0d0)
