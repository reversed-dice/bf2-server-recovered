// FUNCTION: BF2 0x68f0a0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <vector>
#include <utility>

namespace dice { namespace hfe {

struct Vec3 {
    Vec3() : x(0), y(0), z(0) {}
    Vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}
    Vec3(const Vec3& o) : x(o.x), y(o.y), z(o.z) {}
    float x, y, z;
};

struct Mat4 {
    float r[16];
};

namespace world {

class IObject;

class ObjectPredicator {
public:
    virtual bool accepts(IObject* obj) const;
};

class Grid {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void g7();
    virtual void g8();
    virtual void g9();
    virtual void g10();
    virtual void g11();
    virtual void g12();
    virtual void query(const Vec3& min, const Vec3& max, std::vector<std::pair<float, IObject*> >& out);
};

struct CollisionFaceInfo;

class ICollisionMesh {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual bool getDistance(int lod, bool peek, const Mat4& abs, const Mat4& inv,
                             const Vec3& from, const Vec3& to, Vec3& p, Vec3& q,
                             float& f1, float& f2, int* ip, CollisionFaceInfo* fi,
                             bool b1, bool b2) const;
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
    virtual const Mat4& getInvAbsoluteTransformation() const;
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual bool hasCollisionLod(int lod) const;

    char _pad[0x78];
    ICollisionMesh* m_collisionMesh;
};

class ObjectManager {
public:
    char _pad0[0x10];
    Grid* m_10;
    char _pad1[0x8];
    Grid* m_20;
    char _pad2[0xc0];
    std::vector<std::pair<float, IObject*> > m_objects;

    void getObjectsFromGrid(const Vec3& min, const Vec3& max, std::vector<IObject*>& out,
                            ObjectPredicator* pred, bool a6, int lod, bool a8);
};

void ObjectManager::getObjectsFromGrid(const Vec3& min, const Vec3& max, std::vector<IObject*>& out,
                                       ObjectPredicator* pred, bool a6, int lod, bool a8)
{
    m_objects.resize(0);
    m_20->query(min, max, m_objects);
    m_10->query(min, max, m_objects);
    out.resize(0);
    out.reserve(m_objects.size());
    for (std::vector<std::pair<float, IObject*> >::iterator it = m_objects.begin(); it != m_objects.end(); ++it) {
        IObject* obj = it->second;
        if (pred == 0 || pred->accepts(obj)) {
            if (!a6) {
                out.push_back(obj);
            } else if (obj->hasCollisionLod(lod)) {
                ICollisionMesh* mesh = obj->m_collisionMesh;
                float f2;
                float f1;
                Vec3 pos;
                Vec3 normal;
                if (mesh->getDistance(lod, false, obj->getAbsoluteTransformation(), obj->getInvAbsoluteTransformation(), min, max, pos, normal, f1, f2, 0, 0, true, a8)) {
                    out.push_back(obj);
                    if (a8)
                        break;
                }
            }
        }
    }
    m_objects.resize(0);
}

} } }
