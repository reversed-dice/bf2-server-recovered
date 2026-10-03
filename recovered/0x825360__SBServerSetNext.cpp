// FUNCTION: BF2 0x825360
namespace dice { namespace hfe {
struct Obj{ unsigned char _pad[0x28]; void* v; };
void set_825360(Obj* o, void* v) { o->v = v; }
} }
