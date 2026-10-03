// FUNCTION: BF2 0x7915a0
namespace dice { namespace hfe {
bool cb_0x7915a0() {
    void* obj = *(void**)0x10add70;
    void* vtable = *(void**)obj;
    return ((bool(*)(void*))*(void**)((char*)vtable + 0x68))(obj);
}
} }
