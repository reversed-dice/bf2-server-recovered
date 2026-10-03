// FUNCTION: BF2 0xaa7b90
namespace dice { namespace hfe {
void* fn_vcall(void* self);
bool cb_aa7b90() {
    void* obj = *(void**)0x0112ee40;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0xa0);
    return fn(obj) != 0;
}
} }
