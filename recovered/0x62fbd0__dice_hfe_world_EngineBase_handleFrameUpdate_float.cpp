// FUNCTION: BF2 0x62fbd0
typedef void (*vfn_62fbd0)(void*, int, int);
extern "C" void handle_frame_62fbd0(char* self, float dt) {
    if (0.0f < *(float*)(self + 0x330)) {
        float t = *(float*)(self + 0x330) - dt;
        *(float*)(self + 0x330) = t;
        if (0.0f >= t) {
            *(unsigned char*)(self + 0x2c8) = 0;
            *(unsigned int*)(self + 0x308) = 0x3f000000;
            (*(vfn_62fbd0*)(*(char**)self + 0xc0))(self, 0, 0x2000);
        }
    }
}
// REVERSED_FUNCTION: dice_hfe_world_EngineBase_handleFrameUpdate_float (0x62fbd0)
