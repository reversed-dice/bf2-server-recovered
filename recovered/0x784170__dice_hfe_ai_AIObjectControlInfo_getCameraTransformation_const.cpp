// FUNCTION: BF2 0x784170
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, unsigned int);
typedef void* (*vfn3)(void*);

extern "C" unsigned int g_iid_pco_784170;
extern "C" unsigned int g_iid_obj_784170;

extern "C" void* getCameraTransformation_784170(void* self)
{
    void* p = ((vfn1)(*(void***)*(void**)((char*)self + 8))[0x40/8])(*(void**)((char*)self + 8));
    p = ((vfn2)(*(void***)p)[0x18/8])(p, g_iid_pco_784170);
    p = ((vfn3)(*(void***)p)[0x88/8])(p);
    if (p) {
        p = ((vfn2)(*(void***)p)[0x18/8])(p, g_iid_obj_784170);
        return ((vfn3)(*(void***)p)[0x108/8])(p);
    }
    return ((vfn1)(*(void***)*(void**)((char*)self + 8))[0x1b8/8])(*(void**)((char*)self + 8));
}
