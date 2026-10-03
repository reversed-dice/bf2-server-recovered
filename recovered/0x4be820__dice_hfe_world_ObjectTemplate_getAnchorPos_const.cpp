// FUNCTION: BF2 0x4be820
namespace dice { namespace hfe { namespace world {

extern "C" void* dice_hfe_Vec3_getZero();
void* fn_0x4be820(void* sret, void* self) {
    void* z = dice_hfe_Vec3_getZero();
    int c = *(int*)((char*)z+8);
    int d = *(int*)((char*)z+4);
    int e = *(int*)z;
    *(int*)((char*)sret+4) = d;
    *(int*)((char*)sret+8) = c;
    *(int*)sret = e;
    return sret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplate_getAnchorPos_const (0x4be820)
