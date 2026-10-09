// FUNCTION: BF2 0xac5990
#include <string>
namespace dice { namespace hfe { namespace tool {
struct ObjectTemplateAdm_s {
    void showLayer(std::string const& s);
};
extern ObjectTemplateAdm_s objectTemplateAdm;
extern std::string mActiveLayer;
void* cb_ac5990(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 0;
        objectTemplateAdm.showLayer(mActiveLayer);
        return 0;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    std::string s(*(std::string const*)*(void**)((char*)p + 0x38));
    *(char*)((char*)p + 0x108) = 0;
    objectTemplateAdm.showLayer(s);
    return 0;
}
} } }
