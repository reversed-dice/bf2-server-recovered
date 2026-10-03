// FUNCTION: BF2 0x470440
extern "C" int release_470440(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x60))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_DistributedLightRenderer_release (0x470440)
