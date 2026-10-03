// FUNCTION: BF2 0x78c0c0
namespace dice { namespace hfe {
void* fn_vcall(void* self);
bool cb_78c0c0() {
    void* obj = *(void**)0x010ade58;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0x10);
    return fn(obj) != 0;
}
} }
