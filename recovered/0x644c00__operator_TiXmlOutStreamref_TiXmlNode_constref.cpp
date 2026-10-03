// FUNCTION: BF2 0x644c00
namespace dice { namespace hfe {
struct V2 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void* v0x20(void* a);
};
void* f_0x644c00(void* self, V2* other) {
    other->v0x20(self);
    return self;
}
} }
