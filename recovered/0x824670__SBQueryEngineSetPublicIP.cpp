// FUNCTION: BF2 0x824670
namespace dice { namespace hfe {
struct Obj{ unsigned char _pad[0x40]; unsigned int v; };
void set_824670(Obj* o, unsigned int v) { o->v = v; }
} }
