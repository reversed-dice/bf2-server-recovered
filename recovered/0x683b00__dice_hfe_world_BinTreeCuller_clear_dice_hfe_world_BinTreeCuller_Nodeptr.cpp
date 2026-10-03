// FUNCTION: BF2 0x683b00
namespace dice { namespace hfe { namespace world {
extern void fn_4085b8(void* p);
void cb_683b00(void* self, void* node) {
    void* l = *(void**)((char*)node + 0x10);
    if (l != 0)
        cb_683b00(self, l);
    void* r = *(void**)((char*)node + 0x18);
    cb_683b00(self, r);
    fn_4085b8(node);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_BinTreeCuller_clear_dice_hfe_world_BinTreeCuller (0x683b00)
