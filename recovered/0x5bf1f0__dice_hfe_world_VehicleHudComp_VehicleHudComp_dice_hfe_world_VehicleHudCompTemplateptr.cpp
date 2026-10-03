// FUNCTION: BF2 0x5bf1f0
namespace dice { namespace hfe {
void set_5bf1f0(void* self, void* arg) {
    *(void**)self = (void*)0xb6a170;
    *(int*)((char*)self + 0x8) = (int)0x1;
    *(void**)((char*)self + 0x10) = arg;
    *(unsigned char*)((char*)self + 0x20) = (unsigned char)0x0;
}
} }
