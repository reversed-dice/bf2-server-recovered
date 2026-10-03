// FUNCTION: BF2 0x4f4ac0
// DemoSpectatorCamera::setPlaybackStream 0x4f4ac0 — store + byte
namespace dice { namespace hfe {

void setPlaybackStream(void* self, void* stream) {
    *(void**)((char*)self + 0x80) = stream;
    *(unsigned char*)((char*)self + 0x25) = 0;
}

}}
