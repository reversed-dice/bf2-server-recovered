// FUNCTION: BF2 0x5f5430
// FireComp::fireStop 0x5f5430 — compare + store conditionnel
namespace dice { namespace hfe { namespace world {

void fireStop(void* self) {
    *(unsigned char*)((char*)self + 0x88) = 0;
    if (*(unsigned int*)((char*)self + 0x15c) == 1)
        *(unsigned int*)((char*)self + 0x15c) = 0;
}

}}}
