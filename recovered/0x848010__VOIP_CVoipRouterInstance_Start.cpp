// FUNCTION: BF2 0x848010
extern "C" int VOIP_CVoipRouterInstance_Start(void* self) {
    *((char*)self+8) = 1;
    return 1;
}
// REVERSED_FUNCTION: VOIP_CVoipRouterInstance_Start (0x848010)
