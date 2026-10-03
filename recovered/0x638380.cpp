extern "C" int* g_flag;
typedef void (*vfn3)(void*, int, int);

extern "C" void setIsAwake_638380(void* self)
{
    if (*(int*)g_flag == 1) {
        return;
    }
    if (*(int*)((char*)self + 0x74) <= 0) {
        void* t = *(void**)((char*)self + 0x18);
        ((vfn3)(*(void***)t)[0xc0/8])(t, 0x800, 0);
    }
    *(int*)((char*)self + 0x74) = *(int*)((char*)self + 0x70);
}
