// FUNCTION: BF2 0x6f8960
// StaticResponsePhysics::resetNextToCheck 0x6f8960 — byte + qword
namespace dice { namespace hfe { namespace world {

void resetNextToCheck(void* self) {
    *(unsigned char*)((char*)self + 0x34) = 1;
    *(unsigned long long*)((char*)self + 0x38) = 0;
}

}}}
