// FUNCTION: BF2 0x53d4f0
// PlayerControlObject::exitPlayer 0x53d4f0 — MOV ESI,1 + tail-call
namespace dice { namespace hfe { namespace world {

extern void pco_exit2(void* self, int a);

void exitPlayer(void* self) {
    pco_exit2(self, 1);
}

}}}
