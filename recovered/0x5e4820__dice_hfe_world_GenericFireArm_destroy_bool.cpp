// FUNCTION: BF2 0x5e4820
// GenericFireArm::destroy 0x5e4820 — 2 étapes
namespace dice { namespace hfe { namespace world {

extern void destroy_a(void* self);
extern void destroy_b(void* self, bool b);

void destroy(void* self, bool b) {
    destroy_a(self);
    destroy_b(self, b);
}

}}}
