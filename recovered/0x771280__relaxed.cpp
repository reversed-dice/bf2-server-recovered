// FUNCTION: BF2 0x771280
namespace dice { namespace hfe {
void* fn_vcall(void* self);
bool cb_78c0c0() {
    void* obj = *(void**)0x0112ee38;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0x40);
    return fn(obj) != 0;
}
} }
