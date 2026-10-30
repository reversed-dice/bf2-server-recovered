// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5fef30
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };
struct Mat4 { float r[4][4]; };

namespace world {

class IObject;
class ObjectFlagPredicator;

class ObjectManager {
public:
    virtual void m00();
    virtual void m01();
    virtual void m02();
    virtual void m03();
    virtual void m04();
    virtual void m05();
    virtual void m06();
    virtual void m07();
    virtual void m08();
    virtual void m09();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void getObjectsFromGrid(Vec3 const& pos, float radius, std::vector<IObject*>& out, ObjectFlagPredicator* pred);
};

extern ObjectManager* objectManager;
extern void* collisionManager;
extern const unsigned int CID_SoldierTemplate;

extern "C" void* getRootParent_0x69a1e0(void*);
extern "C" void ctor_0x68c390(void*, unsigned int, void*);
extern "C" char checkIfObjectIntersects_0x69b120(void*, void*, void*);

struct ObjectIgnorePredicator {
    void* m_vptr;               // 0x0
    unsigned int m_flags;       // 0x8
    unsigned int m_pad;         // 0xc
    void* m_ignored;            // 0x10
};

struct Comp {
    void* m_vptr;               // 0x0
    char m_pad0[0x10];          // 0x8
    void* m_object;             // 0x18
    char m_pad1[0x180];         // 0x20
    void* m_mesh;               // 0x1a0
    unsigned char m_flag;       // 0x1a8
};

int fn_0x5fef30(void* selfp)
{
    Comp* self = (Comp*)selfp;
    if (self->m_flag == 0)
        return 1;
    if (self->m_mesh == 0) {
        void* obj = self->m_object;
        void* q = ((void* (*)(void*))(*(void***)obj)[0x640 / 8])(obj);
        if (q == 0)
            return 0;
        std::string name = ((std::string const& (*)(void*))(*(void***)q)[0x138 / 8])(q);
        void* mesh = ((void* (*)(void*, std::string const&, int))(*(void***)collisionManager)[0x58 / 8])(collisionManager, name, 0);
        self->m_mesh = mesh;
        if (mesh == 0) {
            self->m_flag = 0;
            return 1;
        }
    }

    Mat4* m = (Mat4*)((void* (*)(void*))(*(void***)self)[0x250 / 8])(selfp);
    void* root = getRootParent_0x69a1e0(self->m_object);
    ObjectIgnorePredicator pred;
    ctor_0x68c390(&pred, 0x100, root);
    Vec3 const* mpos = (Vec3 const*)((char*)m + 0x30);
    std::vector<IObject*> objs;
    objectManager->getObjectsFromGrid(*mpos, 15.0f, objs, (ObjectFlagPredicator*)&pred);

    int cid = (int)CID_SoldierTemplate;
    for (int i = 0; i < (int)objs.size(); ++i) {
        void* inner = *(void**)((char*)objs[i] + 0x28);
        if (((int (*)(void*))(*(void***)inner)[0x20 / 8])(inner) != cid) {
            if (checkIfObjectIntersects_0x69b120(self->m_mesh, m, objs[i]) == 1)
                return 0;
        }
    }

    void* mesh2 = self->m_mesh;
    if (mesh2 != 0)
        ((void (*)(void*))(*(void***)mesh2)[0x28 / 8])(mesh2);
    self->m_mesh = 0;
    return 1;
}

} } }
