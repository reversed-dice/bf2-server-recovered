// FUNCTION: BF2 0x609e80
namespace dice { namespace hfe { namespace world {
class Obj {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(long a);
    virtual void v13();
    virtual void v14(long a);
};
class AnimationComp {
public:
    void updateOnZooming(int a);
};
void AnimationComp::updateOnZooming(int a) {
    if (*(char*)(*(char**)((char*)this + 0x30) + 0x10) != 0) {
        Obj* o = *(Obj**)((char*)this + 0x28);
        if (o != 0) {
            if (a != 0) return o->v12(4);
            return o->v14(4);
        }
    }
}
} } }
