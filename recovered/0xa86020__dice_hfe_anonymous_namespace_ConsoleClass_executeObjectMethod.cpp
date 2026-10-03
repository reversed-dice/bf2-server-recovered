// FUNCTION: BF2 0xa86020
extern "C" void* fn_4173b0(void*);
extern "C" char fn_4174d0(void*, int);
extern "C" void* pad0(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_4174d0(fn_4173b0((char*)self + 0x110), 0);
    return (char*)self + 0x110;
}
extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_4174d0(fn_4173b0((char*)self + 0x110), 0);
    return (char*)self + 0x110;
}
extern "C" void* pad2(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(int*)((char*)self + 0xc) = 1;
    fn_4174d0(fn_4173b0((char*)self + 0x110), 0);
    return (char*)self + 0x110;
}
extern "C" void* pad3(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_4174d0(fn_4173b0((char*)self + 0x110), 0);
    return (char*)self + 0x110;
}
extern "C" void* pad4(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_4174d0(fn_4173b0((char*)self + 0x110), 0);
    return (char*)self + 0x110;
}
extern "C" void* pad5(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(int*)((char*)self + 0xc) = 1;
    fn_4174d0(fn_4173b0((char*)self + 0x110), 0);
    return (char*)self + 0x110;
}
extern "C" void* target_a86020(void* self, void* a, void* b, void* c, void* d)
{
    if (*(int*)((char*)self + 0x30)) return 0;
    *(char*)((char*)self + 0x108) = 1;
    char c2 = fn_4174d0(fn_4173b0(self), 0);
    *(char*)((char*)self + 0x10a) = c2;
    return (char*)self + 0x10a;
}
