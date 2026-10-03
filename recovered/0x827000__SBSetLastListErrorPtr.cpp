// FUNCTION: BF2 0x827000
namespace dice { namespace hfe {
struct Obj{ unsigned char _pad[0xad0]; void* v; };
void set_827000(Obj* o, void* v) { o->v = v; }
} }
