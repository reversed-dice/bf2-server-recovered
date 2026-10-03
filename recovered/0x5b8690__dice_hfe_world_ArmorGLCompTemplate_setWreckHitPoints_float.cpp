// FUNCTION: BF2 0x5b8690
// ArmorGLCompTemplate::setWreckHitPoints 0x5b8690 — 2 stores
namespace dice { namespace hfe { namespace world {

void setWreckHitPoints(void* self, float hp) {
    *(float*)((char*)self + 0x164) = hp;
    *(float*)((char*)self + 0x170) = hp;
}

}}}
