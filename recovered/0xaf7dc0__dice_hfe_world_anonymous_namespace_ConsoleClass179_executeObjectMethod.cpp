// FUNCTION: BF2 0xaf7dc0
namespace dice { namespace hfe { namespace world { namespace anonymous_namespace {
void* executeObj_0xaf7dc0(void* self) {
    if (*(int*)((char*)self + 0x30) != 1)
        return 0;
    float v = *(float*)((char*)*(void**)((char*)self + 0x38));
    *(char*)((char*)self + 0x108) = 0;
    void* g = *(void**)0x01140ad8;
    ((void (*)(void*, int))(*(void***)g)[0x13])(g, v != *(float*)0x00b2d910);
    return 0;
}
} } } }
