// FUNCTION: BF2 0x5bd380
namespace dice { namespace hfe { namespace world {

extern "C" void* string_copy_ctor(void*, void*);
void* fn_0x5bd380(void* self, void* p) {
    string_copy_ctor(self, (char*)p+0x80);
    return self;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_HelpHudCompTemplate_getLowAmmoHelpSoundKey (0x5bd380)
