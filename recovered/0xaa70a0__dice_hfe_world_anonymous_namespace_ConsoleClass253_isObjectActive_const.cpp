// FUNCTION: BF2 0xaa70a0
namespace dice { namespace hfe {
void* fn_vcall(void* self);
bool cb_aa70a0() {
    void* obj = *(void**)0x0112ee48;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0x120);
    return fn(obj) != 0;
}
} }
