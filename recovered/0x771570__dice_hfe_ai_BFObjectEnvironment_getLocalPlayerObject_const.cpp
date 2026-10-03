// FUNCTION: BF2 0x771570
namespace dice { namespace hfe { namespace ai {
typedef void* (*vfn_60)(void*);
typedef void* (*vfn_90)(void*);
void* cb_771570() {
    void* g = *(void**)0x0112ee38;
    void* q = (*(vfn_60*)((char*)*(void**)g + 0x60))(g);
    if (q != 0) {
        void* r = (*(vfn_90*)((char*)*(void**)q + 0x90))(q);
        if (r != 0)
            return *(void**)((char*)r + 0x68);
    }
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFObjectEnvironment_getLocalPlayerObject_const (0x771570)
