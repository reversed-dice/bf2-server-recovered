// FUNCTION: BF2 0x5378c0
extern "C" void rbtree_insert_int(void*, void*);

namespace dice { namespace hfe { namespace world {

void fn_0x5378c0(void* self, int type) {
    struct { long pad0[3]; int pad1; int local; long pad2[2]; } s;
    s.local = type;
    rbtree_insert_int((char*)self+0x370, &s.local);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_addTargetObjectTypeToWatch_int (0x5378c0)
