extern "C" void* fn_ad4120();

extern "C" void* executeObjectMethod_ada690(void* self, void* a, void* b)
{
    if (*(int*)((char*)self + 0x30) != 0) return 0;
    *(char*)((char*)self + 0x108) = 1;
    void* o = fn_ad4120();
    *(int*)((char*)self + 0x10c) = *(int*)((char*)o + 0x4);
    return (char*)self + 0x10c;
}
