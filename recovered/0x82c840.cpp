// FUNCTION: BF2 0x82c840
extern "C" void fn_82f8c0(void*, int);
extern "C" void fn_83b7a0(void*);
extern "C" void fn_837fc0(void*);
extern "C" void fn_83ef10(void*);
extern "C" void fn_834a20(void*);

extern "C" void gpiDestroy_82c840(void* self)
{
    void* g = *(void**)self;
    fn_82f8c0(self, 1);
    if (*(int*)((char*)g + 0x100) && *(int*)((char*)g + 0x23c)) {
        fn_834a20(self);
    }
    fn_83b7a0(*(void**)((char*)g + 0x4b0));
    fn_837fc0(self);
    fn_83ef10(g);
    *(void**)self = 0;
}
