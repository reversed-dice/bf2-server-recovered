// FUNCTION: BF2 0x6bb160
namespace dice { namespace anim {

extern "C" void rbtree_erase_ragdoll(void*, void*);
void fn_0x6bb160(void* self, void* p) {
    rbtree_erase_ragdoll((char*)self+0x128, &p);
}

} }
// REVERSED_FUNCTION: dice_anim_RagDollTemplate_removeInstance_dice_anim_RagDollptr (0x6bb160)
