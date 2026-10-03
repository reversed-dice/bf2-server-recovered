// FUNCTION: BF2 0x789320
// dice::hfe::ai::AIObjectPhysical::getRadius() const -- 0x789320
//
// Returns 0 when the object's geometry (vtable +0x40) reports no bounds for
// level 1, otherwise forwards to the bounds object at +0x80.

typedef void* (*FnGeom_789320)(void*);
typedef char  (*FnHas_789320)(void*, int);
typedef float (*FnRadius_789320)(void*, int);

extern "C" float getRadius_789320(char* self)
{
    void* obj = *(void**)(self + 8);
    void* geom = (*(FnGeom_789320*)(*(char**)obj + 0x40))(obj);
    if (!(*(FnHas_789320*)(*(char**)geom + 0x198))(geom, 1)) return 0.0f;

    void* obj2 = *(void**)(self + 8);
    char* geom2 = (char*)(*(FnGeom_789320*)(*(char**)obj2 + 0x40))(obj2);
    void* bounds = *(void**)(geom2 + 0x80);
    return (*(FnRadius_789320*)(*(char**)bounds + 0xa8))(bounds, 1);
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectPhysical_getRadius_const (0x789320)
