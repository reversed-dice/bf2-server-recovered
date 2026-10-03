// FUNCTION: BF2 0x718200
namespace dice { namespace hfe { namespace world {
struct P16_718200 { char pad[48]; };
long fn_0x718200(void* self) {
    void* vecptr = *(void**)((char*)self+0x18);
    P16_718200* b = *(P16_718200**)((char*)vecptr+8);
    P16_718200* e = *(P16_718200**)((char*)vecptr+0x10);
    return e - b;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionMesh_getGeometryCount_const (0x718200)
