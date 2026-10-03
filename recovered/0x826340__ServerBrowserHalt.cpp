// FUNCTION: BF2 0x826340
extern "C" void SBServerListDisconnect(void*);
extern "C" void SBEngineHaltUpdates(void*);

void ServerBrowserHalt(void* self) {
    SBServerListDisconnect((char*)self+0x70);
    SBEngineHaltUpdates(self);
}
// REVERSED_FUNCTION: ServerBrowserHalt (0x826340)
