// FUNCTION: BF2 0x574a30
namespace dice { namespace hfe { namespace world {

extern "C" void vector_erase_range(void*, void*, void*);
void fn_0x574a30(void* self) {
    void* base = (char*)self+0x1d8;
    void* a = *(void**)base;
    void* b = *(void**)((char*)base+8);
    vector_erase_range(base, a, b);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_BundleTemplate_clearTemplateList (0x574a30)
