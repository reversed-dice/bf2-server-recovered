// FUNCTION: BF2 0x7688a0
namespace dice { namespace hfe {
struct Vec2 { float x, y; };
Vec2* cb_7688a0(Vec2* a, Vec2* b, Vec2* out) {
    out->x = b->x + (b->x - a->x);
    out->y = b->y + (b->y - a->y);
    return out;
}
} }
// REVERSED_FUNCTION: dice_hfe_getBoxMaxCorner_dice_hfe_Vec2_constref_dice_hfe_Vec2_constref (0x7688a0)
