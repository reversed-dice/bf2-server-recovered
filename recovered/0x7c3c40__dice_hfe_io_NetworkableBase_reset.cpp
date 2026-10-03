// FUNCTION: BF2 0x7c3c40
// NetworkableBase::reset 0x7c3c40 — byte 1 x2 + 7 dwords 0
namespace dice { namespace hfe { namespace io {

void nb_reset(void* self) {
    *(unsigned char*)((char*)self + 0x30) = 1;
    *(unsigned int*)((char*)self + 0x38) = 0;
    *(unsigned int*)((char*)self + 0x3c) = 0;
    *(unsigned int*)((char*)self + 0x40) = 0;
    *(unsigned int*)((char*)self + 0x34) = 0;
    *(unsigned int*)((char*)self + 0x44) = 0;
    *(unsigned int*)((char*)self + 0x48) = 0;
    *(unsigned int*)((char*)self + 0x4c) = 0;
    *(unsigned char*)((char*)self + 0x18) = 1;
}

}}}
