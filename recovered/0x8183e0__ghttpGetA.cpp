// FUNCTION: BF2 0x8183e0
extern "C" void ghttpGetExA(void*,void*,void*,void*,void*,void*,int,void*,void*,void*);

void ghttpGetA(void* a, int b, void* c, void* d) {
    ghttpGetExA(a, 0, 0, 0, 0, 0, b, 0, c, d);
}
