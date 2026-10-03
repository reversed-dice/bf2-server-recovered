typedef int (*vfnD8)(void*);
typedef void* (*vfn18)(void*);
typedef void* (*vfn98)(void*);
typedef void (*vfn48)(void*, void*, void*, int, float);

extern "C" void suicide_770be0(void* self, void* player)
{
    vfn48 v = ((vfn48)(*(void***)self)[0x48/8]);
    int r = ((vfnD8)(*(void***)player)[0xd8/8])(player);
    void* m = ((vfn18)(*(void***)player)[0x18/8])(player);
    void* o = ((vfn98)(*(void***)player)[0x98/8])(player);
    v(self, o, m, r, *(float*)0xba1a58);
}
