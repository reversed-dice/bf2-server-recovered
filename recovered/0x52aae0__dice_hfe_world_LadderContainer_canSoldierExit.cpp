// FUNCTION: BF2 0x52aae0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
struct Vec3 { float x,y,z; void set(float a,float b,float c){x=a;y=b;z=c;} Vec3& operator=(const Vec3& o){set(o.x,o.y,o.z);return *this;} Vec3(){} Vec3(const Vec3& o){set(o.x,o.y,o.z);} };
struct Vec4 { float x,y,z,w; };
struct Mat4 { Vec4 r[4]; };
void setRotationZXY(Mat4& m, float a, float b, float c);
namespace world {
struct Ladder;
extern int IID_ISoldier;
Vec3 _getExitPosition(Ladder* l, Vec3 const& pos, int type);
class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual IObject* queryInterface(int iid);
    virtual bool canExit(int a, Mat4* m, int b);
};
class LadderContainer { public: bool canSoldierExit(); };
} } }

bool dice::hfe::world::LadderContainer::canSoldierExit()
{
    if (*(void**)((char*)this + 0x270) == 0) return false;
    if (*(void**)(*(char**)((char*)this + 0x270) + 8) == 0) return false;
    Mat4 m;
    {
        Vec4* pp = m.r;
        long i = 3;
        do {
            i--;
            pp->x = 0.0f; pp->y = 0.0f; pp->z = 0.0f; pp->w = 0.0f;
            pp++;
        } while (i != -1);
    }
    m.r[3].w = 1.0f;
    m.r[2].z = 1.0f;
    m.r[1].y = 1.0f;
    m.r[0].x = 1.0f;
    Vec3 const* v = (Vec3 const*)((void* (*)(void*))((*(void***)this)[0x5a0 / 8]))(this);
    setRotationZXY(m, -v->z, -v->y, -v->x);
    Vec3 out = _getExitPosition(*(Ladder**)((char*)this + 0x600),
                                *(Vec3 const*)((void* (*)(void*))((*(void***)this)[0xd8 / 8]))(this),
                                *(int*)((char*)this + 0x61c));
    IObject* soldier = 0;
    Vec3* p = (Vec3*)&m.r[3];
    p->x = out.x; p->y = out.y; p->z = out.z;
    if (*(void**)((char*)this + 0x270) != 0)
        soldier = (IObject*)*(void**)(*(char**)((char*)this + 0x270) + 8);
    soldier = soldier->queryInterface(IID_ISoldier);
    if (soldier == 0) return false;
    if (soldier->canExit(0, &m, 1)) return true;
    return false;
}
