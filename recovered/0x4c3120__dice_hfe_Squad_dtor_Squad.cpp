// FUNCTION: BF2 0x4c3120
#include <string>
struct RbTreeLike {
    void erase(void* root);
};
extern "C" void dtor_4c3120(char* param_1) {
    *(void**)param_1 = (void*)0xb384b0;
    RbTreeLike* treebase = (RbTreeLike*)(param_1 + 0x150);
    treebase->erase(*(void**)((char*)treebase + 0x10));
    ((std::string*)(param_1 + 8))->~basic_string();
}
// REVERSED_FUNCTION: dice_hfe_Squad_dtor_Squad (0x4c3120)
