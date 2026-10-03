// FUNCTION: BF2 0x6171b0
namespace dice { namespace hfe { namespace world {

extern void* g_head_0x1091b20;

void fn_0x6171b0(void* self) {
    void* node = (char*)self + 0x8;
    *(long*)((char*)self + 0x8) = 0;
    *(long*)((char*)self + 0x28) = 0;
    *(int*)((char*)self + 0x8) = 0;
    *(long*)((char*)self + 0x10) = 0;
    *(void**)((char*)self + 0x18) = node;
    *(void**)((char*)self + 0x20) = node;
    void* head = g_head_0x1091b20;
    void* newhead = head ? head : self;
    g_head_0x1091b20 = newhead;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_StickyProjectileManager_StickyProjectileManager (0x6171b0)
