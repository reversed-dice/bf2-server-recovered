// FUNCTION: BF2 0x476f90
extern "C" void map_insert_uint_iobject(void*, void*);
namespace dice { namespace hfe {
void fn_0x476f90(void* self, void* obj) {
    struct { long pad0[2]; int field; int pad1; void* obj; long pad2[2]; } s;
    s.field = *(int*)((char*)obj+0x20);
    s.obj = obj;
    map_insert_uint_iobject((char*)self+0x200, &s.field);
}
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_addPco_dice_hfe_world_IObjectptr (0x476f90)
