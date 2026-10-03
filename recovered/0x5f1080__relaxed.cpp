// FUNCTION: BF2 0x5f1080
// SoldierDeviationCompTemplate::setTurnDev 0x5f1060 — 4 float stores
namespace dice { namespace hfe { namespace world {

void setTurnDev(void* self, float a, float b, float c, float d) {
    *(float*)((char*)self + 0x44) = a;
    *(float*)((char*)self + 0x38) = b;
    *(float*)((char*)self + 0x3c) = c;
    *(float*)((char*)self + 0x40) = d;
}

}}}
