// FUNCTION: BF2 0x73e800
namespace dice { namespace hfe {

void* fn_0x73e800(void* self, void* other) {
    if (self != other) {
        *(long*)self = *(long*)other;
        *(long*)((char*)self+8) = *(long*)((char*)other+8);
    }
    return self;
}

} }
// REVERSED_FUNCTION: dice_hfe_MD5String_operator_dice_hfe_MD5String_constref (0x73e800)
