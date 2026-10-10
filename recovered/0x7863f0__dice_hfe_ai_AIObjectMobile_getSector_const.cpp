// FUNCTION: BF2 0x7863f0
namespace dice { namespace hfe {
namespace world {
extern unsigned int IID_IPortalPassing;

class IPortalPassing {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3();
    virtual void* getSectorHolder(); // 0x20 / 8 = 4
};

class MobileObj {
public:
    virtual void _v0();
    // 0xb8 / 8 = 23
    virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4();
    virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8();
    virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12();
    virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16();
    virtual void _v17(); virtual void _v18(); virtual void _v19(); virtual void _v20();
    virtual void _v21(); virtual void _v22();
    virtual IPortalPassing* queryInterface(unsigned int iid, unsigned int iid_copy); // 0xb8
};
}
namespace ai {

class AIObjectMobile {
public:
    char _pad[0x38];
    world::MobileObj* m_obj;
    void* getSector() const;
};

void* AIObjectMobile::getSector() const {
    world::IPortalPassing* pp = m_obj->queryInterface(world::IID_IPortalPassing, world::IID_IPortalPassing);
    if (pp) {
        void* sh = pp->getSectorHolder();
        if (sh) {
            void* sec = *(void**)((char*)sh + 0x68);
            if (sec) {
                return sec;
            }
        }
    }
    return 0;
}

} } }
