// FUNCTION: BF2 0xac56c0
#include <string>
namespace dice { namespace hfe { namespace tool {
struct Adm {
    void renameLayer(std::string const& a, std::string const& b);
};
extern Adm objectTemplateAdm;
extern std::string mActiveLayer;
void* fn(void* p) {
    if (*(int*)((char*)p + 0x30) == 1) {
        std::string a(*(std::string const*)*(void**)((char*)p + 0x38));
        *(char*)((char*)p + 0x108) = 0;
        objectTemplateAdm.renameLayer(a, mActiveLayer);
        return 0;
    }
    if (*(int*)((char*)p + 0x30) == 2) {
        std::string a(*(std::string const*)*(void**)((char*)p + 0x38));
        std::string b(*(std::string const*)*(void**)((char*)p + 0x40));
        *(char*)((char*)p + 0x108) = 0;
        objectTemplateAdm.renameLayer(a, b);
        return 0;
    }
    return 0;
}
} } }
