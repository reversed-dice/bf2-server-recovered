// FUNCTION: BF2 0x8a3a10
namespace dice { namespace hfe {
void* fn_vcall(void* self);
bool cb_8a3a10() {
    void* obj = *(void**)0x010c2800;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0xa8);
    return fn(obj) != 0;
}
} }
