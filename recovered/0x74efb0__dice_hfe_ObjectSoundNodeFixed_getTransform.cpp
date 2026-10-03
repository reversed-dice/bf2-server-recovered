// FUNCTION: BF2 0x74efb0
extern "C" void* f_74efb0(char* self) {
    char* p = *(char**)(self + 8);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x108))(p);
}
// REVERSED_FUNCTION: dice_hfe_ObjectSoundNodeFixed_getTransform (0x74efb0)
