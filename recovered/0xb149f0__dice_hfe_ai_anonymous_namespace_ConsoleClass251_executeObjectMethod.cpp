// FUNCTION: BF2 0xb149f0
#include <string>
extern "C" void* _ZN4dice3hfe2ai18KitTemplateManager10m_instanceE;
extern "C" std::string _ZN4dice3hfe2ai18KitTemplateManager6createESsNS0_7KitTypeE_b149f0(void*, std::string, int);

extern "C" long dice_hfe_ai_anonymous_namespace_ConsoleClass251_executeObjectMethod(char* self)
{
    long r = 0;
    if (*(int*)(self + 0x30) == 2) {
        std::string a0(**(const std::string**)(self + 0x38));
        int a1 = **(int**)(self + 0x40);
        *(char*)(self + 0x108) = 1;
        ((std::string*)(self + 0x110))->assign(
            _ZN4dice3hfe2ai18KitTemplateManager6createESsNS0_7KitTypeE_b149f0(
                _ZN4dice3hfe2ai18KitTemplateManager10m_instanceE, a0, a1));
        r = (long)(self + 0x110);
    }
    return r;
}
