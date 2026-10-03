// FUNCTION: BF2 0x63d330
namespace dice { namespace hfe { namespace world {
struct Obj { unsigned char _pad[0x2a4]; unsigned char flag; unsigned char _pad2[3]; float v; };
void set_0x63d330(Obj* o, float val) {
    o->flag = 1;
    o->v = val;
}
} } }
