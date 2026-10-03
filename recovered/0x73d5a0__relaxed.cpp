// FUNCTION: BF2 0x73d5a0
extern "C" void EventManager_ctor_73d650(void* self)
{
    *(void**)((char*)self + 0) = (void*)0xb985d0;
    *(int*)((char*)self + 8) = 1;
    *(int*)((char*)self + 0xc) = 0;
    *(int*)((char*)self + 0x10) = 0;
    *(void**)((char*)self + 0x18) = 0;
    *(void**)((char*)self + 0x20) = 0;
    *(void**)((char*)self + 0xa8) = 0;
    *(void**)((char*)self + 0x88) = (void*)0xb2d8b0;
    *(int*)((char*)self + 0xc0) = 1;
    char* p = (char*)self + 0xc8;
    for (long i = 0xb; i != -1; i--) {
        char* rax = p + 8;
        *(void**)(p + 8) = 0;
        *(void**)(p + 0x28) = 0;
        *(int*)(p + 8) = 0;
        *(void**)(p + 0x10) = 0;
        *(void**)(p + 0x18) = rax;
        *(void**)(p + 0x20) = rax;
        p += 0x30;
    }
    char* q = (char*)self;
    int j = 0;
    do {
        j++;
        *(void**)(q + 0x28) = 0;
        q += 8;
    } while (j != 0xc);
}
