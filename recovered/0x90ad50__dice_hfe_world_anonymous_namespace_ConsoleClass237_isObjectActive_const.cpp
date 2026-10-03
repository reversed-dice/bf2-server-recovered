// FUNCTION: BF2 0x90ad50
namespace dice { namespace hfe {
extern void* g_0112ee48;
typedef void* (*vfn_120)(void*);
typedef int (*vfn_20)(void*);
bool cb_90ad50(void* p) {
    void* r = 0;
    void* q = (*(vfn_120*)((char*)*(void**)g_0112ee48 + 0x120))(g_0112ee48);
    if (q != 0) {
        void* sub = *(void**)((char*)q + 0x28);
        if (sub != 0) {
            if ((*(vfn_20*)((char*)*(void**)sub + 0x20))(sub) == *(int*)0x00c7cf68)
                r = q;
        }
    }
    return r != 0;
}
} }
