// FUNCTION: BF2 0x6a72c0
namespace dice { namespace hfe { namespace tool {
void* getTemplateFromName_0x6a72c0(void* self, void* s) {
    void* sv = *(void**)s;
    if (*(long*)((char*)sv - 0x18) == 0) {
        void* m = *(void**)0x0112ee40;
        return ((void* (*)(void*, void*))(*(void***)m)[0x14])(m, s);
    }
    void* m = *(void**)0x0112ee40;
    return ((void* (*)(void*, void*))(*(void***)m)[0x9])(m, s);
}
} } }
