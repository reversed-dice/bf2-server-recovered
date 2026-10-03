// FUNCTION: BF2 0x5f10a0
// SoldierDeviationCompTemplate::setMiscDev 0x5f10a0 — 3 float stores
namespace dice { namespace hfe { namespace world {

void setMiscDev(void* self, float a, float b, float c) {
    *(float*)((char*)self + 0x50) = a;
    *(float*)((char*)self + 0x48) = b;
    *(float*)((char*)self + 0x4c) = c;
}

}}}
