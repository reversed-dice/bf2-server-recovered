// FUNCTION: BF2 0x8a2d10
namespace dice { namespace hfe {
void* fn_vcall(void* self);
bool cb_8a2d10() {
    void* obj = *(void**)0x010c2800;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0x50);
    return fn(obj) != 0;
}
} }
