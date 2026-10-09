// FUNCTION: BF2 0xb16530
#include <string>
namespace dice { namespace hfe { namespace ai {
class WeaponTemplateManager {
public:
    static WeaponTemplateManager* m_instance;
    std::string create(std::string name);
};
void* cb_b16530(void* p) {
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    std::string a(*(std::string const*)*(void**)((char*)p + 0x38));
    *(char*)((char*)p + 0x108) = 1;
    ((std::string*)((char*)p + 0x110))->assign(WeaponTemplateManager::m_instance->create(a));
    return (std::string*)((char*)p + 0x110);
}
} } }
