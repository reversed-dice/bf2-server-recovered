// FUNCTION: BF2 0x6066b0
namespace dice { namespace hfe {
class WorldPref {
public:
    static unsigned int getTickCount();
};
namespace world {

class IObject;

class TargetComp {
public:
    void setTargetObject(IObject* obj, bool flag, IObject* x);
};

extern unsigned int CID_TargetObjectTemplate;

class MultiFireArmTargetComp : public TargetComp {
public:
    void setTargetObject(IObject* obj, bool flag, IObject* x);
};

} } }

void dice::hfe::world::MultiFireArmTargetComp::setTargetObject(dice::hfe::world::IObject* obj, bool flag, dice::hfe::world::IObject* x)
{
    void* holder = *(void**)((char*)this + 0x48);
    dice::hfe::world::IObject* prev = 0;
    if (holder != 0)
        prev = *(dice::hfe::world::IObject**)((char*)holder + 8);
    TargetComp::setTargetObject(obj, flag, x);
    if (obj != 0) {
        void* t = *(void**)((char*)obj + 0x28);
        if (((int (*)(void*))(*(void***)t)[0x20 / 8])(t) != dice::hfe::world::CID_TargetObjectTemplate)
            return;
    }
    if (prev == obj)
        return;
    if (obj != 0)
        *(int*)((char*)this + 0x8c) = dice::hfe::WorldPref::getTickCount();
    *(char*)((char*)this + 0x84) = 0;
    *(char*)((char*)this + 0x61) = 1;
}
