// FUNCTION: BF2 0x6f9330
struct Heightmap {
    void** vtable;
    char _pad[0x18];
    int intX;  // +0x20
    int intY;  // +0x24
};

typedef void (*DispatchFunc)(float, float, float, float, void*);

extern "C" void dice_hfe_world_Heightmap_getMinMaxHeightInWorldCoords_float_float_float_float_floatref_floatref(
    float a, float b, float c, float d, void* self) {
    Heightmap* h = (Heightmap*)self;
    // Load intY first to match target's register allocation
    float fY = (float)h->intY;
    float fX = (float)h->intX;
    float r0 = a - fX;
    float r1 = b - fY;
    float r2 = c - fX;
    float r3 = d - fY;
    DispatchFunc fn = (DispatchFunc)h->vtable[0x1a0 / 8];
    fn(r0, r1, r2, r3, self);
}
