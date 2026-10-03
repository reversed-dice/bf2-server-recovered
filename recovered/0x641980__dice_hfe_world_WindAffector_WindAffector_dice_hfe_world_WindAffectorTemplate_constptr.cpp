// FUNCTION: BF2 0x641980
namespace dice { namespace hfe { namespace world {
void ctor_641980(void* self, void* arg) {
    *(void**)self = (void*)0xb87990;
    *(int*)((char*)self + 0x8) = (int)0x1;
    *(void**)((char*)self + 0x10) = arg;
    *(void**)((char*)self + 0x18) = (void*)0x0;
    *(unsigned char*)((char*)self + 0x20) = (unsigned char)0x1;
}
} } }
