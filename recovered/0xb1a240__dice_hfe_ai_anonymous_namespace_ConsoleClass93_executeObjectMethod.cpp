// FUNCTION: BF2 0xb1a240
#include <string>

namespace dice { namespace hfe { namespace ai {

class AITemplateManager {
public:
    static AITemplateManager* m_instance;
    std::string create(std::string name);
};

AITemplateManager* AITemplateManager::m_instance;

} } }

extern "C" long executeObjectMethod_0xb1a240(char* self)
{
    long r = 0;
    if (*(int*)(self + 0x30) == 1) {
        std::string a(**(std::string**)(self + 0x38));
        *(char*)(self + 0x108) = 1;
        ((std::string*)(self + 0x110))->assign(
            dice::hfe::ai::AITemplateManager::m_instance->create(a));
        r = (long)(self + 0x110);
    }
    return r;
}
