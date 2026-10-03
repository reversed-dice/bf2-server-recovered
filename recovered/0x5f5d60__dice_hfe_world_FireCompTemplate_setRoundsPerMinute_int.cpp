// FUNCTION: BF2 0x5f5d60
// FireCompTemplate::setRoundsPerMinute 0x5f5d60 — 1800 / rpm
namespace dice { namespace hfe { namespace world {

void setRoundsPerMinute(void* self, int rpm) {
    *(int*)((char*)self + 0x50) = rpm;
    *(int*)((char*)self + 0x54) = 0x708 / rpm;
}

}}}
