// FUNCTION: BF2 0x5a0810
// Particle::setEmitter 0x5a0810 — copy dword
namespace dice { namespace hfe { namespace world {

void setEmitter(void* self, void* emitter) {
    *(int*)((char*)self + 0x258) = *(int*)((char*)emitter + 0x20);
}

}}}
