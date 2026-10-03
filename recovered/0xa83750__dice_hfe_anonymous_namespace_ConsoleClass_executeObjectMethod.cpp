// FUNCTION: BF2 0xa83750
extern "C" void* fn_4fe7c0(void*);
extern "C" char fn_502b20(void*);
extern "C" void* pad1(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_502b20(fn_4fe7c0((char*)self + 0x110));
    return (char*)self + 0x110;
}
extern "C" void* target_a83750(void* self, void* a, void* b, void* c)
{
    if (*(int*)((char*)self + 0x30)) return 0;
    *(char*)((char*)self + 0x108) = 1;
    char c2 = fn_502b20(fn_4fe7c0(self));
    *(char*)((char*)self + 0x10a) = c2;
    return (char*)self + 0x10a;
}
