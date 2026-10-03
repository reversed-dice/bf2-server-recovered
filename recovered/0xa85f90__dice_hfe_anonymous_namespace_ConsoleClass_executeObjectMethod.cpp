// FUNCTION: BF2 0xa85f90
extern "C" void* fn_417360(void*);
extern "C" int fn_4173f0(void*);
extern "C" void* pad0(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_4173f0(fn_417360((char*)self + 0x110));
    return (char*)self + 0x110;
}
extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_4173f0(fn_417360((char*)self + 0x110));
    return (char*)self + 0x110;
}
extern "C" void* pad2(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(int*)((char*)self + 0xc) = 1;
    fn_4173f0(fn_417360((char*)self + 0x110));
    return (char*)self + 0x110;
}
extern "C" void* pad3(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_4173f0(fn_417360((char*)self + 0x110));
    return (char*)self + 0x110;
}
extern "C" void* pad4(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_4173f0(fn_417360((char*)self + 0x110));
    return (char*)self + 0x110;
}
extern "C" void* target_a85f90(void* self, void* a, void* b, void* c, void* d)
{
    if (*(int*)((char*)self + 0x30)) return 0;
    *(char*)((char*)self + 0x108) = 1;
    int c2 = fn_4173f0(fn_417360(self));
    *(int*)((char*)self + 0x10c) = c2;
    return (char*)self + 0x10c;
}
