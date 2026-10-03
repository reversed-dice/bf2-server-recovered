// FUNCTION: BF2 0x5f1060
// SoldierDeviationCompTemplate::setTurnDev 0x5f1060 — 4 float stores
namespace dice { namespace hfe { namespace world {

void setTurnDev(void* self, float a, float b, float c, float d) {
    *(float*)((char*)self + 0x34) = a;
    *(float*)((char*)self + 0x28) = b;
    *(float*)((char*)self + 0x2c) = c;
    *(float*)((char*)self + 0x30) = d;
}

}}}
