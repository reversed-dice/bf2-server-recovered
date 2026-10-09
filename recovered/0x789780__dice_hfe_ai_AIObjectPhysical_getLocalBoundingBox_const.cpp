// FUNCTION: BF2 0x789780
// dice::hfe::ai::AIObjectPhysical::getLocalBoundingBox() const
// Mirror of the recovered getRadius 0x789320, with abort() on the failing check
// and a tail forward to the bounds object slot +0xb0.
typedef void* (*FnGeom_789780)(void*);
typedef char  (*FnHas_789780)(void*, int);
typedef void* (*FnBox_789780)(void*, int);

extern "C" void abort();

extern "C" void* getLocalBoundingBox_789780(char* self)
{
    void* obj = *(void**)(self + 8);
    void* geom = (*(FnGeom_789780*)(*(char**)obj + 0x40))(obj);
    if (!(*(FnHas_789780*)(*(char**)geom + 0x198))(geom, 1)) abort();

    void* obj2 = *(void**)(self + 8);
    char* geom2 = (char*)(*(FnGeom_789780*)(*(char**)obj2 + 0x40))(obj2);
    void* bounds = *(void**)(geom2 + 0x80);
    return (*(FnBox_789780*)(*(char**)bounds + 0xb0))(bounds, 1);
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectPhysical_getLocalBoundingBox_const (0x789780)
