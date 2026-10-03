// FUNCTION: BF2 0x7715b0
namespace dice { namespace hfe { namespace ai {
typedef void* (*vfn_48)(void*);
void* cb_7715b0() {
    void* g = *(void**)0x0112ee48;
    void* q = (*(vfn_48*)((char*)*(void**)g + 0x48))(g);
    if (q != 0)
        return *(void**)((char*)q + 0x68);
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFObjectEnvironment_getObjectFromName_std_string_constref (0x7715b0)
