// FUNCTION: BF2 0x532de0
#include <string>
typedef void (*Fn)(void*, long, void*);
extern "C" void setObjectTemplate_532de0(void* param_1, std::string* arg2) {
    void** vtbl = *(void***)param_1;
    Fn fn = (Fn)vtbl[0x228 / 8];
    std::string tmp(*arg2);
    fn(param_1, 0, &tmp);
}
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_setObjectTemplate_std_string (0x532de0)
