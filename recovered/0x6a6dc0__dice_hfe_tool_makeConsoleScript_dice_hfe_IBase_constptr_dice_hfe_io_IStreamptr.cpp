// FUNCTION: BF2 0x6a6dc0
namespace dice { namespace hfe { namespace tool {
typedef void* (*vfn_18)(void*, int);
typedef bool (*vfn_20)(void*, void*);
bool cb_6a6dc0(void* self, void* arg) {
    if (self == 0 || arg == 0)
        return 0;
    void* q = (*(vfn_18*)((char*)*(void**)self + 0x18))(self, *(int*)0x00bc19c4);
    if (q != 0)
        return (*(vfn_20*)((char*)*(void**)q + 0x20))(q, arg);
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_tool_makeConsoleScript_dice_hfe_IBase_constptr_dice_hfe_IBase_constptr (0x6a6dc0)
