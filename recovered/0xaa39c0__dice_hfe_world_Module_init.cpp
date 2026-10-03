// FUNCTION: BF2 0xaa39c0
#include <string>

namespace dice { namespace hfe { namespace world {
void registerConsoleObjects(void* self, void* a0);
void registerTypeConversion(void* self, const std::string& a0, const std::string& a1);
class Module {
public:
    bool init();
};
extern void* g_f6c690;
} } }

bool dice::hfe::world::Module::init()
{
    registerConsoleObjects(g_f6c690, (void*)0x1133800);
    registerTypeConversion(g_f6c690, std::string("IObject*"), std::string("object"));
    registerTypeConversion(g_f6c690, std::string("IObject_ptrproxy"), std::string("object"));
    registerTypeConversion(g_f6c690, std::string("world::IObject*"), std::string("object"));
    registerTypeConversion(g_f6c690, std::string("world::IObject_ptrproxy"), std::string("object"));
    registerTypeConversion(g_f6c690, std::string("IObjectTemplate*"), std::string("objectTemplate"));
    registerTypeConversion(g_f6c690, std::string("IObjectTemplate_ptrproxy"), std::string("objectTemplate"));
    registerTypeConversion(g_f6c690, std::string("world::IObjectTemplate*"), std::string("objectTemplate"));
    registerTypeConversion(g_f6c690, std::string("world::IObjectTemplate_ptrproxy"), std::string("objectTemplate"));
    registerTypeConversion(g_f6c690, std::string("const IObjectTemplate*"), std::string("objectTemplate"));
    registerTypeConversion(g_f6c690, std::string("const IObjectTemplate_ptrproxy"), std::string("objectTemplate"));
    registerTypeConversion(g_f6c690, std::string("const world::IObjectTemplate*"), std::string("objectTemplate"));
    registerTypeConversion(g_f6c690, std::string("const world::IObjectTemplate_ptrproxy"), std::string("objectTemplate"));
    return true;
}
