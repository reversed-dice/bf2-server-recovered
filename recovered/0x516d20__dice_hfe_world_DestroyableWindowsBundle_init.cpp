// FUNCTION: BF2 0x516d20
namespace dice { namespace hfe { namespace world {

extern "C" void Bundle_init(void*);
extern "C" void DestroyableWindowsBundle_updateStates_unsigned_int(void*, int);
void fn_0x516d20(void* self) {
    Bundle_init(self);
    DestroyableWindowsBundle_updateStates_unsigned_int(self, -1);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DestroyableWindowsBundle_init (0x516d20)
