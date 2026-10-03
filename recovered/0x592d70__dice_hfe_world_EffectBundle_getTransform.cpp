// FUNCTION: BF2 0x592d70
// EffectBundle::getTransform 0x592d70 — virtual
namespace dice { namespace hfe { namespace world {

typedef void* (*VF_GETTRANS)(void*);

void* getTransform(void* self) {
    VF_GETTRANS f = (VF_GETTRANS)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x120));
    return f(self);
}

}}}
