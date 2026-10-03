extern "C" void fn_4080d8(int, void*);

typedef void (*vfn10)(void*, void*, int);

extern "C" void TiXmlPrint_645280(void* self, void* arg, int depth)
{
    void* node = *(void**)((char*)self + 0x28);
    while (node) {
        ((vfn10)(*(void***)node)[0x10/8])(node, arg, depth);
        fn_4080d8(0xa, arg);
        node = *(void**)((char*)node + 0x50);
    }
}
