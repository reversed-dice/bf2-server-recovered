// FUNCTION: BF2 0x5430a0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec3 {
    Vec3() : x(0), y(0), z(0) {}
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
    float x, y, z;
};

namespace world {

extern unsigned int IID_IResponsePhysics;

class IPhysBig {
public:
    virtual void v0(int);
    virtual void v1(int);
    virtual void v2(int);
    virtual void v3(int);
    virtual void v4(int);
    virtual void v5(int);
    virtual void v6(int);
    virtual void v7(int);
    virtual void v8(int);
    virtual void v9(int);
    virtual void v10(int);
    virtual void v11(int);
    virtual void v12(int);
    virtual void v13(int);
    virtual void v14(int);
    virtual void v15(int);
    virtual void v16(int);
    virtual void v17(int);
    virtual void v18(int);
    virtual void v19(int);
    virtual void v20(int);
    virtual void v21(int);
    virtual void v22(int);
    virtual void v23(int);
    virtual void v24(int);
    virtual void v25(int);
    virtual void v26(int);
    virtual void v27(int);
    virtual void v28(int);
    virtual void v29(int);
    virtual void v30(int);
    virtual void v31(int);
    virtual void v32(int);
    virtual void v33(int);
    virtual void v34(int);
    virtual void v35(int);
    virtual void v36(int);
    virtual void v37(int);
    virtual void v38(int);
    virtual void v39(int);
    virtual void v40(int);
    virtual void v41(int);
    virtual void v42(int);
    virtual void v43(int);
    virtual void v44(int);
    virtual void v45(int);
    virtual void v46(int);
    virtual void v47(int);
    virtual void v48(int);
    virtual void v49(int);
    virtual void v50(int);
    virtual void v51(int);
    virtual void v52(int);
    virtual void v53(int);
    virtual void v54(int);
    virtual void v55(int);
    virtual void v56(int);
    virtual void v57(int);
    virtual void v58(int);
    virtual void v59(int);
    virtual void v60(int);
    virtual void v61(int);
    virtual void v62(int);
    virtual void v63(int);
    virtual void v64(int);
};

class IResponsePhysics {
public:
    virtual void v0(int);
    virtual void v1(int);
    virtual void v2(int);
    virtual void v3(int);
    virtual void v4(int);
    virtual void v5(int);
    virtual void v6(int);
    virtual void v7(int);
    virtual void v8(int);
    virtual void v9(int);
    virtual void v10(int);
    virtual void v11(int);
    virtual void v12(int);
    virtual void v13(int);
    virtual void v14(int);
    virtual void v15(int);
    virtual void v16(int);
    virtual void v17(int);
    virtual void v18(int);
    virtual void v19(int);
    virtual void v20(int);
    virtual void v21(int);
    virtual void v22(int);
    virtual void v23(int);
    virtual void v24(int);
    virtual void v25(int);
    virtual void v26(int);
    virtual void v27(int);
    virtual void v28(int);
    virtual void v29(int);
    virtual void v30(int);
    virtual void v31(int);
    virtual void v32(int);
    virtual void v33(int);
    virtual void v34(Vec3&);
    virtual void v35(int);
    virtual void v36(int);
    virtual void v37(int);
    virtual void v38(int);
    virtual void v39(int);
    virtual void v40(int);
    virtual void v41(int);
    virtual void v42(int);
    virtual void v43(int);
    virtual void v44(int);
    virtual void v45(int);
    virtual void v46(int);
    virtual void v47(int);
    virtual void v48(int);
    virtual void v49(int);
    virtual void v50(int);
    virtual void v51(int);
    virtual void v52(int);
    virtual void v53(int);
    virtual void v54(int);
    virtual void v55(int);
    virtual void v56(int);
    virtual void v57(int);
    virtual void v58(int);
    virtual void v59(int);
    virtual void v60(int);
    virtual void v61(int);
    virtual void v62(int);
    virtual void v63(int);
    virtual void v64(int);
};

class IObject {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void v3(int);
    virtual void v4(int);
    virtual void v5(int);
    virtual void v6(int);
    virtual void v7(int);
    virtual void v8(int);
    virtual void v9(int);
    virtual void v10(int);
    virtual void v11(int);
    virtual void v12(int);
    virtual void v13(int);
    virtual void v14(int);
    virtual void v15(int);
    virtual void v16(int);
    virtual void v17(int);
    virtual void v18(int);
    virtual void v19(int);
    virtual void v20(int);
    virtual void v21(int);
    virtual void v22(int);
    virtual void* queryInterface(unsigned int, unsigned int);
    virtual void v24(int);
    virtual void v25(int);
    virtual void v26(int);
    virtual void v27(int);
    virtual void v28(int);
    virtual void v29(int);
    virtual void v30(int);
    virtual void v31(int);
    virtual void v32(int);
    virtual void v33(int);
    virtual void v34(int);
    virtual void v35(int);
    virtual void v36(int);
    virtual void v37(int);
    virtual void v38(int);
    virtual void v39(int);
    virtual void v40(int);
    virtual void v41(int);
    virtual void v42(int);
    virtual void v43(int);
    virtual void v44(int);
    virtual void v45(int);
    virtual void v46(int);
    virtual void v47(int);
    virtual void v48(int);
    virtual void v49(int);
    virtual void v50(int);
    virtual void v51(int);
    virtual void v52(int);
    virtual void v53(int);
    virtual void v54(int);
    virtual void v55(int);
    virtual void v56(int);
    virtual void v57(int);
    virtual void v58(int);
    virtual void v59(int);
    virtual IObject* getFirstChild();
    virtual void v61(int);
    virtual void v62(int);
    virtual void v63(int);
    virtual void v64(int);
    char _pad0x18[0x50];
    IObject* m_next;
    char _pad0x60[0x28];
    void* m_0x88;
};

void reenablePhysicsOnSoldier(IObject* o) {
    IPhysBig* p = (IPhysBig*)o->m_0x88;
    if (p != 0) {
        p->v64(0);
    }
    IResponsePhysics* r = (IResponsePhysics*)o->queryInterface(IID_IResponsePhysics, IID_IResponsePhysics);
    if (r != 0) {
        r->v20(3);
        void (*f)(void*, Vec3&) = *(void (**)(void*, Vec3&))(*(char**)r + 0x110);
        Vec3 v;
        f(r, v);
    }
    for (IObject* c = o->getFirstChild(); c != 0; c = c->m_next) {
        reenablePhysicsOnSoldier(c);
    }
}

} } }
