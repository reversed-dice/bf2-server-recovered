// FUNCTION: BF2 0x819050
// BF2_FLAGS: -fno-strict-aliasing
typedef unsigned int gsi_u32;

extern "C" void* gsimalloc(gsi_u32 size);
extern "C" void  gsifree(void* p);
extern "C" void* ArrayNew(int elemSize, int a2, void* freeFn);

void ghiPostDataFree(void*);

void* ghiNewPost()
{
    void* p = gsimalloc(0x20);
    if (p == 0)
        return 0;
    *(void**)((char*)p + 0x18) = 0;
    *(void**)((char*)p + 0x00) = 0;
    *(void**)((char*)p + 0x08) = 0;
    *(void**)((char*)p + 0x10) = 0;
    *(int*)((char*)p + 0x1c) = 1;
    *(void**)((char*)p + 0x00) = ArrayNew(0x30, 0, (void*)&ghiPostDataFree);
    if (*(void**)((char*)p + 0x00) == 0) {
        gsifree(p);
        p = 0;
    }
    return p;
}
