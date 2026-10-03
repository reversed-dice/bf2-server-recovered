// FUNCTION: BF2 0x8259b0
namespace dice { namespace hfe {
struct Obj{ unsigned char _pad[0x10]; unsigned int v; };
void set_8259b0(Obj* o, unsigned int v) { o->v = v; }
} }
