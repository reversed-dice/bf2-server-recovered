// FUNCTION: BF2 0x735ad0
extern "C" void* find_helper(void*);
void* fn_0x735ad0(void* self) {
    void* r = find_helper((char*)self + 0x88);
    void* sentinel = (char*)self + 0x90;
    void* result = 0;
    if (r != sentinel) {
        void* node = *(void**)((char*)r + 0x28);
        result = *(void**)((char*)node + 0x0);
    }
    return result;
}
// REVERSED_FUNCTION: dice_hfe_ClassManager_getSingleton_std_string_constref (0x735ad0)
