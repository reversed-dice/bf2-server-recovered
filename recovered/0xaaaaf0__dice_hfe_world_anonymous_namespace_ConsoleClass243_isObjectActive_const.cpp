// FUNCTION: BF2 0xaaaaf0
namespace dice { namespace hfe {
extern void* g_0112ee48;
typedef void* (*vfn_120)(void*);
typedef int (*vfn_20)(void*);
bool cb_aaaaf0(void* p) {
    void* r = 0;
    void* q = (*(vfn_120*)((char*)*(void**)g_0112ee48 + 0x120))(g_0112ee48);
    if (q != 0) {
        void* sub = *(void**)((char*)q + 0x28);
        if ((*(vfn_20*)((char*)*(void**)sub + 0x20))(sub) == *(int*)0x00c7d098)
            r = q;
    }
    return r != 0;
}
} }
