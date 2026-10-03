// FUNCTION: BF2 0xaa8720
namespace dice { namespace hfe {
void* fn_vcall(void* self);
bool cb_aa8720() {
    void* obj = *(void**)0x0112ee38;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0x100);
    return fn(obj) != 0;
}
} }
