// FUNCTION: BF2 0x5e3620
// GenericFireArm::busy 0x5e3620 — call + bool arg + retour bool
namespace dice { namespace hfe { namespace world {

extern bool gfa_busy(void* self, int a, bool b);

bool busy(void* self, bool b) {
    return gfa_busy(self, 0, b);
}

}}}

// re-trigger validate 2026-08-06 20:39:58
