// FUNCTION: BF2 0xaa7170
namespace dice { namespace hfe {
extern void* g_0112ee48;
typedef unsigned char (*vfn_get)(void*);
typedef void (*vfn_set)(void*, unsigned char);
void* cb_aa7170(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* o = (*(void*(**)(void*))((char*)*(void**)g_0112ee48 + 0x120))(g_0112ee48);
        unsigned char v = (*(vfn_get*)((char*)*(void**)o + 0x288))(o);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* o = (*(void*(**)(void*))((char*)*(void**)g_0112ee48 + 0x120))(g_0112ee48);
    (*(vfn_set*)((char*)*(void**)o + 0x290))(o, v);
    return 0;
}
} }
