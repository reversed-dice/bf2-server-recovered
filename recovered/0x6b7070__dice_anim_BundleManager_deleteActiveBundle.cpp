// FUNCTION: BF2 0x6b7070
namespace dice { namespace anim {

extern "C" void BundleManager_deleteBundle_Bundleptr(void*, void*);
void fn_0x6b7070(void* self) {
    void* p = *(void**)((char*)self+0x30);
    BundleManager_deleteBundle_Bundleptr(self, p);
    *(void**)((char*)self+0x30) = 0;
}

} }
// REVERSED_FUNCTION: dice_anim_BundleManager_deleteActiveBundle (0x6b7070)
