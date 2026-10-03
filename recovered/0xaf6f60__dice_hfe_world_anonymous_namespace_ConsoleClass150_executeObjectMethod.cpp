// FUNCTION: BF2 0xaf6f60
// 0xaf6f60 - ConsoleClass150_executeObjectMethod (11 ins, 0 calls)
// Simple: if sel==0, set byte, load global, vtable call
namespace dice { namespace hfe { namespace world {
extern long dice_hfe_game_010a4328;
long dice_hfe_world_anonymous_namespace_ConsoleClass150_executeObjectMethod(long param_1) {
    if (*(int*)(param_1 + 0x30) != 0) return 0;
    *(char*)(param_1 + 0x108) = 0;
    long obj = dice_hfe_game_010a4328;
    typedef void (*Fn)(long);
    Fn f = (Fn)(*(long*)(*(long*)obj + 0x148));
    f(obj);
    return 0;
}
} } }

// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass150_executeObjectMethod (0xaf6f60)
