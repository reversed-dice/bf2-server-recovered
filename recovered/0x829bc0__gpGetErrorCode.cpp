// FUNCTION: BF2 0x829bc0
namespace dice { namespace hfe {
int gpGetErrorCode_0x829bc0(void* self, int* out) {
    if (!self)
        goto err;
    void* vt = *(void**)self;
    if (!vt)
        goto err;
    if (!out)
        goto err;
    if (*(int*)((char*)vt + 0x108) == 0) {
        *out = *(int*)((char*)vt + 0x494);
        return 0;
    }
    *out = 0;
    return 0;
err:
    return 2;
}
} }
