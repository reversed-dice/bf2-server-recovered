// FUNCTION: BF2 0x4a2320
namespace dice { namespace hfe {
float fn_0x4a2320(void* self) {
    if (*(char*)((char*)self + 0x108) == 0)
        return 0.0f;
    return ((float (*)(void*))(*(void***)self)[0x3d])(self);
}
} }
