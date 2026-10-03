extern "C" void fn_646380(void*, int);
extern "C" void fn_6445f0(void*, const char*);

extern "C" void TD_ctor_646bc0(void* self, void* arg)
{
    fn_646380(self, 0);
    *(void**)self = (void*)0xb88a70;
    void* s = (char*)self + 0x60;
    *(void**)s = 0;
    *(int*)((char*)s + 0x8) = 0;
    *(int*)((char*)s + 0xc) = 0;
    *(int*)((char*)self + 0x78) = -1;
    *(int*)((char*)self + 0x74) = -1;
    *(int*)((char*)self + 0x70) = 4;
    *(char*)((char*)self + 0x58) = 0;
    *(int*)((char*)self + 0x5c) = 0;
    fn_6445f0(s, "0xbb25f1");
    *(int*)((char*)self + 0x78) = 0;
    *(int*)((char*)self + 0x74) = 0;
}
