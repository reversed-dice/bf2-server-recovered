// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x68c5a0
namespace dice { namespace hfe { namespace world {

extern void* func_0x0069a1e0(void*);
extern bool func_0x0068c580(void*, void*);

bool predicate_0x68c5a0(void* self, void* obj)
{
    void* root = func_0x0069a1e0(obj);
    void* t = *(void**)((char*)root + 0x28);
    void* a = *(void**)((char*)root + 0x78);
    void* b = ((void* (*)(void*, unsigned int))(*(void***)t)[0x18])(
        t, *(unsigned int*)0x00c75e78);
    if (*(unsigned char*)((char*)self + 0x1c)) {
        if (a == 0) {
            void* ot = *(void**)((char*)obj + 0x28);
            if (((unsigned int (*)(void*))(*(void***)ot)[0x4])(ot) ==
                *(unsigned int*)0x00c7ce10)
                return true;
        }
    }
    if (!a || !b) {
        void* q = ((void* (*)(void*, unsigned int))(*(void***)root)[0x3])(
            root, *(unsigned int*)0x00c7ce9c);
        if (q == 0)
            return false;
    }
    if (a && b) {
        if (((unsigned char (*)(void*))(*(void***)a)[0x15])(a)) {
            if (!((unsigned char (*)(void*))(*(void***)b)[0x40])(b))
                return func_0x0068c580(self, obj);
        }
        float v = ((float (*)(void*, int, unsigned int))
            (*(void***)(*(void**)0x010c2800))[0x16])(
            *(void**)0x010c2800, *(int*)((char*)self + 0x18),
            ((unsigned int (*)(void*))(*(void***)a)[0x27])(a));
        if (v <= 0.0f)
            return false;
    }
    return func_0x0068c580(self, obj);
}

} } }
