// FUNCTION: BF2 0xad9560
namespace dice { namespace hfe {
void* fn_vcall(void* self);
bool cb_ad9560() {
    void* obj = *(void**)0x010935c8;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0x48);
    return fn(obj) != 0;
}
} }
