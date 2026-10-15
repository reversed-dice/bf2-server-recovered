// FUNCTION: BF2 0x69b510
namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };

namespace world {

class ICullerNode {
public:
    char _pad0[0x30];
    Vec3 m_center;
};

class ICullerObject {
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
    virtual ICullerNode* getCullerNode();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual float getLodDistance();
};

class CullerObject {
public:
    virtual void getCuller();
    virtual CullerObject* getCullerObject();
    virtual void destroyObject();
    virtual void updateObject(Vec3 const&, float);
    virtual void v4();
    char _pad8[8];
    Vec3 m_pos;
    ICullerObject* m_node;
};

class QuadTreeCuller {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int iid);
    virtual unsigned int getClassID();
    virtual CullerObject* createObject(Vec3 const& pos, float radius, ICullerObject* obj);
    virtual unsigned int getNumberOfObjects();
    virtual void initQuadTree(Vec3 const& a, float b, float c, float d);
    virtual void destroyObject(CullerObject* obj);
    virtual CullerObject* updateObject(CullerObject* obj, Vec3 const& pos, float radius);
    virtual void optimize();
    virtual void clear();
    virtual void getAllObjects(int& a);
    virtual CullerObject* getOwner();
};


CullerObject* QuadTreeCuller::updateObject(CullerObject* obj, Vec3 const& pos, float radius)
{
    if (obj != 0) {
        ICullerObject* node = obj->m_node;
                ICullerNode* cn = node->getCullerNode();
        const Vec3& p = obj->m_pos;
        const Vec3& q = cn->m_center;
        float dx = p.x - q.x;
        float dy = p.y - q.y;
        float dz = p.z - q.z;
        if (dx * dx + dy * dy + dz * dz < 0.1f)
            return obj;
        destroyObject(obj);
        if (radius <= 0.0f) {
            float f = node->getLodDistance();
            radius = 1.0f < f ? 1.0f : f;
        }
        CullerObject* n = createObject(pos, radius, node);
        if (n == 0)
            return 0;
        return n->getCullerObject();
    }
    return 0;
}

} } }
