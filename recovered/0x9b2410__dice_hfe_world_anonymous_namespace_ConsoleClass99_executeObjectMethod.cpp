// FUNCTION: BF2 0x9b2410
#include <string>

namespace dice { namespace hfe { namespace world {
extern unsigned int CID_SimpleObjectTemplate;
extern void* getActiveTemplate(unsigned int);
} } }

extern "C" void* eom(void* self) {
    int mode = *(int*)((char*)self + 0x30);
    if (mode == 0) {
        *(char*)((char*)self + 0x108) = 1;
        unsigned cid = dice::hfe::world::CID_SimpleObjectTemplate;
        std::string* dst = (std::string*)((char*)self + 0x110);
        void* comp = dice::hfe::world::getActiveTemplate(cid);
        dst->assign(std::string(*(std::string*)((char*)comp + 0x180)));
        return dst;
    }
    if (mode != 1) {
        return 0;
    }
    std::string tmp(*(std::string const*)*(void**)((char*)self + 0x38));
    unsigned cid = dice::hfe::world::CID_SimpleObjectTemplate;
    *(char*)((char*)self + 0x108) = 0;
    void* comp = dice::hfe::world::getActiveTemplate(cid);
    ((std::string*)((char*)comp + 0x180))->assign(tmp);
    return 0;
}
