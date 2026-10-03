// FUNCTION: BF2 0x5f3540
// ExplosivesFireComp::projectileWasReset 0x5f3540 — flag + tail-call
namespace dice { namespace hfe { namespace world {

typedef void (*VF_RESET)(void*);

void projectileWasReset(void* self, void* proj) {
    if (*(unsigned char*)((char*)self + 0x1d0) != 0)
        return;
    VF_RESET f = (VF_RESET)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x1e0));
    f(self);
}

}}}
