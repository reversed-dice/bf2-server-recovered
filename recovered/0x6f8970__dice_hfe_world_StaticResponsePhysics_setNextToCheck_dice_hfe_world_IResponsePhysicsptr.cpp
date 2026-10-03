// FUNCTION: BF2 0x6f8970
// StaticResponsePhysics::setNextToCheck 0x6f8970 — byte + ptr
namespace dice { namespace hfe { namespace world {

void setNextToCheck(void* self, void* next) {
    *(unsigned char*)((char*)self + 0x34) = 0;
    *(void**)((char*)self + 0x38) = next;
}

}}}
