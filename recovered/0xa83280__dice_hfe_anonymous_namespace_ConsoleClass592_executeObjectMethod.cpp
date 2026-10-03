// FUNCTION: BF2 0xa83280
// 0xa83280 - ConsoleClass592_executeObjectMethod (11 ins, 0 calls)
namespace dice { namespace hfe {
extern long dice_hfe_game_010c5420;
long dice_hfe_anonymous_namespace_ConsoleClass592_executeObjectMethod(long param_1) {
    if (*(int*)(param_1 + 0x30) != 0) return 0;
    *(char*)(param_1 + 0x108) = 0;
    long obj = dice_hfe_game_010c5420;
    typedef void (*Fn)(long);
    Fn f = (Fn)(*(long*)(*(long*)obj + 0x188));
    f(obj);
    return 0;
}
} }

// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass592_executeObjectMethod (0xa83280)
