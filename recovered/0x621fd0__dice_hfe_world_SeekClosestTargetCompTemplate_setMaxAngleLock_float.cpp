// FUNCTION: BF2 0x621fd0
namespace dice { namespace hfe { namespace world {
struct Obj { unsigned char _pad[0x14]; float v; };
void set_0x621fd0(Obj* o, float val) {
    o->v = val * *(float*)0xb34b68;
}
} } }
