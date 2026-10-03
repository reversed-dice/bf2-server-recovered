// FUNCTION: BF2 0x5af250
namespace dice { namespace hfe { namespace world {

typedef int (*VF0)(void*);

class ArmorGLComp {
public:
    unsigned char _pad[0x2c8];
    unsigned int m_invulnerableTicks;
    bool isInvunerable();
};

extern void* getRootParent_dice_hfe_world_IObject_constptr(void* obj);
extern unsigned int getTickCount_dice_hfe_WorldPref(void);

bool ArmorGLComp::isInvunerable() {
    void* root = getRootParent_dice_hfe_world_IObject_constptr(*(void**)((char*)this + 0x18));
    void* m = *(void**)((char*)this + 0x18);
    if (m) {
        void* o = *(void**)((char*)m + 0x28);
        if (((VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x20)))(o) == *(int*)0xc7cfb4) goto invuln;
    }
    if (root) {
        void* o = *(void**)((char*)root + 0x28);
        if (((VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x20)))(o) == *(int*)0xc7cfb4) goto invuln;
    }
    {
        unsigned int ticks = m_invulnerableTicks;
        unsigned int now = getTickCount_dice_hfe_WorldPref();
        return ticks > now;
    }
invuln:
    return true;
}

} } }
