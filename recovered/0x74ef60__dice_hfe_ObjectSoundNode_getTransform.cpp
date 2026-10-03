// FUNCTION: BF2 0x74ef60
extern "C" void* f_74ef60(char* self) {
    char* p = *(char**)(self + 8);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x108))(p);
}
// REVERSED_FUNCTION: dice_hfe_ObjectSoundNode_getTransform (0x74ef60)
