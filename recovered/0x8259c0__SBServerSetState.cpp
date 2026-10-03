// FUNCTION: BF2 0x8259c0
namespace dice { namespace hfe {
struct Obj{ unsigned char _pad[0x14]; unsigned char v; };
void set_8259c0(Obj* o, unsigned char v) { o->v = v; }
} }
