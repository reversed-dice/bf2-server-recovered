// FUNCTION: BF2 0x792040
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

namespace world {

extern const unsigned int IID_IWeaponObject;
extern const unsigned int IID_IWeaponAmmoCompTemplate;
extern const unsigned int IID_IWeaponZoomComp;
extern const unsigned int IID_IWeaponFireComp;
extern const unsigned int IID_IWeaponZoomCompTemplate;
extern const unsigned int IID_IItemObject;
extern const unsigned int CID_SimpleObjectTemplate;
extern const unsigned int CID_ReplenishingAmmoCompTemplate;
extern const unsigned int CID_ResurrectCollisionCompTemplate;
extern const unsigned int CID_StickyCollisionCompTemplate;
extern const unsigned int CID_DefaultZoomCompTemplate;

enum TargetSystem {
    TS_NONE = 0,
    TS_1 = 1,
    TS_2 = 2,
    TS_3 = 3,
    TS_4 = 4
};

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22();
    virtual void* queryInterface2(unsigned int iid, unsigned int iid2);

    char _pad[0x20];
    void* m_template;   // +0x28
};

} // namespace world

namespace io { enum PlayerInputMap { PIM_NONE = 0 }; }

namespace ai {

enum WeaponType { WT_NONE = 0, WT_1 = 1, WT_2 = 2, WT_3 = 3, WT_4 = 4 };
enum WeaponGuidingSystem { WGS_NONE = 0 };

class IAIGame {
public:
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25();
    virtual bool isSomething();
};

class CommonSingletonServer {
public:
    static IAIGame* m_iaiGame;
};

class WeaponTemplate {
public:
    void init(float, float, float, int, int, int,
              dice::hfe::io::PlayerInputMap, dice::hfe::io::PlayerInputMap,
              dice::hfe::io::PlayerInputMap, int, WeaponType, float,
              WeaponGuidingSystem);
    char m_1;
};

class WeaponObject {
public:
    char _pad8[0x8];
    int m_8;
    void* m_weapon;              // +0x10
    WeaponTemplate* m_template;  // +0x18

    void init(dice::hfe::world::IObject* obj);
    int targetSystemToWeaponGuidingSystem(dice::hfe::world::TargetSystem ts) const;
};

typedef void* (*FnP0)(void*);
typedef void* (*FnP1)(void*, unsigned int);
typedef void* (*FnP2)(void*, unsigned int, unsigned int);
typedef int (*FnI0)(void*);
typedef int (*FnI1)(void*, int);
typedef float (*FnF0)(void*);
typedef const std::string& (*FnS0)(void*);
typedef bool (*FnB0)(void*);

static inline void checkPointer(void* p)
{
    if (p == 0)
        Debug(6, std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 46,
              std::string(&DAT_00bb25f1)).os
            << "AI::Allocation failed";
}

void WeaponObject::init(dice::hfe::world::IObject* obj)
{
    void* w = obj->queryInterface(dice::hfe::world::IID_IWeaponObject);
    checkPointer(w);
    m_weapon = w;
    if (*((char*)m_template + 1) != 0)
        return;
    if (CommonSingletonServer::m_iaiGame->isSomething())
        return;

    void* ot = ((FnP0)(*(void***)m_weapon)[0x320 / 8])(m_weapon);
    char* tmpl = ot ? (char*)((FnP1)(*(void***)ot)[0xa0 / 8])(ot, dice::hfe::world::CID_SimpleObjectTemplate) : 0;

    char* ammo = (char*)((FnP1)(*(void***)obj->m_template)[0xb8 / 8])(obj->m_template, dice::hfe::world::IID_IWeaponAmmoCompTemplate);
    char* coll = (char*)((FnP0)(*(void***)m_weapon)[0x320 / 8])(m_weapon);

    float f98;
    WeaponType wtype;
    float f30;
    if (ammo != 0 && ((FnI0)(*(void***)ammo)[0x20 / 8])(ammo) == (int)dice::hfe::world::CID_ReplenishingAmmoCompTemplate) {
        wtype = (WeaponType)(2 - (*(int*)(ammo + 0x78) == 0));
        f30 = *(float*)(ammo + 0x74);
    } else {
        wtype = WT_NONE;
        f30 = 0.0f;
    }

    if (coll != 0) {
        if (((FnP1)(*(void***)coll)[0xc0 / 8])(coll, dice::hfe::world::CID_ResurrectCollisionCompTemplate) != 0)
            wtype = WT_3;
        else
            wtype = ((FnP1)(*(void***)coll)[0xc0 / 8])(coll, dice::hfe::world::CID_StickyCollisionCompTemplate) != 0 ? WT_4 : wtype;
    }

    float f34;
    float f38;
    if (tmpl == 0) {
        f34 = 0.0f;
        f38 = 1.0f;
    } else {
        f98 = *(float*)(tmpl + 0x98);
        f34 = *(float*)(tmpl + 0x7c);
        f38 = *(float*)(tmpl + 0xc0);
        switch (*(int*)(tmpl + 0xec)) {
        case 0:
            break;
        case 1:
        case 2:
            f34 = f34 * 0.0314159f / f98;
            break;
        case 3:
        case 4:
            if (f34 != 0.0f)
                f34 = 0.3f;
            break;
        default:
            Debug(6, std::string("AI/AIInterface/BFKnowledge/WeaponObject.cpp"), 0xbd,
                  std::string(&DAT_00bb25f1)).os
                << "Unknown physics on projectile " << ((FnS0)(*(void***)tmpl)[0x58 / 8])(tmpl);
            break;
        }
    }

    int v3c = ((FnI1)(*(void***)m_weapon)[0x128 / 8])(m_weapon, 0);
    int v40 = ((FnI0)(*(void***)m_weapon)[0x108 / 8])(m_weapon);
    float v44 = ((FnF0)(*(void***)m_weapon)[0x318 / 8])(m_weapon);
    int v48 = tmpl ? ((FnI0)(*(void***)tmpl)[0x190 / 8])(tmpl) : -1;
    int v50 = ((FnI0)(*(void***)m_weapon)[0x70 / 8])(m_weapon);

    void* item = obj->queryInterface(dice::hfe::world::IID_IItemObject);
    int v4c = item ? ((FnI0)(*(void***)item)[0x60 / 8])(item) : -1;

    int guid = targetSystemToWeaponGuidingSystem((dice::hfe::world::TargetSystem)((FnI0)(*(void***)m_weapon)[0x260 / 8])(m_weapon));

    int zoom = 0x40;
    void* zc = ((FnP2)(*(void***)obj)[0xb8 / 8])(obj, dice::hfe::world::IID_IWeaponZoomComp, dice::hfe::world::IID_IWeaponZoomComp);
    if (zc != 0) {
        if (((FnB0)(*(void***)zc)[0x160 / 8])(zc)) {
            char* zt = (char*)((FnP1)(*(void***)obj->m_template)[0xb8 / 8])(obj->m_template, dice::hfe::world::IID_IWeaponZoomCompTemplate);
            if (((FnI0)(*(void***)zt)[0x20 / 8])(zt) == (int)dice::hfe::world::CID_DefaultZoomCompTemplate && *(int*)(zt + 0x40) != 0)
                zoom = ((FnI0)(*(void***)zc)[0x150 / 8])(zc);
        }
    }

    int fire = 0x40;
    void* fc = ((FnP2)(*(void***)obj)[0xb8 / 8])(obj, dice::hfe::world::IID_IWeaponFireComp, dice::hfe::world::IID_IWeaponFireComp);
    if (fc != 0)
        fire = ((FnI0)(*(void***)fc)[0x230 / 8])(fc);

    m_template->init(f34, f38, v44, v48, v3c, v40,
                     (dice::hfe::io::PlayerInputMap)v50,
                     (dice::hfe::io::PlayerInputMap)zoom,
                     (dice::hfe::io::PlayerInputMap)fire,
                     v4c, wtype, f30,
                     (WeaponGuidingSystem)guid);
}

} // namespace ai
} }
