// FUNCTION: BF2 0x513d80
// ControlPointTemplate::getHoistMinMax 0x513d80 — 2 loads puis 2 stores
namespace dice { namespace hfe { namespace world {

struct Vec2 { float x, y; };

Vec2* getHoistMinMax(Vec2* out, void* self) {
    float a = *(float*)((char*)self + 0x2b0);
    float b = *(float*)((char*)self + 0x2b4);
    out->x = a;
    out->y = b;
    return out;
}

}}}
