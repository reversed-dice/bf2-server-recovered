// FUNCTION: BF2 0x6011f0
namespace dice { namespace hfe { namespace world {
// 0x6011f0 ThrownFireComp ctor (twin)
extern "C" void fn_5f5f10(void* self);  // FireComp ctor
void ThrownFireComp_0x6011f0(void* self, void* tmpl) {
    fn_5f5f10(self);
    *(void**)((char*)self + 0x00) = (void*)0xb757f0;
    *(void**)((char*)self + 0x20) = (void*)0xb75a60;
    *(int*)((char*)self + 0x160) = 1;
    *(unsigned int*)((char*)self + 0x164) = 0x3f800000;
    *(int*)((char*)self + 0x168) = 0;
    *(int*)((char*)self + 0x16c) = 0;
    *(char*)((char*)self + 0x174) = 0;
    *(char*)((char*)self + 0x175) = 0;
    int* base = (int*)((char*)self + 0x178);
    int* p = base;
    long n = 4;
    do {
        p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0;
        p += 4;
        n--;
    } while (n != 0);
    *(unsigned int*)(base + 0x3c/4) = 0x3f800000;
    *(unsigned int*)(base + 0x28/4) = 0x3f800000;
    *(unsigned int*)(base + 0x14/4) = 0x3f800000;
    *(unsigned int*)(base + 0) = 0x3f800000;
    *(void**)((char*)self + 0x1c0) = tmpl;
    *(int*)((char*)self + 0x1b8) = 0;
    *(char*)((char*)self + 0x1bc) = 0;
}
} } }
