// FUNCTION: BF2 0x8190c0
namespace dice { namespace hfe {
struct Obj{ unsigned char _pad[0x1c]; unsigned int v; };
void set_8190c0(Obj* o, unsigned int v) { o->v = v; }
} }
