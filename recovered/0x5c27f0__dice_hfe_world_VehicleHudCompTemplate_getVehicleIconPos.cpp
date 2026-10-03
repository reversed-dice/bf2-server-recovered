// FUNCTION: BF2 0x5c27f0
// VehicleHudCompTemplate::getVehicleIconPos 0x5c27f0 — 2 loads puis 2 stores
namespace dice { namespace hfe { namespace world {

struct Vec2 { float x, y; };

Vec2* getVehicleIconPos(Vec2* out, void* self) {
    float a = *(float*)((char*)self + 0x98);
    float b = *(float*)((char*)self + 0x9c);
    out->x = a;
    out->y = b;
    return out;
}

}}}
