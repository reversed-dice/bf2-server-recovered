// FUNCTION: BF2 0x8263e0
extern "C" void SBQueryEngineThink(void*);
extern "C" void SBListThink(void*);

void ServerBrowserThink(void* self) {
    SBQueryEngineThink(self);
    SBListThink((char*)self+0x70);
}
// REVERSED_FUNCTION: ServerBrowserThink (0x825f20)
