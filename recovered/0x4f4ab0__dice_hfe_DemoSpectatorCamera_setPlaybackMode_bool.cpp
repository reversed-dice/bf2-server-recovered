// FUNCTION: BF2 0x4f4ab0
// DemoSpectatorCamera::setPlaybackMode 0x4f4ab0 — store bool
namespace dice { namespace hfe {

void setPlaybackMode(void* self, bool mode) {
    *(unsigned char*)((char*)self + 0x24) = (unsigned char)mode;
}

}}
