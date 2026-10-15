// FUNCTION: BF2 0x5e6640
#include <cstddef>
#include <string>

namespace dice { namespace hfe {

class WorldPref {
public:
    static unsigned int getTickCount();
};

class IEventManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void sendEvent(int target, int type, void* data, float delay);
};

extern IEventManager* eventManager;

}}

namespace dice { namespace hfe { namespace world {

class Aux {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void onEnable();
};

class Object {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void updateFlags(unsigned int, unsigned int);
};

extern char DAT_00bb25f1;

class GenericFireArm : public Object {
public:
    void enableWeapon();
    void coolWeapon(float);
    bool is1P();
    void setBlockRotBundleInput(bool);
};

void GenericFireArm::enableWeapon()
{
    if (*(unsigned char*)((char*)this + 0x30c) != 0)
        return;
    updateFlags(0x800, 1);
    *(float*)((char*)this + 0x320) = 10.0f;
    unsigned int tick = dice::hfe::WorldPref::getTickCount();
    int base = *(int*)((char*)*(void**)((char*)this + 0x330) + 0x228) + (int)tick;
    *(unsigned char*)((char*)this + 0x338) = 0;
    *(int*)((char*)this + 0x310) = base;
    int dt = (int)dice::hfe::WorldPref::getTickCount() - *(int*)((char*)this + 0x314);
    if (dt > 0)
        coolWeapon((float)dt / 30.0f);
    if (*(Aux**)((char*)this + 0x2b0) != 0)
        (*(Aux**)((char*)this + 0x2b0))->onEnable();
    if (*(Aux**)((char*)this + 0x2c0) != 0)
        (*(Aux**)((char*)this + 0x2c0))->onEnable();
    if (*(Aux**)((char*)this + 0x290) != 0)
        (*(Aux**)((char*)this + 0x290))->onEnable();
    if (*(Aux**)((char*)this + 0x2a8) != 0)
        (*(Aux**)((char*)this + 0x2a8))->onEnable();
    if (*(Aux**)((char*)this + 0x2a0) != 0)
        (*(Aux**)((char*)this + 0x2a0))->onEnable();
    if (*(Aux**)((char*)this + 0x2d0) != 0)
        (*(Aux**)((char*)this + 0x2d0))->onEnable();
    if (((std::string*)((char*)*(void**)((char*)this + 0x330) + 0x290))->compare(&DAT_00bb25f1) != 0)
        setBlockRotBundleInput(true);
    *(unsigned char*)((char*)this + 0x30c) = 1;
    if (is1P())
        dice::hfe::eventManager->sendEvent(2, 0x1f, this, 0.0f);
}

}}}
