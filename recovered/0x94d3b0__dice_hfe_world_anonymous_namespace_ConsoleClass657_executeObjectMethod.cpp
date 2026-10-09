// FUNCTION: BF2 0x94d3b0
#include <string>
namespace dice { namespace hfe { namespace world {
extern const unsigned int CID_DefaultDetonationCompTemplate;
extern const unsigned int IID_IProjectileDetonationCompTemplate;
void* getActiveTemplateComponent(unsigned int iid, unsigned int cid);
class ConsoleClass657 {
public:
    virtual void* executeObjectMethod();
};
void* ConsoleClass657::executeObjectMethod() {
    int mode = *(int*)((char*)this + 0x30);
    if (mode == 0) {
        *(char*)((char*)this + 0x108) = 1;
        void* comp = getActiveTemplateComponent(IID_IProjectileDetonationCompTemplate,
                                                CID_DefaultDetonationCompTemplate);
        ((std::string*)((char*)this + 0x110))->assign(*(std::string*)((char*)comp + 0x18));
        return (char*)this + 0x110;
    }
    if (mode == 1) {
        std::string s(**(std::string**)((char*)this + 0x38));
        *(char*)((char*)this + 0x108) = 0;
        void* comp = getActiveTemplateComponent(IID_IProjectileDetonationCompTemplate,
                                                CID_DefaultDetonationCompTemplate);
        ((std::string*)((char*)comp + 0x18))->assign(s);
    }
    return 0;
}
}}}
