extern "C" void* g;
typedef void (*vfn1)(void*, int);

extern "C" void setHasFocus_7f9cf0(void* self, bool focus, int id)
{
    if (focus) {
        ((vfn1)(*(void***)g)[0x38/8])(g, id);
    } else {
        ((vfn1)(*(void***)g)[0x40/8])(g, id);
    }
}
