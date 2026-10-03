// FUNCTION: BF2 0x683f50
namespace dice { namespace hfe { namespace world {
extern void fn_683ea0(void* self);
extern void fn_4085b8(void* p);
void cb_683f50(void* self, void* obj) {
    if (*(char*)((char*)self + 0xe60) != 0)
        return;
    if (obj != 0) {
        fn_683ea0(self);
        fn_4085b8(obj);
    }
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_BinTreeCuller_destroyObject_dice_hfe_world_IObject (0x683f50)
