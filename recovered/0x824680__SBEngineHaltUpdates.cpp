// FUNCTION: BF2 0x824680
extern "C" void FIFOClear(void*);

void SBEngineHaltUpdates(void* self) {
    FIFOClear((char*)self+0x20);
    FIFOClear((char*)self+8);
}
// REVERSED_FUNCTION: SBEngineHaltUpdates (0x824680)
