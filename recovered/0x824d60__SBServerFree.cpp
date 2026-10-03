// FUNCTION: BF2 0x824d60
extern "C" void TableFree(void*);
extern "C" void gsifree(void*);

void SBServerFree(void** handle) {
    void* self = *handle;
    void* p = *(void**)((char*)self+0x18);
    TableFree(p);
    *(void**)((char*)self+0x18) = 0;
    gsifree(self);
}
// REVERSED_FUNCTION: SBServerFree (0x824d60)
