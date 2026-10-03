// FUNCTION: BF2 0x6a6200
namespace dice { namespace hfe { namespace world {
extern "C" void rbtree_insert_iobject(void*, void*);
void fn_0x6a6200(void* self, void* obj) {
    struct { long pad0[3]; void* local; long pad1[1]; } s;
    s.local = obj;
    rbtree_insert_iobject((char*)self+0x10, &s.local);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Sector_addObject_dice_hfe_world_IObjectptr (0x6a6200)
