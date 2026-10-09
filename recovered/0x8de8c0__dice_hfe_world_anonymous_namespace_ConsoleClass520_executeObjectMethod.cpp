// FUNCTION: BF2 0x8de8c0
namespace dice { namespace hfe { namespace world {
extern const unsigned int CID_DefaultAnimationCompTemplate;
extern const unsigned int IID_IWeaponAnimationCompTemplate;
void* getActiveTemplateComponent(unsigned int iid, unsigned int cid);
class ConsoleClass520 {
public:
    virtual void* executeObjectMethod();
};
void* ConsoleClass520::executeObjectMethod() {
    int mode = *(int*)((char*)this + 0x30);
    if (mode == 0) {
        *(char*)((char*)this + 0x108) = 1;
        void* comp = getActiveTemplateComponent(IID_IWeaponAnimationCompTemplate,
                                                CID_DefaultAnimationCompTemplate);
        unsigned char b = ((unsigned char (*)(void*))(*(void***)comp)[0x90 / 8])(comp);
        float v = (float)b;
        *(float*)((char*)this + 0x10c) = v;
        return (char*)this + 0x10c;
    }
    if (mode == 1) {
        float f = **(float**)((char*)this + 0x38);
        *(char*)((char*)this + 0x108) = 0;
        void* comp = getActiveTemplateComponent(IID_IWeaponAnimationCompTemplate,
                                                CID_DefaultAnimationCompTemplate);
        bool b = f != 0.0f;
        ((void (*)(void*, bool))(*(void***)comp)[0x88 / 8])(comp, b);
    }
    return 0;
}
}}}
