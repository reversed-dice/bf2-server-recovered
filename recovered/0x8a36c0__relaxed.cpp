// FUNCTION: BF2 0x8a36c0
namespace dice { namespace hfe {
void* fn_vcall(void* self);
bool cb_771280() {
    void* obj = *(void**)0x010c2800;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0x98);
    return fn(obj) != 0;
}
} }
