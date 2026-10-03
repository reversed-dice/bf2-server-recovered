// FUNCTION: BF2 0x8a31c0
namespace dice { namespace hfe {
extern void* g_010c2800;
typedef unsigned char (*vfn_get)(void*);
typedef void (*vfn_set)(void*, unsigned char);
void* cb_8a31c0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* o = (*(void*(**)(void*))((char*)*(void**)g_010c2800 + 0x50))(g_010c2800);
        unsigned char v = (*(vfn_get*)((char*)*(void**)o + 0xe8))(o);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* o = (*(void*(**)(void*))((char*)*(void**)g_010c2800 + 0x50))(g_010c2800);
    (*(vfn_set*)((char*)*(void**)o + 0xe0))(o, v);
    return 0;
}
} }
