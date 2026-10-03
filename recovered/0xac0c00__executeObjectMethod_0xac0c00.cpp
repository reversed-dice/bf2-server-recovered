// FUNCTION: BF2 0xac0c00
namespace dice { namespace hfe { namespace tool { namespace anonymous_namespace {
long executeObjectMethod_0xac0c00(void* self) {
    if (*(int*)((char*)self + 0x30) != 0)
        return 0;
    *(char*)((char*)self + 0x108) = 1;
    *(int*)((char*)self + 0x10c) = *(int*)0x00f68b80;
    return (long)((char*)self + 0x10c);
}
} } } }
