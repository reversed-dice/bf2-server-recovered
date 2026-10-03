// FUNCTION: BF2 0x7dc0e0
namespace dice { namespace hfe { namespace io {
int getAvailableBytes_0x7dc0e0(void* self) {
    ((void (*)(void*))(*(void***)self)[0xb])(self);
    void* p = *(void**)((char*)self + 0x20);
    int n = ((int (*)(void*))(*(void***)p)[0x7])(p);
    return n + *(int*)((char*)self + 0x3c) - *(int*)((char*)self + 0x40);
}
} } }
