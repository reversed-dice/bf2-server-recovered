// FUNCTION: BF2 0x825980
namespace dice { namespace hfe {
struct Obj{ unsigned char _pad[0x15]; unsigned char v; };
void set_825980(Obj* o, unsigned char v) { o->v = v; }
} }
