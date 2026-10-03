// FUNCTION: BF2 0x5ef230
// DeviationCompTemplate::setFireDev 0x5ef230 — 3 float stores
namespace dice { namespace hfe { namespace world {

void setFireDev(void* self, float a, float b, float c) {
    *(float*)((char*)self + 0x18) = a;
    *(float*)((char*)self + 0x10) = b;
    *(float*)((char*)self + 0x14) = c;
}

}}}
