// FUNCTION: BF2 0x837ef0
extern "C" void gsifree(void*);
void gpiFreeFile(void* self) {
    gsifree(*(void**)self);
    gsifree(*(void**)((char*)self+8));
}
// REVERSED_FUNCTION: gpiFreeFile (0x837ef0)
