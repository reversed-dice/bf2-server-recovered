extern "C" void* g;
extern "C" int g_iid;
typedef void* (*vfn1)(void*, int);
typedef void (*vfn2)(void*, void*);

extern "C" void updateClientStats_7ceae0(void* self)
{
    if (g) {
        void* r = ((vfn1)(*(void***)g)[0x18/8])(g, g_iid);
        if (r) {
            ((vfn2)(*(void***)r)[0x78/8])(r, (char*)self + 0x80);
        }
    }
}
