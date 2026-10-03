// FUNCTION: BF2 0x7688d0
namespace dice { namespace hfe {
struct Vec2 { float x, y; };
Vec2* cb_7688d0(Vec2* a, Vec2* out, Vec2* b) {
    out->x = (a->x + b->x) * 0.5f;
    out->y = (a->y + b->y) * 0.5f;
    return out;
}
} }
// REVERSED_FUNCTION: dice_hfe_getBoxCentre_dice_hfe_Vec2_constref_dice_hfe_Vec2_constref (0x7688d0)
