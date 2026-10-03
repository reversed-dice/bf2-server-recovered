// FUNCTION: BF2 0x64a650
#include <string>
extern "C" {
void* dice_hfe_GSServerSideNameValidation_getKeyMap_unsigned_int();
void* dice_hfe_KeyMap_getKey_unsigned_int(void*, unsigned int);
}
extern "C" long getkey_64a650(void* param_1, void* param_2, unsigned int param_3, std::string* param_4, std::string* param_5) {
    void* map = dice_hfe_GSServerSideNameValidation_getKeyMap_unsigned_int();
    if (map != 0) {
        void* key = dice_hfe_KeyMap_getKey_unsigned_int(map, param_3);
        if (key != 0) {
            param_4->assign(*(std::string*)key);
            param_5->assign(*(std::string*)((char*)key + 8));
            return 1;
        }
    }
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_GSServerSideNameValidation_getKey_unsigned_int_int_std_stringref_std_stringref (0x64a650)
