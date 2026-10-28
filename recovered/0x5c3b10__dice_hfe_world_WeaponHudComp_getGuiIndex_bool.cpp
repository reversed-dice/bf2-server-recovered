// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x5c3b10
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IWeaponObject;
extern unsigned int IID_IPlayerControlObject;
extern unsigned int IID_IObject;
extern unsigned int IID_IProjectileObject;
extern void* func_0x0069a1e0(void*);

typedef void* (*QueryFn)(void*, unsigned int);
typedef char (*BoolFn)(void*);
typedef int (*IntFn)(void*);
typedef void* (*PtrFn)(void*);

struct WeaponHudComp {
    char _pad0[0x10];
    void* m_iconSource;        // +0x10
    void* m_object;            // +0x18
    int getGuiIndex(bool b);
};

int WeaponHudComp::getGuiIndex(bool b)
{
    if (b && ((BoolFn)(*(void***)m_iconSource)[0x258 / 8])(m_iconSource))
        return 0;
    int idx = ((IntFn)(*(void***)m_iconSource)[0x70 / 8])(m_iconSource);
    if (idx != -1) {
        void* w = 0;
        if (m_object != 0)
            w = ((QueryFn)(*(void***)m_object)[0x18 / 8])(m_object, IID_IWeaponObject);
        if (((BoolFn)(*(void***)m_iconSource)[0x190 / 8])(m_iconSource)) {
            void* pc = 0;
            void* o = *(void**)((char*)m_object + 0x50);
            while (o != 0) {
                pc = ((QueryFn)(*(void***)o)[0x18 / 8])(o, IID_IPlayerControlObject);
                if (pc != 0) break;
                o = *(void**)((char*)o + 0x50);
            }
            if ((pc != 0) & (w != 0)) {
                int a = ((IntFn)(*(void***)w)[0x208 / 8])(w);
                void* cam = ((PtrFn)(*(void***)pc)[0x88 / 8])(pc);
                int c = ((IntFn)(*(void***)cam)[0x58 / 8])(cam);
                if (a == c)
                    return ((IntFn)(*(void***)m_iconSource)[0x70 / 8])(m_iconSource);
                void* o1 = ((QueryFn)(*(void***)m_object)[0x18 / 8])(m_object, IID_IObject);
                void* root1 = func_0x0069a1e0(o1);
                if (root1 != 0) {
                    void* cam2 = ((PtrFn)(*(void***)pc)[0x88 / 8])(pc);
                    if (cam2 != 0) {
                        void* o2 = ((QueryFn)(*(void***)cam2)[0x18 / 8])(cam2, IID_IObject);
                        void* root2 = func_0x0069a1e0(o2);
                        if (((QueryFn)(*(void***)root2)[0x18 / 8])(root2, IID_IProjectileObject) != 0)
                            return ((IntFn)(*(void***)m_iconSource)[0x70 / 8])(m_iconSource);
                    }
                }
            }
        } else {
            if (w != 0 && ((IntFn)(*(void***)w)[0x210 / 8])(w) != 0)
                return ((IntFn)(*(void***)m_iconSource)[0x70 / 8])(m_iconSource);
        }
    }
    return ((IntFn)(*(void***)m_iconSource)[0x60 / 8])(m_iconSource);
}

} } }
