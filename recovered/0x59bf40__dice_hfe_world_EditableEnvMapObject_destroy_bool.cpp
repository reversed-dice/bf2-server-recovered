// FUNCTION: BF2 0x59bf40
namespace dice { namespace hfe { namespace world {

typedef void (*vfn0)(void*);
extern "C" void Object_destroy_bool(void*, bool);

void fn_0x59bf40(void* self, bool flag) {
    void* p = *(void**)((char*)self + 0x230);
    if (p) {
        ((vfn0)(*(void***)p)[0x28/8])(p);
    }
    Object_destroy_bool(self, flag);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_EditableEnvMapObject_destroy_bool (0x59bf40)
