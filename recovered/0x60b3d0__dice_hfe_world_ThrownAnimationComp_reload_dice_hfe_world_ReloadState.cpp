// FUNCTION: BF2 0x60b3d0
namespace dice { namespace hfe { namespace world {
class Obj {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(int a);
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(int a);
};
class ThrownAnimationComp {
public:
    void reload(int state);
};
void ThrownAnimationComp::reload(int state) {
    Obj* o = *(Obj**)((char*)this + 0x28);
    if (o != 0) {
        if (state != 0) {
            o->v6(0);
            Obj* o2 = *(Obj**)((char*)this + 0x28);
            o2->v13(2);
            *(unsigned char*)((char*)this + 0x3c) = 0;
        }
    }
}
} } }
