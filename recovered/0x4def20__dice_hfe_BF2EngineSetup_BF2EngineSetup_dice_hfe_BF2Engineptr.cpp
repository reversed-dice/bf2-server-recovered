// FUNCTION: BF2 0x4def20
namespace dice { namespace hfe {
void set_4def20(void* self, void* arg) {
    *(void**)((char*)self + 0x10) = (void*)0x0;
    *(unsigned char*)((char*)self + 0x18) = (unsigned char)0x0;
    *(void**)self = arg;
    *(void**)((char*)self + 0x8) = (void*)0x0;
}
} }
