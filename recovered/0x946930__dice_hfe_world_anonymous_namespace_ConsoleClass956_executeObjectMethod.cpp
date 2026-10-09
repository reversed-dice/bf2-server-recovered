// FUNCTION: BF2 0x946930
#include <string>
extern "C" unsigned _ZN4dice3hfe5world15CID_KitTemplateE;
void _ZN4dice3hfe5world11KitTemplate16addKitVehicleModESsi_946930(void*, std::string a0, int a1);
void* _ZN4dice3hfe5world17getActiveTemplateEj_946930(unsigned);

extern "C" long dice_hfe_world_anonymous_namespace_ConsoleClass956_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 2) {
        std::string a0(**(const std::string**)(self + 0x38));
        int a1 = **(int**)(self + 0x40);
        *(char*)(self + 0x108) = 0;
        _ZN4dice3hfe5world11KitTemplate16addKitVehicleModESsi_946930(
            _ZN4dice3hfe5world17getActiveTemplateEj_946930(_ZN4dice3hfe5world15CID_KitTemplateE), a0, a1);
    }
    return 0;
}
