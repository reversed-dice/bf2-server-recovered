// FUNCTION: BF2 0xab5880
namespace dice { namespace hfe {
extern void* g_0112ee48;
typedef void* (*vfn_120)(void*);
typedef int (*vfn_20)(void*);
bool cb_ab5880(void* p) {
    void* r = 0;
    void* q = (*(vfn_120*)((char*)*(void**)g_0112ee48 + 0x120))(g_0112ee48);
    if (q != 0) {
        if ((*(vfn_20*)((char*)*(void**)q + 0x20))(q) == *(int*)0x00c7ce68)
            r = q;
    }
    return r != 0;
}
} }
