// FUNCTION: BF2 0x4bba00
namespace dice { namespace hfe {
extern long gameLogic_010b8c08;
extern long spawnManager_010c42c0;
extern void fn_0x68a3f0(long, int);
void dice_hfe_SpawnPoint_destroy_bool(long param_1, bool flag) {
    long gl = gameLogic_010b8c08;
    typedef char (*Fn1)(long);
    Fn1 f1 = (Fn1)(*(long*)(*(long*)gl + 0x450));
    char isPlaying = f1(gl);
    if (isPlaying == 0) {
        long sm = spawnManager_010c42c0;
        typedef void (*Fn2)(long, long);
        Fn2 f2 = (Fn2)(*(long*)(*(long*)sm + 0x38));
        f2(sm, param_1 + 0x218);
    }
    fn_0x68a3f0(param_1, flag & 0xff);
}
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_destroy_bool (0x4bba00)
