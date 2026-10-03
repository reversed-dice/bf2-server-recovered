// FUNCTION: BF2 0xabb540
// 0xabb540 - ConsoleClass27_executeObjectMethod (11 ins, 0 calls)
namespace dice { namespace hfe { namespace world {
extern long dice_hfe_game_0112ee48;
long dice_hfe_world_anonymous_namespace_ConsoleClass27_executeObjectMethod(long param_1) {
    if (*(int*)(param_1 + 0x30) != 0) return 0;
    *(char*)(param_1 + 0x108) = 0;
    long obj = dice_hfe_game_0112ee48;
    typedef void (*Fn)(long);
    Fn f = (Fn)(*(long*)(*(long*)obj + 0x138));
    f(obj);
    return 0;
}
} } }

// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass27_executeObjectMethod (0xabb540)
