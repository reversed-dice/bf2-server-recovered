// FUNCTION: BF2 0x82d0f0
namespace dice {
extern void fn_83ad30(void* a, int b);
int gpiEnable_0x82d0f0(void* a, int v) {
    void* p = *(void**)a;
    switch (v) {
    case 0x101: *(int*)((char*)p + 0x108) = 1; return 0;
    case 0x102: *(int*)((char*)p + 0x104) = 1; return 0;
    case 0x100: *(int*)((char*)p + 0x100) = 1; return 0;
    }
    fn_83ad30(a, 0xbb51c8);
    return 2;
}
}
