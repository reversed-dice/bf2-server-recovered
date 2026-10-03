// FUNCTION: BF2 0x7890c0
extern "C" void fn_789f90(void* self);

extern "C" void fn_789100(void* self)
{
    void* q = *(void**)((char*)self + 0x10);
    *(void**)self = (void*)0xba4910;
    if (*(char*)((char*)q + 0x21) != 0) {
        void* g = *(void**)0x10add68;
        void** vt = *(void***)g;
        ((void (*)(void*, int, void*))vt[0x31])(g, *(int*)((char*)self + 0x28), *(void**)((char*)self + 0x8));
    }
    fn_789f90(self);
}
