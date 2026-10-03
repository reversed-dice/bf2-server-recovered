// FUNCTION: BF2 0x56a840
extern "C" void fn_56a610(void*, void*, int);
extern "C" void target_56a840(void* self, int a, int b, void* unused, void* c)
{
    if (a) return;
    if (b != 0x11) return;
    fn_56a610(self, c, *(int*)((char*)c + 0xc));
}
