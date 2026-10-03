// FUNCTION: BF2 0x73f620
namespace dice { namespace hfe {
extern "C" bool dice_hfe_MemoryPool_tryFree_voidptr(void*, void*);
extern "C" void dice_hfe_Malloc_free_voidptr(void*);
void fn_0x73f620(void* self, void* ptr) {
    bool r = dice_hfe_MemoryPool_tryFree_voidptr(self, ptr);
    if (r) return;
    dice_hfe_Malloc_free_voidptr(ptr);
}
} }
// REVERSED_FUNCTION: dice_hfe_MemoryPool_free_voidptr (0x73f620)
