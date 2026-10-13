// FUNCTION: BF2 0x5f5110
namespace dice { namespace hfe { namespace world {
typedef void* (*FnV)(void*);
typedef int (*FnI)(void*);

bool FireComp_requestFire(void* p_raw, bool a, bool b) {
    char* p = (char*)p_raw;
    void* o = ((FnV*)(*(void**)*(void**)(p + 0x18)))[0x380 / 8](*(void**)(p + 0x18));
    int m = *(int*)((char*)*(void**)(p + 0xc0) + 0x6c);
    if (m != 0x40 && ((FnI*)(*(void**)o))[0x410 / 8](o) == m) {
        return false;
    }
    if (*(int*)(p + 0x40) == 2) {
        *(char*)(p + 0x94) = (char)(a ^ 1);
        return true;
    }
    if (a) {
        return false;
    }
    *(char*)(p + 0x94) = 1;
    return true;
}
} } }
