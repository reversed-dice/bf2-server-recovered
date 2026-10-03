// FUNCTION: BF2 0x6f93c0
struct Heightmap {
    void** vtable;
    char _pad[0x18];
    int intX;  // +0x20
    int intY;  // +0x24
};

typedef void (*DispatchFunc)(float, float, void*);

extern "C" void dice_hfe_world_Heightmap_getHeightAndNormalInWorldCoords_float_float_dice_hfe_Vec3ref_unsigned_charref_const(
    float x, float y, void* self) {
    Heightmap* h = (Heightmap*)self;
    float localX = x - (float)h->intX;
    float localY = y - (float)h->intY;
    DispatchFunc fn = (DispatchFunc)h->vtable[0x168 / 8];
    fn(localX, localY, self);
}
