// FUNCTION: BF2 0x6a5d90
namespace dice { namespace hfe { namespace world {
extern void func_0x004085b8(void*);
extern void func_0x006a4f50(void*, void*);  // rb_tree M_erase
void dtor_0x6a5d90(void* p) {
    void** cur = *(void***)((char*)p + 0x20);
    *(void**)p = (void*)0xb8fd70;
    void** end = (void**)((char*)p + 0x28);
    if (*end != cur) {
        do {
            void* e = *cur;
            if (e != 0) {
                func_0x006a4f50(e, *(void**)((char*)e + 0x10));
                func_0x004085b8(e);
            }
            cur = cur + 1;
        } while (*end != cur);
    }
    void* buf = *(void**)((char*)p + 0x20);
    if (buf != 0) {
        func_0x004085b8(buf);
    }
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PortalPassing_dtor_PortalPassing (0x6a5d90)
