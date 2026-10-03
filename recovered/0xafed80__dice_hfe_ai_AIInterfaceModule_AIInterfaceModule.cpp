// FUNCTION: BF2 0xafed80
namespace dice { namespace hfe {
void set_afed80(void* self) {
    *(void**)self = (void*)0xc96650;
    *(int*)((char*)self + 0x8) = (int)0x1;
    *(unsigned char*)((char*)self + 0x18) = (unsigned char)0x1;
}
} }
