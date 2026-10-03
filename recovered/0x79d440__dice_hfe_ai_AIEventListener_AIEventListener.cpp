// FUNCTION: BF2 0x79d440
namespace dice { namespace hfe {
void set_79d440(void* self) {
    *(void**)self = (void*)0xba80b0;
    *(unsigned char*)((char*)self + 0x8) = (unsigned char)0x1;
    *(unsigned char*)((char*)self + 0x9) = (unsigned char)0x0;
}
} }
