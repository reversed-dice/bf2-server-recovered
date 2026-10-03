// FUNCTION: BF2 0x7def20
// MeshParticleSystemTemplate::getGeometry 0x59e140 — deref + fallback
namespace dice { namespace hfe { namespace world {

typedef void* (*VF_GETGEOM)(void*);

extern void* get_geom0();

void* getGeometry(void* self) {
    void* a = *(void**)((char*)self + 0x40);
    if (a == 0)
        return get_geom0();
    VF_GETGEOM f = (VF_GETGEOM)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x90));
    return f(a);
}

}}}
