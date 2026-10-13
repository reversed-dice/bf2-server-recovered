// FUNCTION: BF2 0x708ae0
// BF2_FLAGS: -fno-strict-aliasing
struct Vec3 { float x, y, z; };

extern "C" int dice_hfe_world_globalCheckCounter;
extern "C" void* dice_hfe_world_Bsp_m_argFaces;
extern "C" void* dice_hfe_world_Bsp_m_argPosition;
extern "C" void* dice_hfe_world_Bsp_m_argPositionAndDirection;
extern "C" float dice_hfe_world_Bsp_m_argRadius;
extern "C" Vec3 dice_hfe_world_Bsp_m_argDirection;
extern "C" int dice_hfe_world_Bsp_m_totalCheckedFaces;

extern "C" unsigned char BspV8_getCollidingFaces(void*, void*, void*, void*, float, unsigned char);
extern "C" void BspNode_getCollidingFaces(void*, unsigned char);

unsigned char fn_0x708ae0(void* self, long* faces, Vec3* a, Vec3* b, unsigned char flag) {
    void* v8 = *(void**)((char*)self + 0x78);
    if (v8 != 0) {
        return BspV8_getCollidingFaces(v8, faces, a, b, 0.0f, (unsigned char)(flag ^ 1));
    }
    dice_hfe_world_globalCheckCounter++;
    dice_hfe_world_Bsp_m_argFaces = faces;
    dice_hfe_world_Bsp_m_argPosition = a;
    dice_hfe_world_Bsp_m_argPositionAndDirection = b;
    Vec3 d;
    d.z = b->z - a->z;
    d.y = b->y - a->y;
    d.x = b->x - a->x;
    dice_hfe_world_Bsp_m_argDirection = d;
    BspNode_getCollidingFaces((char*)self + 8, flag);
    dice_hfe_world_Bsp_m_totalCheckedFaces += (int)((faces[1] - faces[0]) >> 3);
    return 1;
}
