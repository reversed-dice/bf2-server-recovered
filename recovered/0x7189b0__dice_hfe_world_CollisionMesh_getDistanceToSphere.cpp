// FUNCTION: BF2 0x7189b0
extern "C" unsigned char fn_71a500(void* a, int b, int c, unsigned char d, void* e, void* f, void* g, void* h, void* i, void* j, void* k, void* l, void* m);

extern "C" unsigned char getDistanceToSphere_7189b0(void* self, int p2, unsigned char p3, void* p4, void* p5, void* p6, void* p7, void* p8, void* p9, void* p10, void* p11, void* p12)
{
    return fn_71a500(*(void**)((char*)self + 0x18), *(int*)((char*)self + 0x24), p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
}
