// FUNCTION: BF2 0x62fec0
namespace dice { namespace hfe { namespace world {
extern void fn_586da0(void* self);
typedef void (*vfn_80)(void*, int);
extern void fn_6dcea0(void* self, int a, void* b);
void cb_62fec0(void* self) {
    fn_586da0(self);
    void* q = *(void**)((char*)self + 0xe0);
    if (q != 0)
        (*(vfn_80*)((char*)*(void**)q + 0x80))(q, 0);
    fn_6dcea0((char*)self + 0x320, 0, self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EngineBase_enableCachedObject (0x62fec0)
