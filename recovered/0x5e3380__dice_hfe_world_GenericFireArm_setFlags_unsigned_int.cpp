// FUNCTION: BF2 0x5e3380
// GenericFireArm::setFlags 0x5e3380 — 2 étapes
namespace dice { namespace hfe { namespace world {

extern void setflags_a(void* self, unsigned int flags);
extern void setflags_b(void* self, unsigned int flags);

void setFlags(void* self, unsigned int flags) {
    setflags_a(self, flags);
    setflags_b(self, flags);
}

}}}
