// FUNCTION: BF2 0x8265f0
namespace dice { namespace hfe {
struct Obj{ unsigned char _pad[0xc68]; void* v; };
void set_8265f0(Obj* o, void* v) { o->v = v; }
} }
