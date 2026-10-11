// FUNCTION: BF2 0x6295e0
extern "C" char fn_629540(void*);

extern "C" unsigned char pad0(void* self) {
    unsigned char* p = *(unsigned char**)((char*)self + 0x48);
    if (p[0x54] == 1 && *(unsigned int*)((char*)self + 0x34) != 0) {
        if (fn_629540(self) == 1) return 0;
    }
    return 1;
}
extern "C" unsigned char pad1(void* self) {
    unsigned char* p = *(unsigned char**)((char*)self + 0x48);
    if (p[0x54] == 1 && *(unsigned int*)((char*)self + 0x34) != 0) {
        if (fn_629540(self) == 1) return 0;
    }
    return 1;
}

extern "C" unsigned char dice_hfe_world_DefaultZoomComp_allowEffects_const(void* self)
{
    unsigned char* p = *(unsigned char**)((char*)self + 0x48);
    if (p[0x54] == 1 && *(unsigned int*)((char*)self + 0x34) != 0) {
        if (fn_629540(self) == 1)
            return 0;
    }
    return 1;
}
