// FUNCTION: BF2 0x834b30
extern "C" void strzcpy(char*, const char*, unsigned int);
void fn_0x834b30(const char* filename) {
    strzcpy((char*)0xf6a320, filename, 0x1001);
}
// REVERSED_FUNCTION: gpiSetInfoCacheFilename (0x834b30)
