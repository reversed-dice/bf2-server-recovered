// FUNCTION: BF2 0x794840
extern "C" void* find_helper(void*);
void* fn_0x794840(void* self) {
    void* r = find_helper((char*)self + 0x8);
    void* sentinel = (char*)self + 0x10;
    void* result = 0;
    if (r != sentinel) {
        void* node = *(void**)((char*)r + 0x28);
        result = *(void**)((char*)node + 0x8);
    }
    return result;
}
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateManager_getTemplate_std_string (0x794840)
