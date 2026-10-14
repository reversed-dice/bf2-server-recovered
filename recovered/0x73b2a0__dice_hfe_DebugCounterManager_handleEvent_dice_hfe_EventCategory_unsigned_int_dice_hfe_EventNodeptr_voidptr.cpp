// FUNCTION: BF2 0x73b2a0
// handleEvent 0x73b2a0 (DebugCounterManager)
// If category==5 and eventType==5, call virtual method 0x30

void handleEvent(void* self, int category, int eventType) {
    if (category == 5 && eventType == 5) {
        typedef void (*FnHandle)(void*);
        void** vtbl = *(void***)self;
        FnHandle handle = (FnHandle)vtbl[0x30 / 8];
        handle(self);
    }
}
