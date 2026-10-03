// FUNCTION: BF2 0x6b4300
namespace dice { namespace hfe {
int fn_0x6b4300(void* self) {
    int v = *(int*)((char*)self + 0x20) - 1;
    *(int*)((char*)self + 0x20) = v;
    if (v == 0) {
        ((void (*)(void*))(*(void***)self)[1])(self);
    }
    return v;
}
} }
