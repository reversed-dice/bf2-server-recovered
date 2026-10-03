// FUNCTION: BF2 0x795ec0
extern "C" void* find_helper(void*);
void* fn_0x795ec0(void* self) {
    void* r = find_helper((char*)self + 0x8);
    void* sentinel = (char*)self + 0x10;
    void* result = 0;
    if (r != sentinel) {
        void* node = *(void**)((char*)r + 0x28);
        result = *(void**)((char*)node + 0x8);
    }
    return result;
}
// REVERSED_FUNCTION: dice_hfe_ai_AITemplatePlugInManager_getTemplatePlugIn_std_string (0x795ec0)
