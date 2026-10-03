// FUNCTION: BF2 0x7dbe20
namespace dice { namespace hfe { namespace io {
int getPosition_0x7dbe20(void* self) {
    ((void (*)(void*))(*(void***)self)[0xb])(self);
    void* p = *(void**)((char*)self + 0x28);
    if (!p)
        return 0;
    int n = ((int (*)(void*))(*(void***)p)[0xd])(p);
    return n - *(int*)((char*)self + 0x3c) + *(int*)((char*)self + 0x40);
}
} } }
