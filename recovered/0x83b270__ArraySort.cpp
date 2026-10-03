// FUNCTION: BF2 0x83b270
extern "C" void real_0x407818(void* base, long nmemb, long size, void* compar);
extern "C" void ArraySort(void* self, void* compar) {
    long nmemb = *(int*)self;
    long size = *(int*)((char*)self+8);
    void* base = *(void**)((char*)self+0x18);
    real_0x407818(base, nmemb, size, compar);
}
// REVERSED_FUNCTION: ArraySort (0x83b270)
