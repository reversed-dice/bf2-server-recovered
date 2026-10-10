// FUNCTION: BF2 0x714200
namespace dice {
namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

struct Mat4 {
    static Mat4 const& getIdentity();
};

namespace world {

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
    virtual Vec3 const& getAbsolutePosition() const;
    virtual void setAbsolutePosition(Vec3 const&);
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void setAbsoluteTransformation(Mat4 const&);
};

class CollisionManager {
public:
    IObject* getObjectInFocus();
    void identityRotateObjectInFocus();
};

void CollisionManager::identityRotateObjectInFocus() {
    IObject* obj = getObjectInFocus();
    if (obj != 0) {
        Vec3 pos = obj->getAbsolutePosition();
        obj->setAbsoluteTransformation(Mat4::getIdentity());
        obj->setAbsolutePosition(pos);
    }
}

} } }
