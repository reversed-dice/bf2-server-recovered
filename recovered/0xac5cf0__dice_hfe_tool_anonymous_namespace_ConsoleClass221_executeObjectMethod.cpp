// FUNCTION: BF2 0xac5cf0
#include <string>
namespace dice { namespace hfe { namespace tool {
class ObjectTemplateAdm {
public:
    void removeLayer(std::string const& layer);
};
extern ObjectTemplateAdm objectTemplateAdm;
extern std::string mActiveLayer;
}}}

int executeObjectMethod(void* self)
{
    using dice::hfe::tool::objectTemplateAdm;
    using dice::hfe::tool::mActiveLayer;
    int mode = *(int*)((char*)self + 0x30);
    if (mode != 0) {
        if (mode == 1) {
            std::string s(**(std::string**)((char*)self + 0x38));
            *(char*)((char*)self + 0x108) = 0;
            objectTemplateAdm.removeLayer(s);
        }
        return 0;
    }
    *(char*)((char*)self + 0x108) = 0;
    objectTemplateAdm.removeLayer(mActiveLayer);
    return 0;
}
