// FUNCTION: BF2 0xb19b30
#include <string>
namespace dice { namespace hfe { namespace ai {
class AITemplatePlugInManager_c {
public:
    static AITemplatePlugInManager_c* m_instance;
    std::string create(std::string a, std::string b);
};
void* cb_b19b30(void* p) {
    if (*(int*)((char*)p + 0x30) != 2)
        return 0;
    std::string a(*(std::string const*)*(void**)((char*)p + 0x38));
    std::string b(*(std::string const*)*(void**)((char*)p + 0x40));
    *(char*)((char*)p + 0x108) = 1;
    ((std::string*)((char*)p + 0x110))->assign(AITemplatePlugInManager_c::m_instance->create(a, b));
    return (std::string*)((char*)p + 0x110);
}
} } }
