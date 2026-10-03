// FUNCTION: BF2 0x46c2c0
#include <string>

extern "C" {
extern void GameSpyBackend_shutdown();
extern void CDKeyAuth_dtor_46cc50(void*);
extern void MMBackend_dtor_46d2b0(void*);
}

extern "C" void dtor_46c2c0(char* param_1) {
    *(void**)param_1 = (void*)0xb31ff0;
    if (*(param_1 + 8) != 0) {
        GameSpyBackend_shutdown();
    }
    CDKeyAuth_dtor_46cc50(param_1 + 0x38);
    ((std::string*)(param_1 + 0x28))->~basic_string();
    MMBackend_dtor_46d2b0(param_1);
    ::operator delete(param_1);
}
// REVERSED_FUNCTION: dice_hfe_GameSpyBackend_dtor_GameSpyBackend (0x46c2c0)
