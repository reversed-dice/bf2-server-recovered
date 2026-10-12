// FUNCTION: BF2 0x7928f0
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

extern unsigned int IID_IObject;

class Mat4 {
public:
    float m[16];
    static const Mat4& getIdentity();
};

class IWeapon {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);
};

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual const Mat4& getAbsoluteTransformation() const;
};

} // namespace world

namespace ai {

class WeaponObject {
public:
    char _pad[0x10];
    world::IWeapon* m_weapon;

    const world::Mat4& getAbsoluteTransformation() const;
};

const world::Mat4& WeaponObject::getAbsoluteTransformation() const
{
    world::IObject* obj = (world::IObject*)m_weapon->queryInterface(world::IID_IObject);
    if (obj != 0)
        return obj->getAbsoluteTransformation();
    Debug(6, std::string("AI/AIInterface/BFKnowledge/WeaponObject.cpp"), 478,
          std::string(&DAT_00bb25f1)).os
        << "Cant get object";
    return world::Mat4::getIdentity();
}

} // namespace ai

} }
