typedef void (*vfn58)(void*, int);
typedef void (*vfn78)(void*, void*, void*, float, float);

extern "C" void copyStateToSystem_6b1830(void* self, void* src, char flag)
{
    *(int*)((char*)self + 0xc) = *(int*)((char*)src + 0xc);
    *(int*)((char*)self + 0x14) = *(int*)((char*)src + 0x14);
    if (flag) {
        ((vfn58)(*(void***)src)[0x58/8])(src, *(int*)((char*)self + 0x8));
    }
    ((vfn78)(*(void***)src)[0x78/8])(src, (char*)self + 0x18, (char*)self + 0x34, *(float*)0xb2f3c0, *(float*)((char*)self + 0x24));
}
