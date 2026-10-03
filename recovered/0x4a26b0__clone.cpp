// FUNCTION: BF2 0x4a26b0
// Player::setKitTimeStamp 0x4a23a0 — double store
namespace dice { namespace hfe {

void setKitTimeStamp(void* self, double ts) {
    *(double*)((char*)self + 0x150) = ts;
}

}}
