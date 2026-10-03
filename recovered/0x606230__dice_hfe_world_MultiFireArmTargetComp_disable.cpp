// FUNCTION: BF2 0x606230
// MultiFireArmTargetComp::disable 0x606230 — 3 XOR + tail-call
namespace dice { namespace hfe { namespace world {

typedef void (*VF_DISABLE2)(void*, int, int, int);

void disable(void* self) {
    VF_DISABLE2 f = (VF_DISABLE2)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x160));
    f(self, 0, 0, 0);
}

}}}
