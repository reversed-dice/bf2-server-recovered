// FUNCTION: BF2 0x5e4190
// GenericFireArm::getWorksInWater 0x5e4190 — défaut 1
namespace dice { namespace hfe { namespace world {

unsigned char getWorksInWater(void* self) {
    void* a = *(void**)((char*)self + 0x330);
    if (a == 0)
        return 1;
    return *(unsigned char*)((char*)a + 0x25c);
}

}}}
