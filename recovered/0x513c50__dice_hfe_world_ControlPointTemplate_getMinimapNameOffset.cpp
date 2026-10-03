// FUNCTION: BF2 0x513c50
// ControlPointTemplate::getMinimapNameOffset 0x513c50 — 2 loads puis 2 stores
namespace dice { namespace hfe { namespace world {

struct Vec2 { float x, y; };

Vec2* getMinimapNameOffset(Vec2* out, void* self) {
    float a = *(float*)((char*)self + 0x2cc);
    float b = *(float*)((char*)self + 0x2d0);
    out->x = a;
    out->y = b;
    return out;
}

}}}
