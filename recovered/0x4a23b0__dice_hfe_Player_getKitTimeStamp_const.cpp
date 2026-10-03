// FUNCTION: BF2 0x4a23b0
// Player::getKitTimeStamp 0x4a23b0 — double
namespace dice { namespace hfe {

double getKitTimeStamp(void* self) {
    return *(double*)((char*)self + 0x70);
}

}}
