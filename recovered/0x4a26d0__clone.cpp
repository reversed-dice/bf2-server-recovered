// FUNCTION: BF2 0x4a26d0
// Player::setKitTimeStamp 0x4a23a0 — double store
namespace dice { namespace hfe {

void setKitTimeStamp(void* self, double ts) {
    *(double*)((char*)self + 0x158) = ts;
}

}}
