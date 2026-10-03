// FUNCTION: BF2 0x684c90
extern "C" void fn_getall(void* self, void* node);

extern "C" void fn_684c90(void* self, void* out)
{
    *(void**)((char*)self + 0x248) = out;
    if (*(void**)((char*)self + 0x10))
        fn_getall(self, *(void**)((char*)self + 0x10));
}
