// FUNCTION: BF2 0x63dd10
namespace dice { namespace hfe { namespace world {
float fn_0x63dd10(void* self) {
    if (*(char*)((char*)self + 8) & 1)
        return 0.0f;
    return ((float (*)(void*))(*(void***)self)[0x66])(self);
}
} } }
