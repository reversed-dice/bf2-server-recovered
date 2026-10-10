// FUNCTION: BF2 0x552110
namespace dice { namespace hfe { namespace world {

class IObject;

extern void hackSetFov(IObject* obj, float fov, bool flag);

class Soldier {
public:
    void resetWeaponAnimations();
};

void Soldier::resetWeaponAnimations()
{
    char* s = (char*)this;
    IObject* w = ((IObject* (*)(void*, int))(*(void***)s)[151])(s, *(int*)(s + 0x358));
    if (w != 0)
    {
        hackSetFov(w, -1.0f, true);
        void* x = *(void**)((char*)w + 0x70);
        if (x != 0)
            ((void (*)(void*, int, int))(*(void***)x)[22])(x, 0, 0);
    }
}

}}}
