// FUNCTION: BF2 0x5e2620
namespace dice { namespace hfe { namespace world {

class IObject;

enum AlternateDisplayMode {
    ADM_Normal = 0,
    ADM_Alternate = 1
};

extern unsigned IID_IObject;
extern unsigned IID_IWeaponSoundComp;
extern unsigned IID_IWeaponAnimationComp;
extern unsigned IID_IAnimatedBundle;

class GenericFireArm {
public:
    void setAlternateDisplayObject(IObject* obj, AlternateDisplayMode mode);
    char _pad0[0x2a8];
    IObject* m_sound;
    char _pad1[0x2d0 - 0x2b0];
    IObject* m_anim;
    IObject* m_alt;
    IObject* m_display;
    IObject* m_soundSaved;
    IObject* m_animSaved;
};

void GenericFireArm::setAlternateDisplayObject(IObject* obj, AlternateDisplayMode mode)
{
    bool b = mode == ADM_Alternate;
    if (((void* (*)(void*, unsigned))(*(void***)this)[0x18/8])(this, IID_IObject) == obj) {
        if (this->m_alt == 0) {
            return;
        }
        ((void (*)(void*, int, int))(*(void***)this)[0xc0/8])(this, 2, 0);
        ((void (*)(void*, int, int))(*(void***)this->m_alt)[0xc0/8])(this->m_alt, 1, 2);
        if (this->m_sound != 0 && this->m_sound != this->m_soundSaved) {
            if (!b) {
                ((void (*)(void*))(*(void***)this->m_sound)[0xc8/8])(this->m_sound);
            }
            this->m_sound = this->m_soundSaved;
            if (mode == 0) {
                ((void (*)(void*))(*(void***)this->m_soundSaved)[0xc0/8])(this->m_soundSaved);
            }
        }
        if (this->m_anim != 0 && this->m_anim != this->m_animSaved) {
            if (!b) {
                ((void (*)(void*))(*(void***)this->m_anim)[0xc8/8])(this->m_anim);
            }
            this->m_anim = this->m_animSaved;
            if (!b) {
                ((void (*)(void*))(*(void***)this->m_animSaved)[0xc0/8])(this->m_animSaved);
            }
        }
        void* ab = ((void* (*)(void*, unsigned))(*(void***)this->m_alt)[0x18/8])(this->m_alt, IID_IAnimatedBundle);
        ab = ((void* (*)(void*))(*(void***)ab)[0x38/8])(ab);
        ((void (*)(void*, int))(*(void***)ab)[0x30/8])(ab, 1);
        this->m_display = 0;
        return;
    }
    ((void (*)(void*, int, int))(*(void***)this)[0xc0/8])(this, 2, 0);
    ((void (*)(void*, int, int))(*(void***)obj)[0xc0/8])(obj, 2, 1);
    void* s = ((void* (*)(void*, unsigned, unsigned))(*(void***)obj)[0xb8/8])(obj, IID_IWeaponSoundComp, IID_IWeaponSoundComp);
    if (s != 0) {
        if (!b && this->m_sound != 0) {
            ((void (*)(void*))(*(void***)this->m_sound)[0xc8/8])(this->m_sound);
        }
        this->m_sound = (IObject*)s;
        if (mode == 0) {
            ((void (*)(void*))(*(void***)s)[0xc0/8])(s);
        }
    }
    void* a = ((void* (*)(void*, unsigned, unsigned))(*(void***)obj)[0xb8/8])(obj, IID_IWeaponAnimationComp, IID_IWeaponAnimationComp);
    if (a != 0) {
        if (!b) {
            if (this->m_anim != 0) {
                ((void (*)(void*))(*(void***)this->m_anim)[0xc8/8])(this->m_anim);
            }
        }
        this->m_anim = (IObject*)a;
        if (!b) {
            ((void (*)(void*))(*(void***)a)[0xc0/8])(a);
        }
    }
    void* ab = ((void* (*)(void*, unsigned))(*(void***)this)[0x18/8])(this, IID_IAnimatedBundle);
    ab = ((void* (*)(void*))(*(void***)ab)[0x38/8])(ab);
    ((void (*)(void*, int))(*(void***)ab)[0x30/8])(ab, 1);
    this->m_display = obj;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_setAlternateDisplayObject_dice_hfe_world_IObjectptr_dice_hfe_world_AlternateDisplayMode (0x5e2620)
