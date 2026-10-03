// FUNCTION: BF2 0x5eceb0
// ReplenishingAmmoComp::fireStop 0x5eceb0 — flag conditionnel
namespace dice { namespace hfe { namespace world {

void fireStop(void* self, bool b) {
    void* a = *(void**)((char*)self + 0xb0);
    if (*(unsigned char*)((char*)a + 0x7c) != 0)
        *(unsigned char*)((char*)self + 0xa8) = 1;
}

}}}
