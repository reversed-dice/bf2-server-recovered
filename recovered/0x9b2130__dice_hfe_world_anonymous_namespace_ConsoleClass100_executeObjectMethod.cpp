// FUNCTION: BF2 0x9b2130
#include <string>

namespace dice { namespace hfe { namespace world {
extern unsigned int CID_SimpleObjectTemplate;
extern void* getActiveTemplate(unsigned int);
struct SimpleObjectTemplate {
    std::string getDestroyableWindowsTemplate() const;
    virtual void v218(std::string const&);
};
} } }

typedef void (*F218)(void*, std::string const&);

extern "C" void* eom(void* self) {
    int mode = *(int*)((char*)self + 0x30);
    if (mode == 0) {
        *(char*)((char*)self + 0x108) = 1;
        unsigned cid = dice::hfe::world::CID_SimpleObjectTemplate;
        std::string* dst = (std::string*)((char*)self + 0x110);
        dice::hfe::world::SimpleObjectTemplate* comp =
            (dice::hfe::world::SimpleObjectTemplate*)dice::hfe::world::getActiveTemplate(cid);
        dst->assign(comp->getDestroyableWindowsTemplate());
        return dst;
    }
    if (mode != 1) {
        return 0;
    }
    std::string tmp(*(std::string const*)*(void**)((char*)self + 0x38));
    unsigned cid = dice::hfe::world::CID_SimpleObjectTemplate;
    *(char*)((char*)self + 0x108) = 0;
    void* comp = dice::hfe::world::getActiveTemplate(cid);
    ((F218)(*(void***)comp)[0x218 / 8])(comp, tmp);
    return 0;
}
