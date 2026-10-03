// FUNCTION: BF2 0x565380
namespace dice { namespace hfe { namespace world {
extern void fn_566910(void* list, void* end);
extern void fn_5652c0(void* p);
void cb_565380(void* self) {
    void* list2 = (char*)self + 0x80;
    fn_566910(list2, *(void**)((char*)list2 + 0x10));
    *(void**)((char*)list2 + 0x10) = 0;
    *(void**)((char*)list2 + 0x28) = 0;
    *(void**)((char*)list2 + 0x18) = (char*)self + 0x88;
    *(void**)((char*)list2 + 0x20) = (char*)self + 0x88;
    void* sentinel = (char*)self + 0x8;
    void* node = *(void**)((char*)self + 0x8);
    while (node != sentinel) {
        fn_5652c0(*(void**)((char*)node + 0x10));
        node = *(void**)((char*)node + 0x0);
    }
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TriggerableManager_refresh (0x565380)
