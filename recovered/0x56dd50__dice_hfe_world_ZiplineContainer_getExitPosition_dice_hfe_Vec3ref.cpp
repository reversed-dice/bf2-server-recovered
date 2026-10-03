// FUNCTION: BF2 0x56dd50
namespace dice { namespace hfe { namespace world {
struct Vec3g { float x, y, z; };
extern void fn_56dd20(Vec3g* out, void* self);
struct ZC {
    bool getExitPosition_0x56dd50(Vec3g* out);
};
bool ZC::getExitPosition_0x56dd50(Vec3g* out) {
    Vec3g local;
    fn_56dd20(&local, this);
    out->x = local.x;
    out->y = local.y;
    out->z = local.z;
    return 1;
}
} } }
