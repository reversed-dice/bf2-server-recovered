// FUNCTION: BF2 0x608510
namespace dice { namespace hfe { namespace world {
int getTargetType_0x608510(void* self) {
    void* p = *(void**)((char*)self + 0x18);
    void* r = ((void* (*)(void*))(*(void***)p)[0xc8])(p);
    if (!r)
        return 0;
    void* t = ((void* (*)(void*, int))(*(void***)r)[0x18])(r, *(int*)0x00c7cf98);
    if (!t)
        return 0;
    return *(int*)((char*)t + 0x1c);
}
} } }
