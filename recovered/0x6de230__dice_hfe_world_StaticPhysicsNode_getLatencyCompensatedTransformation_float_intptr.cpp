// FUNCTION: BF2 0x6de230
// StaticPhysicsNode::getLatencyCompensatedTransformation 0x6de230 — virtual
namespace dice { namespace hfe { namespace world {

typedef void (*VF_LCT)(void*, float, int*);

void getLatencyCompensatedTransformation(void* self, float t, int* out) {
    VF_LCT f = (VF_LCT)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x78));
    f(self, t, out);
}

}}}
