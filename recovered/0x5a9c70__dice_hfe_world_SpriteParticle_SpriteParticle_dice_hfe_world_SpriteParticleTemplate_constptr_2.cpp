// FUNCTION: BF2 0x5a9c70
namespace dice { namespace hfe { namespace world {

extern "C" void Object_ctor_IObjectTemplateptr(void*, void*);
extern "C" void Object_updateFlags_unsigned_int_unsigned_int(void*, unsigned, unsigned);

void fn_0x5a9c70(void* self, void* tmpl) {
    Object_ctor_IObjectTemplateptr(self, tmpl);
    *(long*)self = 0xb64630;
    *(long*)((char*)self + 0x100) = 0xb64940;
    *(unsigned*)((char*)self + 0x220) = 0x3f800000;
    *(unsigned char*)((char*)self + 0x224) = 0;
    *(long*)((char*)self + 0x218) = 0;
    Object_updateFlags_unsigned_int_unsigned_int(self, 8, 0);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticle_SpriteParticle_dice_hfe_world_SpriteParticleTemplate_constptr (0x5a9c70)
