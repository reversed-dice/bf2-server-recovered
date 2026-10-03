// FUNCTION: BF2 0x52dfa0
namespace dice { namespace hfe { namespace world {
extern void fn_574860(void* self);
typedef void* (*vfn_c0)(void*, int, int);
void* cb_52dfa0(void* self) {
    fn_574860(self);
    return (*(vfn_c0*)((char*)*(void**)self + 0xc0))(self, 0x1800, 0x2);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_MaskObject_init (0x52dfa0)
