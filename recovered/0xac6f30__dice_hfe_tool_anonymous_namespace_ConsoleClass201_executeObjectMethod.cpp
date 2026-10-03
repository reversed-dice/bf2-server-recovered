// FUNCTION: BF2 0xac6f30
#include <string>
void fn_408368_ac6f30(void*, const std::string& a0, const std::string& a1);

extern "C" long dice_hfe_tool_anonymous_namespace_ConsoleClass201_executeObjectMethod(char* self)
{
    if (*(int*)(self + 0x30) == 2) {
        std::string a0(**(std::string**)(self + 0x38));
        std::string a1(**(std::string**)(self + 0x40));
        *(char*)(self + 0x108) = 0;
        fn_408368_ac6f30((void*)0x1092d80, a0, a1);
    }
    return 0;
}
