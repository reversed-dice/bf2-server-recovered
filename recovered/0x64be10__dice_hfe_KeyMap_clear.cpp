// FUNCTION: BF2 0x64be10
extern "C" void real_0x64c140(void* self, void* m0, void* m8);
extern "C" void fn_0x64be10(void* self) {
    real_0x64c140(self, *(void**)self, *(void**)((char*)self+8));
}
// REVERSED_FUNCTION: dice_hfe_KeyMap_clear (0x64be10)
