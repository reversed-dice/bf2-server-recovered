// FUNCTION: BF2 0xac8c70
#include <string>
namespace dice { namespace hfe { namespace tool {
struct Adm {
    std::string listTemplates(std::string const& s) const;
};
extern Adm objectTemplateAdm;
void* fn(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        ((std::string*)((char*)p + 0x110))->assign(objectTemplateAdm.listTemplates(""));
        return (std::string*)((char*)p + 0x110);
    }
    if (*(int*)((char*)p + 0x30) == 1) {
        std::string arg(*(std::string const*)*(void**)((char*)p + 0x38));
        *(char*)((char*)p + 0x108) = 1;
        ((std::string*)((char*)p + 0x110))->assign(objectTemplateAdm.listTemplates(arg));
        return (std::string*)((char*)p + 0x110);
    }
    return 0;
}
} } }
