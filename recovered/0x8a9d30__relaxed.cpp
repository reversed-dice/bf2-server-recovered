// FUNCTION: BF2 0x8a9d30
namespace dice { namespace hfe {
extern void* fn_69de30(unsigned id);

long dice_hfe_anonymous_namespace_ConsoleClass67_executeObjectMethod(long param_1) {
    if (*(int*)(param_1 + 0x30) != 1) return 0;
    float v = **(float**)(param_1 + 0x38);
    *(char*)(param_1 + 0x108) = 0;
    void* obj = fn_69de30(*(unsigned*)(0x00c76048));
    typedef void (*Fn)(void*, float);
    Fn f = (Fn)(*(void***)obj)[0x250 / 8];
    f(obj, v);
    return 0;
}
} }
