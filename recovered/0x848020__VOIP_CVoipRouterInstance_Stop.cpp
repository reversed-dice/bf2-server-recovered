// FUNCTION: BF2 0x848020
extern "C" int VOIP_CVoipRouterInstance_Stop(void* self) {
    *((char*)self+8) = 0;
    return 1;
}
// REVERSED_FUNCTION: VOIP_CVoipRouterInstance_Stop (0x848020)
