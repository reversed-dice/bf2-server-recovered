// FUNCTION: BF2 0x55f270
namespace dice { namespace hfe { namespace world {
extern long gameLogic_010b8c08;
extern void fn_0x589360(long, int);
void dice_hfe_world_TargetObject_destroy_bool(long self, bool flag) {
    if (*(char*)(self + 0x244) != 0) {
        *(char*)(self + 0x244) = 0;
        long gl = gameLogic_010b8c08;
        typedef void (*Fn)(long, long);
        Fn f = (Fn)(*(long*)(*(long*)gl + 0x368));
        f(gl, self);
    }
    fn_0x589360(self, (int)(flag & 0xff));
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetObject_destroy_bool (0x55f270)
