// FUNCTION: BF2 0x4bbad0
namespace dice { namespace hfe {
int spawn_0x4bbad0(void* self, void* obj) {
    if (!obj)
        return 0;
    void* fn = (*(void***)obj)[0x1c];
    void* r = ((void* (*)(void*))(*(void***)self)[0x1b])(self);
    ((void (*)(void*, void*))fn)(obj, r);
    return 1;
}
} }
