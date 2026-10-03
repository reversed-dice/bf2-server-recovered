// FUNCTION: BF2 0x78c220
namespace dice { namespace hfe { namespace ai {
typedef void* (*vfn_108)(void*);
void cb_78c220(void* self, void* src) {
    if (src != 0)
        *(void**)((char*)self + 0x30) = (*(vfn_108*)((char*)*(void**)src + 0x108))(src);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObject_borrowArmament_dice_hfe_ai_IAIObjectptr (0x78c220)
