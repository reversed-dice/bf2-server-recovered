// FUNCTION: BF2 0x76d620
namespace dice { namespace hfe { namespace ai {
void handleIndirectPro_0x76d620(void* self, void* a, void* b, void* c, void* obj, int d) {
    void* fn = (*(void***)self)[0xa];
    void* r = ((void* (*)(void*))(*(void***)obj)[0x1b])(obj);
    ((void (*)(void*, void*, void*, int, void*, int))fn)(self, a, b, *(int*)((char*)obj + 0x20), r, d);
}
} } }
